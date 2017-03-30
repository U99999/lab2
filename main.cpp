#include<iostream>
#include"elo.h"
#include<fstream>
#include<cstdlib>
using namespace std;
int main()
{
	double a,b,k;
	double s;
	fstream inFile("file.in",ios::in);
	inFile>>k>>a>>b;
	Elo elo(k,a,b);

	if(!inFile)
	{
		cerr<<"Failed opening"<<endl;
		exit(1);
	}

	fstream outFile("file.out",ios::out);
	if(!outFile)
	{
		cerr<<"Failed opening"<<endl;
		exit(1);
	}
	outFile<<a<<" "<<b<<endl;

	while(inFile>>s)
	{
	
	outFile<<elo.getRAA(s)<<" ";
	outFile<<elo.getRBA()<<endl;
	}
	return 0;
}
	
