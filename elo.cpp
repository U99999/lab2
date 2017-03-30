#include"elo.h"
#include<iostream>
#include<cmath>
using namespace std;
	Elo::Elo();
	Elo::Elo(double k1,double r1,double r2){
		k=k1;
		ra=r1;
		rb=r2;
		sum=r1+r2;			 //Cause Ra+Rb=constant
	}
	int Elo::setRAB(int r1){ra=r1;} 	//RAB means Ra before adjusted
	int Elo::getRAB() {return ra;}		
	double Elo::getRAA(double score){	//RAA means Ra after adjusted
		ea= 1/(1+pow(10,((rb-ra)/400)));
		ra= ra + k*(score-ea)+0.5;	//plus 0.5 for rounding
		ra= (int) ra;
		setRAB(ra);
		return  ra;
	}
	double Elo::getRBA(){			//RBA means Rb after adjusted
		rb=sum-getRAB();
		return rb;
	}
		

