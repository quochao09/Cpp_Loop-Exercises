#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int i;
	int ga;
	for(int i=1; i<=36; i++){
		if((2*i + 4*(36-i)) == 100){
			ga = i;
		}
	}
	cout<<"So ga = "<<ga<<" con."<<endl;
	cout<<"So cho = "<<(36 - ga)<<" con."<<endl;
	getch();
	return 0;
}
