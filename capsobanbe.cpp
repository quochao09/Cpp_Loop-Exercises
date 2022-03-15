#include <iostream>
#include <math.h>
#include<conio.h>
using namespace std;

int main(){
	int a,b;
	int x=0, y=0;
	cout<<"a = "; cin>>a;
	cout<<"b = "; cin>>b;
	do{
		if((a<0)||(b<0)){
			cout<<"Vui long nhap a,b > 0"<<endl;
			cout<<"a = "; cin>>a;
			cout<<"b = "; cin>>b;
		}
	} while((a<0)||(b<0));

	for(int i=1; i<= (a/2); i++){
		if(a % i == 0){
			x = x+i;
		}
	}
	cout<<"Sum x = "<<x<<endl;;

	for(int i=1; i<= (b/2); i++){
		if(b % i == 0){
			y = y + i;
		}
	}
	cout<<"Sum y = "<<y<<endl;
	
	if((x == b) && (y == a)){
		cout<<a<<" va "<<b<<" la cap so ban be."<<endl;
	}
	else{
		cout<<"No."<<endl;
	}
	getch();
	return 0;
}
