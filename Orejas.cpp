#include<iostream>
#include<iomanip> 
#include <string.h>
#include <vector>
#include <bits/stdc++.h>

#ifndef OREJAS_CPP
#define OREJAS_CPP
using namespace std;
class Orejas{
	private:
		bool tam;
    	int capacidadaudicion;
	public:
		Orejas(bool tam, int capacidadaudicion) {
        this->tam = tam;
        this->capacidadaudicion = capacidadaudicion;
	    }
	
	    Orejas() {
	    }
	
	    bool isTam() {
	        return tam;
	    }
	
	    void setTam(bool tam) {
	        this->tam = tam;
	    }
	
	    int getCapacidadaudicion() {
	        return capacidadaudicion;
	    }
	
	    void setCapacidadaudicion(int capacidadaudicion) {
	        this->capacidadaudicion = capacidadaudicion;
	    }
		
};
#endif
