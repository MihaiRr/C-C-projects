#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "UI.h"

void UIError() {
	printf("Error\n");
}

int UIAdd(Map *map, char* split) {
	char param1[20], param2[20], param3[20], param4[10];
	split = strtok(NULL, ", ");
	if (split == NULL) return 1;
	strcpy(param1, split);
	split = strtok(NULL, ", ");
	if (split == NULL) return 1;
	strcpy(param2, split);
	split = strtok(NULL, ", ");
	if (split == NULL) return 1;
	strcpy(param3, split);
	split = strtok(NULL, ", ");
	if (split == NULL) return 1;
	strcpy(param4, split);
	split = strtok(NULL, "\n");
	if (split != NULL) return 1;

	return AddMap(map, param1, param2, param3, param4);

	return 0;
}
int UIUpdate(Map *map, char* split) {
	char param1[20], param2[20], param3[20], param4[10];
	split = strtok(NULL, ", ");
	if (split == NULL) return 1;
	strcpy(param1, split);
	split = strtok(NULL, ", ");
	if (split == NULL) return 1;
	strcpy(param2, split);
	split = strtok(NULL, ", ");
	if (split == NULL) return 1;
	strcpy(param3, split);
	split = strtok(NULL, ", ");
	if (split == NULL) return 1;
	strcpy(param4, split);
	split = strtok(NULL, "\n");
	if (split != NULL) return 1;

	return UpdateMap(map, param1, param2, param3, param4);

	return 0;
}
int UIRemove(Map *map, char* split) {
	char param1[20];
	split = strtok(NULL, " ");
	if (split == NULL) return 1;
	strcpy(param1, split);
	split = strtok(NULL, " ");
	if (split != NULL) return 1;

	return DeleteMap(map, param1);

	return 0;
}
int UIList(Map *map, char* split) {
	char param1[20];
	split = strtok(NULL, " ");

	if (split == NULL) {
		char stringToPrint[151];

		strcpy(stringToPrint, ListMaps(map));

		printf("%s", stringToPrint);
		return 0;
	}
	else {
		strcpy(param1, split);
		split = strtok(NULL, " ");
		if (split != NULL) return 1;
		char stringToPrint[151];

		strcpy(stringToPrint, ListMapsBymapType(map, param1));

		printf("%s", stringToPrint);
		return 0;
	}
	return 0;
}
void GetInput(Map *map) {
	int repeat = 1;


	while (repeat) {
		int error = 1;
		char inputString[101];
		char* split;
		char command[10];

		printf(">");
		scanf(" %[^'\n']s", inputString);

		split = strtok(inputString, " ");
		strcpy(command, split);

		if (strcmp(command, "add") == 0) {
			error = UIAdd(map, split);
		}
		else if (strcmp(command, "update") == 0) {
			error = UIUpdate(map, split);
		}
		else if (strcmp(command, "delete") == 0) {
			error = UIRemove(map, split);
		}
		else if (strcmp(command, "list") == 0) {
			error = UIList(map, split);
		}
		else if (strcmp(inputString, "exit") == 0) {
			return;
		}
		if (error == 1) {
			UIError();
		}
	}
}