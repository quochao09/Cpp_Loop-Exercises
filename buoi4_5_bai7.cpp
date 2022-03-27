#include <iostream>
#include <math.h>
using namespace std;

int test1(int n){
	int sodao = 0;
	int so = n;
	do{
		sodao = sodao*10 + (n%10);
		n /= 10;
	} while (n != 0);
	n = so;
	if(sodao == n){
		return 1;
	}
	return 0;
}

int test(int t){
	if(t<2){
		return 0;
	}
	else{
		for(int j=2; j<=sqrt(t); j++){
		if(t%j == 0){
			return 0;
		}
	}
	return 1;
	}
}

int test2(int i){
	int cnt = 0;
	int b;
	for(int t=2; t<=b/2; t++){
		if(test(t) == 1){
			if(i % t == 0){
				cnt++;
			}
		}
	}
	if(cnt >= 3){
		return 1;
	}
}

int main(){
	int a,b;
	cout<<"a = "; cin>>a;
	cout<<"b = "; cin>>b;
	while(a > b){
		cout<<"Vui long nhap lai a < b :"<<endl;
		cout<<"a = "; cin>>a;
		cout<<"b = "; cin>>b;
	}
	int cnt = 0;
	for(int i=a; i<=b; i++){
		if(test1(i)==1 && test2(i)==1){
			cout<<i<<"\t";
		}
	}
	cout<<endl;
	cout<<".....";
	
	
	
//	int n;
//	cout<<"n = "; cin>>n;
//	if(test1(n)==1 && test2(n)==1){
//		cout<<"yes";
//	}
//	else{
//		cout<<"No";
//	}
	return 0;
}
