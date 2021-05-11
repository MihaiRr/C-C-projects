#ifndef MODELS_HEADER_FILE
#define MODELS_HEADER_FILE

typedef struct MapsSorter {
	char mapCatalogueNumber[20];
	char stateOfDeterioration[20];
	char mapType[20];
	int yearsOfStorage;

} Maps;

Maps MapsConstructor(char mapCatalogueNumber[], char stateOfDeterioration[], char mapType[], int yearsOfStorage);

int GetyearsOfStorage(Maps maps);

//void SetyearsOfStorage(Maps maps ,int newyearsOfStorage);
#endif