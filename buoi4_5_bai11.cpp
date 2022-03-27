#include<iostream>
#include<math.h>
using namespace std;

int check(int n){
	int temp = n;
	int sum2 = 0;
	int giaiThua = 1;
	while(n>0){
		int j = n%10;
		do{
			giaiThua = giaiThua*j;
			j--;
		} while(j>0);
		sum2 = sum2 + giaiThua;
		giaiThua = 1;
		n = n/10;
	}
	n = temp;
	if(sum2 == temp){
		//return 1;
		 cout<<sum2<<"\t";
	}
//	else if(sum2 != temp){
//		return 0;
//	}
}

int main(){
	int a,b,n;
	cout<<"a = "; cin>>a;
	cout<<"b = "; cin>>b;

	for(int n=a; n<=b; n++){
		check(n);
			//cout<<n<<"\t";
	}
//	if(check(n)==0){
//		cout<<"khong ton tai";
//	}
	return 0;
}
