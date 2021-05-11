#ifndef SERVICES_HEADER_FILE
#define SERVICES_HEADER_FILE

#include<stdlib.h>
#include<string.h>
#include "Repository.h"
#include "Validators.h"

int AddMap(Map *map, char mapCatalogueNumber[], char stateOfDeterioration[], char mapType[], char yearsOfStorage[]);

int UpdateMap(Map *map, char mapCatalogueNumber[], char newstateOfDeterioration[], char newmapType[], char newyearsOfStorage[]);

int DeleteMap(Map *map, char mapCatalogueNumber[]);

const char* ListMaps(Map *map);

const char* ListMapsBymapType(Map *map, char mapType[]);

#endif