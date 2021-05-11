#include "Models.h"
#include <string.h>

Maps MapsConstructor(char mapCatalogueNumber[], char stateOfDeterioration[], char mapType[], int yearsOfStorage) {
	Maps newMaps;
	strcpy(newMaps.mapCatalogueNumber, mapCatalogueNumber);
	strcpy(newMaps.stateOfDeterioration, stateOfDeterioration);
	strcpy(newMaps.mapType, mapType);
	newMaps.yearsOfStorage = yearsOfStorage;
	return newMaps;
}

int GetyearsOfStorage(Maps maps)
{
	return maps.yearsOfStorage;
}