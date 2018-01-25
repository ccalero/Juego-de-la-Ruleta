/*
	App ejecutable
	
	Autor: Carlos Calero de la Fuente
*/

#include "ruleta.h"

#include <iostream>

int main(){
	
	Crupier c("codigo","dni");
	
	Ruleta r(c);


	r.giraRuleta();
	
	cout << r.getBola() << endl;

	return 0;
}
