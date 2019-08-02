#include<iostream>
#include<iomanip> 
#include <string.h>
#include <vector>
#include <bits/stdc++.h>

#ifndef OJOS_CPP
#define OJOS_CPP
using namespace std;
class Ojos{
	private:
		string color;
	    bool visionnocturna;	
	public:
		Ojos(string color, bool visionnocturna) {
	        this->color = color;
	        this->visionnocturna = visionnocturna;
	    }
	
	    Ojos() {
	    }
	
	    string getColor() {
	        return color;
	    }
	
	    void setColor(string color) {
	        this->color = color;
	    }
	
	    bool isVisionnocturna() {
	        return visionnocturna;
	    }
	
	    void setVisionnocturna(bool visionnocturna) {
	        this->visionnocturna = visionnocturna;
	    }
	    
};
#endif
