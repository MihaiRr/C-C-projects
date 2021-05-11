#include "UI.h"


int main() {
	Map *map = (Map*)malloc(sizeof(Map));
	*map = RepositoryConstructor();
	GetInput(map);
	return 0;
}