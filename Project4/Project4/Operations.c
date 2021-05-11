#include "Services.h"

int AddMap(Map *map, char mapCatalogueNumber[], char stateOfDeterioration[], char mapType[], char yearsOfStorage[]) {
	if (ValidateAddMap(map, mapCatalogueNumber) == 1) return 1;

	AddToRepository(map, mapCatalogueNumber, stateOfDeterioration, mapType, atoi(yearsOfStorage));


	return 0;
}

int UpdateMap(Map *map, char mapCatalogueNumber[], char newstateOfDeterioration[], char newmapType[], char newyearsOfStorage[]) {
	UpdateRepository(map, mapCatalogueNumber, newstateOfDeterioration, newmapType, atoi(newyearsOfStorage));
	return 0;
}

int DeleteMap(Map *map, char mapCatalogueNumber[]) {
	RemoveFromRepository(map, mapCatalogueNumber);
	return 0;
}

const char* ListMaps(Map *map) {
	char stringToPrint[151];
	stringToPrint[0] = 0;
	for (int i = 0; i < map->length; i++) {
		char temp[10];
		strcpy(stringToPrint, map->MapsSorter[i].mapCatalogueNumber);
		strcat(stringToPrint, " ");
		strcat(stringToPrint, map->MapsSorter[i].stateOfDeterioration);
		strcat(stringToPrint, " ");
		strcat(stringToPrint, map->MapsSorter[i].mapType);
		strcat(stringToPrint, " ");
		_itoa(map->MapsSorter[i].yearsOfStorage, temp, 10);
		strcat(stringToPrint, temp);
		strcat(stringToPrint, "\n");
	}
	return stringToPrint;
}

const char* ListMapsBymapType(Map *map, char mapType[]) {
	char stringToPrint[151];
	stringToPrint[0] = 0;
	for (int i = 0; i < map->length; i++) {
		char temp[10];
		if (strcmp(map->MapsSorter[i].mapType, mapType) == 0) {
			strcpy(stringToPrint, map->MapsSorter[i].mapCatalogueNumber);
			strcat(stringToPrint, " ");
			strcat(stringToPrint, map->MapsSorter[i].stateOfDeterioration);
			strcat(stringToPrint, " ");
			strcat(stringToPrint, map->MapsSorter[i].mapType);
			strcat(stringToPrint, " ");
			_itoa(map->MapsSorter[i].yearsOfStorage, temp, 10);
			strcat(stringToPrint, temp);
			strcat(stringToPrint, "\n");
		}
	}
	return stringToPrint;
}