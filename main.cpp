#include <iostream>
#include <stdlib.h>
#include "menu.h"

int main(int argc, char const *argv[]){

	system("clear");
	
	Menu menu_principal;
	menu_principal.iniciar_interfaz(argv[1]);

	return 0;
}