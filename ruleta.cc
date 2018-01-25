/*
	Funciones de la clase Ruleta
	
	Autor: Carlos Calero de la Fuente
*/

#include "ruleta.h"
#include <fstream> // Para el manejo de ficheros


	bool Ruleta::addJugador(Jugador j){
		
		list<Jugador>::iterator it;

		for(it = _jugadores.begin(); it!=_jugadores.end(); it++){
			if(it->getDNI() == j.getDNI()){
				return false;
			}		
		}
			
	//Añado jugador al final de la lista		
		_jugadores.push_back(j);

	//Creo el nombre del fichero
		string archivo = j.getDNI() + ".txt";
	//abro ficheroy compruebo, si no existe lo crea, si existe lo deja (ios::app)
		fstream fichero(archivo.c_str(), ios::app);

		fichero.close();
		return true;
	}


	int Ruleta::deleteJugador(Jugador j){
		
		list<Jugador>::iterator it;
		
		if(_jugadores.empty()){
			return -1;
		}
		for(it = _jugadores.begin(); it!=_jugadores.end(); it++){
			if(it->getDNI() == j.getDNI()){
				_jugadores.erase(it);
				return 1;
			}
		}
		return -2;
	}
	
	int Ruleta::deleteJugador(string dni){
		
		list<Jugador>::iterator it;
		
		if(_jugadores.empty()){
			return -1;
		}
		for(it = _jugadores.begin(); it!=_jugadores.end(); it++){
			if(it->getDNI() == dni){
				return 1;
			}
		}
		return -2;
	}
	
	void Ruleta::escribeJugadores(){

		string archivo = "jugadores.txt";
		
		//abro fichero
		fstream fichero(archivo.c_str(), ios::out);
		
		//Recorro lista
		list<Jugador>::iterator it;
		
		for(it = _jugadores.begin(); it!=_jugadores.end(); it++){	
				fichero << it->getDNI() << "," << 
				it->getNombre() << "," << 
				it->getApellidos() << "," << 
				it->getDireccion() << "," << 
				it->getLocalidad() << "," << 
				it->getProvincia() << "," << 
				it->getPais() << "," << 
				it->getDinero() << "\n";
		}
		fichero.close();	
	}
	
	void Ruleta::leeJugadores(){
		string archivo = "jugadores.txt";
		string linea;
		ifstream fichero(archivo.c_str());
		_jugadores.clear();
		while(fichero.peek() != EOF){
			Jugador j("","");
			getline(fichero, linea,',');
			j.setDNI(linea);
			getline(fichero, linea,',');
			j.setNombre(linea);
			getline(fichero, linea,',');
			j.setApellidos(linea);
			getline(fichero, linea,',');
			j.setDireccion(linea);
			getline(fichero, linea,',');
			j.setLocalidad(linea);
			getline(fichero, linea,',');
			j.setProvincia(linea);
			getline(fichero, linea,',');
			j.setPais(linea);
			getline(fichero, linea,'\n');
			j.setDinero(atoi(linea.c_str()));
			cout << j.getDNI() << endl;
			_jugadores.push_back(j);
		}	
		fichero.close();
	}
	
	
	
	void Ruleta::giraRuleta(){
		srand(time(NULL));
		int aux= rand() % 36;
		setBola(aux);
	}
	
	
	void Ruleta::getPremios(){
	
		list <Jugador>::iterator it;

		for(it = _jugadores.begin(); it!=_jugadores.end(); it++){
		
			it->setApuesta();
			cout << "\n** Premios del jugador : " << it->getDNI() + " **" << endl;

			list <Apuesta> apu = it->getApuestas();
			list <Apuesta>::iterator it2;			
			
			for(it2 = apu.begin(); it2 != apu.end(); it2++){
				//Comprobar Apuestas
				//cout << comprobarApuesta (*it, *it2) << endl;
			}
			
		}
	}
	
	
	
	
	
	
	
