#include <iostream>
#include <math.h>
using namespace std;

int check(int n){
	int k=0, cnt=0;
	for(int i=2; i<=n; i++){
		while (n%i != 1){		// Điều kiện dừng cho đến khi n chia hết cho i
			if(n % i == 0){	
				k++;
				cout<<i<<"\t";
				n = n/i;		// n chia tiếp cho i
			}
			else{
				i++;
			}
		} if(k > 0){		// đếm số ước
			cnt++;
		}
	}
	cout<<endl;
	cout<<"So thua so nguyen to: "<<cnt;
}

int main(){
	int n;
	cout<<"n = "; cin>>n;
	check(n);
	
	
	
	return 0;
}
