#include<iostream>
#include<iomanip> 
#include <string.h>
#include "Clase.cpp"
#include <vector>
#include <bits/stdc++.h>

#ifndef Alumno_CPP
#define Alumno_CPP
using namespace std;

class Clase;
class Alumno{
	private:
		string nombre;
	    string usuario;
	    string contrasena;
	    int edad;
	    char genero;
	    string carrera;
		vector<Clase*> clases;		
	public:
		Alumno() {
	    }
	
	    Alumno(string nombre, string usuario, string contrasena, int edad, char genero, string carrera) {
	        this->nombre = nombre;
	        this->usuario = usuario;
	        this->contrasena = contrasena;
	        this->edad = edad;
	        this->genero = genero;
	        this->carrera = carrera;
	    }
	
	    string getNombre() {
	        return nombre;
	    }
	
	    void setNombre(string nombre) {
	        this->nombre = nombre;
	    }
	
	    string getUsuario() {
	        return usuario;
	    }
	
	    void setUsuario(string usuario) {
	        this->usuario = usuario;
	    }
	
	    string getContrasena() {
	        return contrasena;
	    }
	
	    void setContrasena(string contrasena) {
	        this->contrasena = contrasena;
	    }
	
	    int getEdad() {
	        return edad;
	    }
	
	    void setEdad(int edad) {
	        this->edad = edad;
	    }
	
	    char getGenero() {
	        return genero;
	    }
	
	    void setGenero(char genero) {
	        this->genero = genero;
	    }
	
	    string getCarrera() {
	        return carrera;
	    }
	
	    void setCarrera(string carrera) {
	        this->carrera = carrera;
	    }
	    
	    void setClase(Clase* x){
	    	this->clases.push_back(x);
		}
		
		void setClases(vector<Clase*> x){
			this->clases = x;
		}
		
		void remClase(int x){
			this->clases.erase(clases.begin()+x);
		}
	
		vector<Clase*> getClases(){
			return this->clases;
		}
};

#endif
