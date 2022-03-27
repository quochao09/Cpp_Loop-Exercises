#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

bool thuanNghich(int n){
	int so = n;
	int sodao = 0;
	while(n != 0){
		sodao = sodao*10 + (n%10);
		n = n/10;
	}
	n = so;
	if(sodao == n){
		return true;
	}
	else{
		return false;
	}
	
}

bool chia(int n){
	int sum = 0;
	while(n != 0){
		sum = sum + (n%10);
		n = n/10;
	}
	if(sum % 10==0){
		return true;
	}
}

int main(){
	int n;
	int k=0;
	cout<<"n = "; cin>>n;
	for(int i=pow(10,n-1); i<pow(10,n); i++){
		if(thuanNghich(i) && chia(i)){
			k++;
			cout<<i<<"\t";
		}
	}
	cout<<"Co "<<k<<" so thoa man";
	
	getch();
	return 0;
}


//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int n;
//
//bool ThuanNghich(int x) {
// int tmp = x;
// int dao = 0;
// while(x > 0) {
//  dao = dao*10 + x%10;
//  x /= 10;
// }
// if(dao == tmp)
//  return true;
// return false;
//}
//
//bool tongchia10(int n) {
// int tong = 0;
// while(n > 0) {
//  int t = n % 10;
//  tong = tong + t;
//  n = n / 10;
// }
// if(tong%10==0)
//  return true;
// return false;
//}
//
//int main() {
// cin >> n;
// int dem = 0;
// for(int i = pow(10,n-1); i < pow(10,n); i++)
//  if(ThuanNghich(i) && tongchia10(i)){
//  	dem++;
//  	cout<<i<<"\t";
//  }
// cout<<endl;
// cout << dem;
//}
