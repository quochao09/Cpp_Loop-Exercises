#include <iostream.h>
#include <conio.h>

int main(){
	int a,b,c,max;
	
	cout<<"First number ="; cin>>a;
	cout<<"Second number ="; cin>>b;
	cout<<"Third number ="; cin>>c;
	
	if (a>=b && a>=c){
		max = a;
	}
	if (b>=a && b>=c){
		max = b;
	}
	if (c>=a && c>=b){
		max = c;
	}
	cout<<"So lon nhat trong 3 so la: "<<max<<endl;
	getch();
	return 0;
}