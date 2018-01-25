#include "ruleta.h"
#include <fstream> // Para el manejo de ficheros
#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	
	Crupier c("dni","codigo","nombre","apellidos");
	
	Ruleta r(c);
	
	Jugador j1("dni1","codigo1","nombre1","apellidos1");	
	Jugador j2("dni2","codigo2","nombre2","apellidos2");	
	Jugador j3("dni3","codigo3","nombre3","apellidos3");	
	Jugador j4("dni4","codigo4","nombre4","apellidos4");	
	Jugador j5("dni5","codigo5","nombre5","apellidos5");	
	
		
	r.addJugador(j1);
	r.addJugador(j2);
	r.addJugador(j3);
	r.addJugador(j4);
	r.addJugador(j5);
	

	
	r.escribeJugadores();
	
	r.deleteJugador(j3);
	
	r.escribeJugadores();

	return 0;
}
