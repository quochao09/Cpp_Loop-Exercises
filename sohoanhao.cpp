#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

void test(int i){
	int s=0;
		for(int j=1; j<i; j++){
			if(i%j == 0){
				s = s + j;
			}
		}
		if(i == s){
			cout<<i<<"\t";
		}
}

int main(){
	int n;
	cout<<"n = "; cin>>n;
	for(int i=1; i<=n; i++){
		test(i);
		}
	
	getch();
	return 0;
}
