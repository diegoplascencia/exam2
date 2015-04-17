//Diego Plascecia Sanabria A01229988
#include<iostream>
#include<cmath>
#include<string>
using namespace std;
void palin(){
	string a;
	string b;
	cout<< "ENTER YOUR STING HERE: ";
	cin>> a;
	b= string(a.rbegin(),a.rend());
	cout<< "THE REVERSE STRING :"<< b<< endl;
	if (a==b){
		cout<<"HOORRAY A PALINDROME!"<<endl;
	}
	else{ cout<< "AWW NOT A PALINDROME :C "<< endl;
	}
}
int main (){
	palin();
	return 0;
}
