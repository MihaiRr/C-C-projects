#include "Repository.h"
#include <string.h>
Map RepositoryConstructor()
{
	Map map;
	map.capacity = 20;
	map.length = 0;
	Maps MapsSorter[20];
	return map;
}

void AddToRepository(Map *map, char mapCatalogueNumber[], char stateOfDeterioration[], char mapType[], int yearsOfStorage) {

	Maps newMaps = MapsConstructor(mapCatalogueNumber, stateOfDeterioration, mapType, yearsOfStorage);

	map->MapsSorter[map->length] = newMaps;

	map->length++;

}
void UpdateRepository(Map *map, char mapCatalogueNumber[], char newstateOfDeterioration[], char newmapType[], int newyearsOfStorage) {
	Maps newMaps = MapsConstructor(mapCatalogueNumber, newstateOfDeterioration, newmapType, newyearsOfStorage);

	for (int i = 0; i < map->length; i++) {
		if (strcmp(mapCatalogueNumber, map->MapsSorter[i].mapCatalogueNumber) == 0)
			map->MapsSorter[i] = newMaps;
	}
}
void RemoveFromRepository(Map *map, char mapCatalogueNumber[]) {
	int i = 0, found = 0;
	while (i < map->length&&found == 0) {
		if (strcmp(mapCatalogueNumber, map->MapsSorter[i].mapCatalogueNumber) != 0) {
			i++;
		}
		else {
			found = 1;
		}
	}

	while (i < map->length - 1) {
		map->MapsSorter[i] = map->MapsSorter[i + 1];
		i++;
	}
	map->length--;
}