//bai 19
#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int n,t,a;
	cout<<"n = "; cin>>n;
	while((n<1)||(n>100)){
		cout<<"vui long nhap lai n = "; cin>>n;		
	}
	cout<<"t = "; cin>>t;
	while((t<2)||(t>10)){
		cout<<"vui long nhap lai t = "; cin>>t;
	}
	
	for(int i = (pow(10,n-1)); i < pow(10,n); i++){
		if(i % t == 0){
			a = i;
		}
	}
	cout<<"So can tim la: "<<a;
	
	return 0;
}
