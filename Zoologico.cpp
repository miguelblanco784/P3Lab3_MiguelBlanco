#include<iostream>
#include<iomanip> 
#include <string.h>
#include <vector>
#include <bits/stdc++.h>
#include "Animales.cpp"

#ifndef ZOOLOGICO_CPP
#define ZOOLOGICO_CPP
using namespace std;
class Zoologico{
	private:
		string nombre;
	    int tam;
	    int capacidadpersonas;
	    vector<Animales*> zonaantartica;
	    vector<Animales*> zonadesertica;
	    vector<Animales*> zonadejunglatropical;
	    vector<Animales*> zonasabana;
	    
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
		
		void setZonaantartica(Animales* x){
			this->zonaantartica.push_back(x);
		}
		
		void setZonadesertica(Animales* x){
			this->zonadesertica.push_back(x);
		}
		
		void setZonajunglatropical(Animales* x){
			this->zonadejunglatropical.push_back(x);
		}
		
		void setZonasabana(Animales* x){
			this->zonasabana.push_back(x);
		}
	    void setCapacidadpersonas(int capacidadpersonas) {
	        this->capacidadpersonas = capacidadpersonas;
	    }
	    
	    void print(){
	    	cout<<nombre<<"\nCapacidad "<<capacidadpersonas<<"\nTamaño: "<<tam<<endl;
	    	for(int i = 0; i < zonaantartica.size();i++){
				cout<<zonaantartica.at(i)->print();
			}
			for(int i = 0; i < zonadejunglatropical.size();i++){
				cout<<zonadejunglatropical.at(i);
			}
			for(int i = 0; i < zonadesertica.size();i++){
				cout<<zonadesertica.at(i);
			}
			for(int i = 0; i < zonasabana.size();i++){
				cout<<zonasabana.at(i);
			}
		}
};
#endif

