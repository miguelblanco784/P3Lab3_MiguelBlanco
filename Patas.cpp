#include<iostream>
#include<iomanip> 
#include <string.h>
#include <vector>
#include <bits/stdc++.h>

#ifndef PATAS_CPP
#define PATAS_CPP
using namespace std;
class Patas{
	private:
		int cantpatas;
	    int largopatas;
	    string tipodepatas;	
	public:
		Patas() {
	    }
	
	    Patas(int cantpatas, int largopatas, string tipodepatas) {
	        this->cantpatas = cantpatas;
	        this->largopatas = largopatas;
	        this->tipodepatas = tipodepatas;
	    }
	
	    int getCantpatas() {
	        return cantpatas;
	    }
	
	    void setCantpatas(int cantpatas) {
	        this->cantpatas = cantpatas;
	    }
	
	    int getLargopatas() {
	        return largopatas;
	    }
	
	    void setLargopatas(int largopatas) {
	        this->largopatas = largopatas;
	    }
	
	    string getTipodepatas() {
	        return tipodepatas;
	    }
	
	    void setTipodepatas(string tipodepatas) {
	        this->tipodepatas = tipodepatas;
	    }
		
};
#endif
