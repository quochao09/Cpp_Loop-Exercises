#include <iostream>
#include <math.h>
using namespace std;
int snt(int n){
	if(n<2){
		return 0;
	}
	else{
		for(int i=2; i<=sqrt(n); i++){
			if(n%i==0){
				return 0;
			}
		}
		return 1;
	}
}

int main(){
	int a,b;
	cout<<"a = "; cin>>a;
	cout<<"b = "; cin>>b;
	while(a>b){
		cout<<"Vui long nhap lai a<b:";
		cout<<"a = "; cin>>a;
		cout<<"b = "; cin>>b;
	}
	cout<<"Cac so nguyen to trong khoang tu "<<a<<" den "<<b<<" :"<<endl;
	for(int n=a; n<=b; n++){
		if(snt(n)==1){
			cout<<n<<"\t";
		}
	}
	
	return 0;
}
