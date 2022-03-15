#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

void test(int n){
	int k=0; //k la so chu so cua n.
	int so=n; //so la bien tam thoi de tranh n=0 khi chay vong lap while.
	//Kiem tra xem so n co bao nhieu chu so.
	while(n != 0){
		k++;
		n = n /10;
	}
	n = so;
	//Kiem tra xem tong cac luy thua bac k cac chu so cua n co bang chinh no hay khong.
	int tong =0;
	while(n != 0){
		tong = tong + (pow(n%10, k));
		n = n/10;
	}
	n = so;
	if(n == tong){
		cout<<n<<" la so Armstrong."<<endl;
	}
	else{
		cout<<n<<" khong phai so Armstrong."<<endl;
	}
}

int main(){
	int n;
	cout<<"Nhap so n = "; cin>>n;
	test(n);
	
   getch();
   return 0;
}
