#ifndef CRUPIER_H
#define CRUPIER_H

#include <string>
#include "persona.h"

using namespace std;

class Crupier : public Persona {

	private:
		string _codigo;
	
	public:
	
		Crupier(string codigo, 
			string dni, 
			string nombre ="", 
			string apellidos ="", 
			string direccion ="", 
			string localidad ="", 
			string provincia ="", 
			string pais ="") 
		: Persona(dni, 
			nombre,
			apellidos, 
			direccion, 
			localidad, 
			provincia, 
			pais){
				_codigo= codigo;
			};
	
	
		inline const string getCodigo() const{return _codigo;};
		inline void setCodigo(const string codigo){_codigo=codigo;};

};

#endif
