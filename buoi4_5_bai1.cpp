#include <iostream>
#include <math.h>
using namespace std;

int snt(int n){
	if(n < 2){
		return 0;
	}
	else{
		for(int i =2; i <= sqrt(n); i++){
			if(n % i==0){
				return 0;
			}
		}
		return 1;
	}
}

int csnt(int n){
	int so = n;
	do{
		if((n%10)!=2 && (n%10)!=3 && (n%10)!=5 && (n%10)!=7){
			return 0;
	}
			n = n/10;
	} while(n != 0);
	n = so;
	return 1;
}
 
int tong(int n){
	int so =n;
	int sum =0;
	do{
		sum += (n%10);
		n /= 10;
	} while (n!=0);
	n = so;
	if(snt(sum)==1){
		return 1;
	}
	else{
		return 0;
	}
} 
 
int main(){
	int a,b,i;
	int k=0;
	cout<<"a = "; cin>>a;
	cout<<"b = "; cin>>b;
	while(a > b){
		cout<<"Vui long nhap lai a < b :"<<endl;
		cout<<"a = "; cin>>a;
		cout<<"b = "; cin>>b;
	}
	for(int i = a; i <= b; i++){
		if( csnt(i)==1 && snt(i)==1 && tong(i)==1){
			k++;
			cout<<i<<"\t";
		}
	}
	cout<<endl;
	cout<<"Co "<<k<<" so thoa man."<<endl;
	return 0;
}
