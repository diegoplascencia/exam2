//Diego Plascencia Sanabria, A01229988

#include <iostream>
using namespace std;
long fibonacci(int x){
	if(x==0){
		return (0);}
	if (x==1){
		return (1);}
	if (x==2){
		return (1);}
	if (x>2){
	int num1=0;
	int num2=1;
	int num3;
	for(int i=2; i<=x;i++){
		num3=num1+num2;
		num1 = num2;	
		num2 = num3;
	}
	return (num3);}
}
int main(){
	int num,fib;
	cout<<"CUANTAS VECES QUIERE QUE SE REPITA LA SUCECION?"<< endl;
	cin>>num;
	fib=fibonacci(num);
	cout<< "EL NUM DE FIBONACCI ES: "<< fib<< endl;
	
return 0;	}
