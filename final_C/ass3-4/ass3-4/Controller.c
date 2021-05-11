#include "Controller.h"
#include <stdlib.h>
#include <string.h>

Controller* createController()
{
	Controller* controller = (Controller*)malloc(sizeof(Controller));
	TasksRepository* taskRepository = createTaskRepository();
	UndoRedoService* undoRedoService = createUndoRedoService();
	controller->taskRepository = taskRepository;
	controller->undoRedoService = undoRedoService;

	return controller;
}

void deleteController(Controller* controller)
{
	deleteTasksRepository(controller->taskRepository);
	deleteUndoRedoService(controller->undoRedoService);
	free(controller);
}

int addTaskController(Controller* controller, int id, char* title, char* type, char* status)
{
	int successful = 0;

	DynamicArray* tasksCopy = getTasks(controller->taskRepository);
	Task* task = createTask(id, title, type, status);

	successful = addTask(controller->taskRepository, task);

	if (successful == 0)
	{
		deleteTask(task);
		deleteDynamicArray(tasksCopy);
		return 0;
	}

	addToUndoStack(controller->undoRedoService, tasksCopy);
	deleteDynamicArray(tasksCopy);

	return 1;
}

int removeTaskController(Controller* controller, int taskID)
{
	int successful = 0;

	DynamicArray* tasksCopy = getTasks(controller->taskRepository);

	successful = removeTask(controller->taskRepository, taskID);

	if (successful == 0)
	{
		deleteDynamicArray(tasksCopy);
		return 0;
	}

	addToUndoStack(controller->undoRedoService, tasksCopy);
	deleteDynamicArray(tasksCopy);

	return 1;
}

int updateTaskController(Controller* controller, int newid, char* newtitle, char* newtype, char* newstatus)
{
	int successful = 0;

	DynamicArray* tasksCopy = getTasks(controller->taskRepository);
	Task* task = createTask(newid, newtitle, newtype, newstatus);

	successful = updateTask(controller->taskRepository, task);

	if (successful == 0)
	{
		deleteTask(task);
		deleteDynamicArray(tasksCopy);
		return 0;
	}

	addToUndoStack(controller->undoRedoService, tasksCopy);
	deleteDynamicArray(tasksCopy);

	return 1;
}

void listTasksController(Controller* controller, char string[])
{
	repositoryToString(controller->taskRepository, string);
}

void listTaskTitleContainController(Controller* controller, char string[], char strTitle[])
{
	repositoryToStringByTitleContain(controller->taskRepository, string, strTitle);
}

void listTaskbyTypeController(Controller* controller, char string[], char type[])
{
	repositoryToStringByType(controller->taskRepository, string, type);
}



int undoController(Controller* controller)
{
	DynamicArray* tasksCopy = getTasks(controller->taskRepository);
	DynamicArray* undoTasks = getUndo(controller->undoRedoService, tasksCopy);
	
	if (undoTasks == NULL)
	{
		deleteDynamicArray(tasksCopy);
		return 0;
	}
	
	setTasks(controller->taskRepository, undoTasks);
	return 1;
}

int redoController(Controller* controller)
{
	DynamicArray* tasksCopy = getTasks(controller->taskRepository);
	DynamicArray* redoTasks = getRedo(controller->undoRedoService, tasksCopy);

	if (redoTasks == NULL)
	{
		deleteDynamicArray(tasksCopy);
		return 0;
	}

	setTasks(controller->taskRepository, redoTasks);
	return 1;
}