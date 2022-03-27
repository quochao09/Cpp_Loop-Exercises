			//Buoi 3- bai 12,13,14,15,16,17
#include <iostream>
using namespace std;

void demso(int n){
	int dem=0;
	int so = n;
	while(n != 0){
		dem++;
		n = n/10;
	}
	n = so;
	cout<<n<<" co "<<dem<<" chu so"<<endl;;
}

void tong(int n){
	int sum = 0;
	int so = n;
	do{
		sum =  sum + (n % 10);
		n = n /10;
	} while (n != 0);
	n = so;
	cout<<n<<" co tong cac chu so la: "<<sum<<endl;
}

void chan(int n){
	int sum1 =0,k1 = 0;
	int sum2 =0,k2 = 0;
	int so = n;
	do{
		if((n%10) % 2 == 0){
			sum1 = sum1 + (n % 10);
			k1++;
		}
		else{
			sum2 = sum2 + (n%10);
			k2++;
		}
		n = n / 10;
	} while(n != 0);
	n = so;
	cout<<"So luong chu so chan cua so "<<n<<" : "<<k1<<endl;
	cout<<"Tong cac chu so chan cua so "<<n<<" : "<<sum1<<endl;
	cout<<"So luong chu so le cua so "<<n<<" : "<<k2<<endl;
	cout<<"Tong cac chu so le cua so "<<n<<" : "<<sum2<<endl;
}

void snt(int n){
	int k3=0;
	int so = n;
	do{
		if((n%10)==2 || (n%10)==3 || (n%10)==5 ||(n%10)==7){
			k3++;
		}
		n = n/10;
	} while (n != 0);
	n = so;
	cout<<"So luong chu so nguyen to cua so "<<n<<" : "<<k3<<endl;
}

void sodep(int n){
	int k4=0, k5=0;
	int so = n;
	while(n != 0){
		if((n%10) % 2==0){
			k4++;
		}
		else{
			k5++;
		}
		n /= 10;
	}
	n = so;
	if(k4 == k5){
		cout<<n<<" la so dep"<<endl;
	}
	else{
		cout<<n<<" khong la so dep"<<endl;
	}
}
int main(){
	int n,i,k3;
	cout<<"n = "; cin>>n;
	demso (n);
	tong (n);
	chan(n);
	snt(n);
	sodep(n);
	return 0;
}
