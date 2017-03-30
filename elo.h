#ifndef _Elo_H_
#define _Elo_H_
using namespace std;
class Elo{
	public:
	Elo(){};
	Elo(double k,double r1,double r2);
	int setRAB(int r1);
	int getRAB();
	double getRAA(double score);
	double getRBA();
		
	private:
	double ra,rb,sum;
	double ea,eb,s;
	double k;
};

#endif
