//Diego Plascencia Sanabria, A01229988

#include <iostream>
using namespace std;

long superpower(long a, long b){
	if (b==0){
		return (1);}
	else{
		return(a*superpower(a,b-1));
	}

}
		
int main (){
	long primero, segundo,res;
	cout<< "INTRODUZCA SU PRIMER NUM"<< endl;
	cin>> primero;
	cout<< "INTRODUZCA SU SEGUNDO NUM"<< endl;
	cin>> segundo;
	res=superpower(primero,segundo);
	cout<< res<<endl;
return 0;
}
