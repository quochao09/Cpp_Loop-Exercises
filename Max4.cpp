#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int a,b,c,d,max;
	
	cout<<"First number ="; cin>>a;
	cout<<"Second number ="; cin>>b;
	cout<<"Third number ="; cin>>c;
	cout<<"d = "; cin>>d;
	if (a>=b && a>=c && a>=d){
		max = a;
	}
	if (b>=a && b>=c && b>=d){
		max = b;
	}
	if (c>=a && c>=b && c>=d){
		max = c;
	}
	if (d>=a && d>=b && d>=c){
		max = d;
	}
	cout<<"So lon nhat trong 3 so la: "<<max<<endl;
	getch();
	return 0;
}
