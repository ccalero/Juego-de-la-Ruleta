/*
	Clase Ruleta
	
	Autor: Carlos Calero de la Fuente
*/

#ifndef RULETA_H
#define RULETA_H

#include <list>
#include <stdlib.h> // Para el abs()
#include <string>

#include "jugador.h"
#include "crupier.h"

using namespace std;

class Ruleta {
	
	private:
		int _banca;
		int _bola;
		list<Jugador> _jugadores;
		Crupier _crupier;

	public:

//CONSTRUCTOR
		Ruleta(Crupier c) : _crupier(c), _bola(-1),_banca(1000000){};

//SET Y GET BANCA
		inline void setBanca(const int banca){_banca = abs(banca);};		
		inline const int getBanca(){ return _banca; };

//SET Y GET BOLA
		inline void setBola(const int bola){ (bola >=0 || bola <=36) ? _bola=bola : false;};
		inline const int getBola(){ return _bola; };
		
		
//SET Y GET CRUPIER
		inline void setCrupier(const Crupier c){ _crupier = c; };
		inline const Crupier getCrupier(){ return _crupier; };
		
//METODOS PARA JUGADORES
		inline list<Jugador> getJugadores() { return _jugadores; };
		bool addJugador(Jugador j);
		int deleteJugador(Jugador j);
		int deleteJugador(string dni);
		void escribeJugadores();
		void leeJugadores();
		
		void giraRuleta();
		
		void getPremios();
		
};


#endif
