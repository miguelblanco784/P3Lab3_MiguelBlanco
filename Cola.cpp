#include<iostream>
#include<iomanip> 
#include <string.h>
#include <vector>
#include <bits/stdc++.h>

#ifndef COLA_CPP
#define COLA_CPP
using namespace std;
class Cola{
	private:
		double tamcola;
    	bool pelos;
	public:
		Cola() {
	    }
	
	    Cola(double tamcola, bool pelos) {
	        this->tamcola = tamcola;
	        this->pelos = pelos;
	    }
	
	    double getTamcola() {
	        return tamcola;
	    }
	
	    void setTamcola(double tamcola) {
	        this->tamcola = tamcola;
	    }
	
	    bool isPelos() {
	        return pelos;
	    }
	
	    void setPelos(bool pelos) {
	        this->pelos = pelos;
	    }	
};
#endif
