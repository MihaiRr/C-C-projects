#ifndef VALIDATORS_HEADER_FILE
#define VALIDATORS_HEADER_FILE

#include"Repository.h"

int ValidateAddMap(Map *map, char mapCatalogueNumber[]);

int ValidateUpdateMap(Map *map, char mapCatalogueNumber[], char newstateOfDeterioration[], char newmapType[], char newyearsOfStorage[]);

int ValidateRemoveMap(Map *map, char mapCatalogueNumber[]);

#endif