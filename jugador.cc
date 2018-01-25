/*
	Clase Jugador
	
	Autor: Carlos Calero de la Fuente
*/

#include <string>
#include <fstream>
#include <cstdlib> //Para la función atoi
#include <iostream>

#include "jugador.h"


	void Jugador::setApuestas(string dni){
	   	string linea;
	   	_apuestas.clear();
		string extension = ".txt";	
		string archivo = dni + extension;
	//abro fichero
		ifstream fe(archivo.c_str());

		while(fe.peek() != EOF){
			struct apuesta ap;
		//Leeo una linea
			getline(fe, linea,',');
			ap.tipo = atoi(linea.c_str());
	
			getline(fe, linea,',');
			ap.valor = linea.c_str();
	
			getline(fe, linea,'\n');
			ap.cantidad = atoi(linea.c_str());


			_apuestas.push_back(ap);
		}

	//cierro archivo
		fe.close();

	}
