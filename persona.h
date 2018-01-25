/*
	Clase Persona
	
	Autor: Carlos Calero de la Fuente
*/

#ifndef PERSONA_H
#define PERSONA_H

#include <string>

using namespace std;

class Persona {

	private:
	string _dni;
	string _nombre;
	string _apellidos;
	string _direccion;
	string _localidad;
	string _provincia;
	string _pais;
	
	public:
	Persona(const string dni, 
		const string nombre = "", 
		const string apellidos = "", 
		const string direccion = "", 
		const string localidad = "", 
		const string provincia="", 
		const string pais=""){
			_dni=dni; 
			_nombre=nombre;
			_apellidos=apellidos;
			_direccion=direccion;
			_localidad=localidad;
			_provincia=provincia;
			_pais=pais;};
		
		
	inline const string getDNI(){return _dni;};
	inline void setDNI(const string dni){_dni=dni;};
	
	inline const string getNombre(){return _nombre;};
	inline void setNombre(const string nombre){_nombre=nombre;};
	
	inline const string getApellidos(){return _apellidos;};
	inline void setApellidos(const string apellidos){_apellidos=apellidos;};
	
	inline const string getDireccion(){return _direccion;};
	void setDireccion(const string direccion){_direccion=direccion;};
	
	inline const string getLocalidad(){return _localidad;};
	inline void const setLocalidad(const string localidad){_localidad=localidad;};
	
	inline const string getProvincia(){return _provincia;};
	inline void setProvincia(const string provincia){_provincia=provincia;};
	
	inline const string getPais(){return _pais;};	
	inline void setPais(const string pais){_pais=pais;};
	
	inline const string getApellidosyNombre(){return _apellidos + ", "+ _nombre;}
	
};

#endif
