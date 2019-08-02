#include<iostream>
#include<iomanip> 
#include <string.h>
#include <vector>
#include <bits/stdc++.h>

#ifndef ZOOLOGICO_CPP
#define ZOOLOGICO_CPP
using namespace std;
class Zoologico{
	private:
		string nombre;
	    int tam;
	    int capacidadpersonas;
	    vector<string> zonaantartica;
	    vector<string> zonadesertica;
	    vector<string> zonadejunglatropical;
	    vector<string> zonasabana;
	    
	public:
		Zoologico() {
	    }
	
	    Zoologico(string nombre, int tam, int capacidadpersonas) {
	        this->nombre = nombre;
	        this->tam = tam;
	        this->capacidadpersonas = capacidadpersonas;
	    }
	
	    string getNombre() {
	        return nombre;
	    }
	
	    void setNombre(string nombre) {
	        this->nombre = nombre;
	    }
	
	    int getTam() {
	        return tam;
	    }
	
	    void setTam(int tam) {
	        this->tam = tam;
	    }
	
	    int getCapacidadpersonas() {
	        return capacidadpersonas;
	    }
	
	    void setCapacidadpersonas(int capacidadpersonas) {
	        this->capacidadpersonas = capacidadpersonas;
	    }
};
#endif

