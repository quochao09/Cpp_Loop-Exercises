#include<iostream>
#include<math.h>
using namespace std;

int check(int n){
	int k1=0, k2=0;
	while(n > 0){
		if((n%10)%2==0){
			k1++;
		}
		else{
			k2++;
		}
		n /= 10;
	}
	cout<<k1<<" \t"<<k2<<endl;
}

int main(){
	int n;
	int k1=0, k2=0;
	cout<<"n = "; cin>>n;
	while(n >= pow(10,9)){
		cout<<"Vui long nhap lai n = "; cin>>n;
	}
	check(n);
	return 0;
}
