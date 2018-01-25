/*
	Clase Jugador que hereda de Persona
	
	Autor: Carlos Calero de la Fuente
*/

#ifndef JUGADOR_H
#define JUGADOR_H

#include <string>
#include <list>
#include <cstdlib>
#include <iostream>

#include "persona.h"

using namespace std;

struct apuesta{
	int tipo;
	string valor;
	int cantidad;
};

class Jugador : public Persona {

	private:
		int _dinero;
		string _codigo;
		list<struct apuesta> _apuestas;
	
	public:
	
		Jugador(const string codigo,
			const string dni, 
			const string nombre ="", 
			const string apellidos ="", 
			const string direccion ="", 
			const string localidad ="", 
			const string provincia ="", 
			const string pais ="") 
		: Persona(dni, 
			nombre,
			apellidos, 
			direccion, 
			localidad, 
			provincia, 
			pais){	
				_codigo= codigo;
		     		_dinero=1000;
		     	};
	
		inline void setCodigo(const string codigo){_codigo=codigo;};
		inline const string getCodigo() const{return _codigo;};
		
		inline void setDinero(const int dinero){_dinero=dinero;};
		inline const int getDinero() const{return _dinero;};
		
		inline const list<struct apuesta> getApuestas() const{return _apuestas;};
		void setApuestas(string dni);
	
};
#endif

