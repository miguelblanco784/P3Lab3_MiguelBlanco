#include<iostream>
#include<iomanip> 
#include <string.h>
#include <vector>
#include <bits/stdc++.h>
#include "Patas.cpp"
#include "Pelaje.cpp"
#include "Ojos.cpp"
#include "Orejas.cpp"
#include "Cola.cpp"

#ifndef ANIMALES_CPP
#define ANIMALES_CPP
using namespace std;
class Animales{
	private:
		string nombreespecie;
	    string nombreanimal;
	    int tam;
	    string tipo;
	    Patas* patas ;
	    Pelaje* pelaje;
	    Ojos* ojos ;
	    Orejas* orejas;
	    Cola* cola;
	public:
		Animales() {
			patas = new Patas();
			pelaje  = new Pelaje();
			ojos = new Ojos();
			orejas = new Orejas();
			cola = new Cola();
	    }
	
	    Animales(string nombreespecie, string nombreanimal, int tam, string tipo,Patas* patas,Pelaje* pelaje, Ojos* ojos, Orejas* orejas, Cola* cola) {
	        this->nombreespecie = nombreespecie;
	        this->nombreanimal = nombreanimal;
	        this->tam = tam;
	        this->tipo = tipo;
	        this->patas = patas;
			this->pelaje  = pelaje;
			this->ojos = ojos;
			this->orejas = orejas;
			this->cola = cola;
	    }
	
	    string getNombreespecie() {
	        return nombreespecie;
	    }
	
	    void setNombreespecie(string nombreespecie) {
	        this->nombreespecie = nombreespecie;
	    }
	
	    string getNombreanimal() {
	        return nombreanimal;
	    }
	
	    void setNombreanimal(string nombreanimal) {
	        this->nombreanimal = nombreanimal;
	    }
	
	    int getTam() {
	        return tam;
	    }
	
	    void setTam(int tam) {
	        this->tam = tam;
	    }
	
	    string getTipo() {
	        return tipo;
	    }
	
	    void setTipo(string tipo) {
	        this->tipo = tipo;
	    }
	    
	    Patas* getPatas() {
        	return patas;
    	}

	    void setPatas(Patas* patas) {
	        this->patas = patas;
	    }
	
	    Pelaje* getPelaje() {
	        return pelaje;
	    }
	
	    void setPelaje(Pelaje* pelaje) {
	        this->pelaje = pelaje;
	    }
	
	    Ojos* getOjos() {
	        return ojos;
	    }
	
	    void setOjos(Ojos* ojos) {
	        this->ojos = ojos;
	    }
	
	    Orejas* getOrejas() {
	        return orejas;
	    }
	
	    void setOrejas(Orejas* orejas) {
	        this->orejas = orejas;
	    }
	
	    Cola* getCola() {
	        return cola;
	    }
	
	    void setCola(Cola* cola) {
	        this->cola = cola;
	    }
		
		void print(){
			cout<<nombreespecie<<"   "<<nombreanimal<<"   "<<tam;
		}
};
#endif

