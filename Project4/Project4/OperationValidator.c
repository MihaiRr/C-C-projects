#include "Validators.h"

int ValidateAddMap(Map *map, char mapCatalogueNumber[]) {
	for (int i = 0; i < map->length; i++) {
		if (strcmp(mapCatalogueNumber, map->MapsSorter[i].mapCatalogueNumber) == 0)
			return 1;
	}
	return 0;
}

int ValidateUpdateMap(Map *map, char mapCatalogueNumber[], char newstateOfDeterioration[], char newmapType[], char newyearsOfStorage[]) {
	return 0;
}

int ValidateRemoveMap(Map *map, char mapCatalogueNumber[]) {
	return 0;
}