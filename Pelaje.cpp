#include<iostream>
#include<iomanip> 
#include <string.h>
#include <vector>
#include <bits/stdc++.h>

#ifndef PELAJE_CPP
#define PELAJE_CPP
using namespace std;
class Pelaje{
	private:
		string color;
	    double grosor;
	    double largo;
	public:
		Pelaje() {
	    }
	
	    Pelaje(string color, double grosor, double largo) {
	        this->color = color;
	        this->grosor = grosor;
	        this->largo = largo;
	    }
	
	    string getColor() {
	        return color;
	    }
	
	    void setColor(string color) {
	        this->color = color;
	    }
	
	    double getGrosor() {
	        return grosor;
	    }
	
	    void setGrosor(double grosor) {
	        this->grosor = grosor;
	    }
	
	    double getLargo() {
	        return largo;
	    }
	
	    void setLargo(double largo) {
	        this->largo = largo;
	    }
};
#endif
