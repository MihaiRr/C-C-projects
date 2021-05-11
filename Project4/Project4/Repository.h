#ifndef REPOSITORY_HEADER_FILE
#define REPOSITORY_HEADER_FILE

#include "Models.h"

typedef struct MapsSorterArray {
	Maps MapsSorter[20];
	int capacity;
	int length;
} Map;

Map RepositoryConstructor();

void AddToRepository(Map *map, char mapCatalogueNumber[], char stateOfDeterioration[], char mapType[], int yearsOfStorage);

void UpdateRepository(Map *map, char mapCatalogueNumber[], char newstateOfDeterioration[], char newmapType[], int newyearsOfStorage);

void RemoveFromRepository(Map *map, char mapCatalogueNumber[]);

#endif