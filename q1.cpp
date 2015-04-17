//Diego Plascencia Sanabria, A01229988

#include <iostream>
using namespace std;
int triangle(int a){
	for (int i=1; i<= a; i++){
		for (int c=1; c<=i; c++){
		cout<<"T";}
	cout<< endl;
}
	for (int i=a; i>=1; i--){
		for (int c=1; c<=i; c++){
		cout<<"T";}
	cout<< endl;}
return 0;
}

int main (){
	int x;
	cout<< "WRITE THE LENGHT OF YOUR TRIANGLE: "<<endl;
	cin>> x;
	cout<< triangle(x);
return 0;
}
