#pragma once
#include "Repository.h"
#include "Undo_Redo.h"

typedef struct
{
	TasksRepository* taskRepository;
	UndoRedoService* undoRedoService;
}Controller;

Controller* createController();

void deleteController(Controller* controller);

int addTaskController(Controller* controller, int id, char* title, char* type, char* status);

int removeTaskController(Controller* controller, int id);

int updateTaskController(Controller* controller, int newid, char* newtitle, char* newtype, char* newstatus);

void listTasksController(Controller* controller, char string[]);

void listTaskTitleContainController(Controller* controller, char string[], char str[]);

void listTaskbyTypeController(Controller* controller, char string[], char type[]);

int undoController(Controller* controller);

int redoController(Controller* controller);