#include <iostream>
#include <cmath>
using namespace std;
//Một số được coi là số đẹp nếu nó là số nguyên tố và ngược lại của nó cũng 
//là một số nguyên tố khác. Viết chương trình liệt kê các số đẹp như vậy trong một 
//đoạn giữa hai số nguyên dương cho trước.
int prime(int n){
    if(n<2){
        return 0;
    }
    else{
        for(int i=2; i<sqrt(n); i++){
            if(n%i==0){
                return 0;
            }
        }
        return 1;
    }
}
bool reverse(int n){
    int rev = 0;
    int temp = n;
    while(n>0){
        int j = n%10;
        rev = rev*10 + (n%10);
        n /= 10;
    } n =temp;
    if(prime(rev)==1 && (rev != n)&& (prime(n)==1)){
         //cout<<"n = "<<n<<"\t";
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int a,b,n;
//cout<<"n = "; cin>>n;
    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;
    while((a>b)||(a<0)||(b<0)){
        cout<<"Vui long nhap lai a,b: "<<endl;
        cout<<"a = "; cin>>a;
        cout<<"b = "; cin>>b;
    }
    cout<<"Cac so dep trong khoang tu "<<a<<" den "<<b<<" : "<<endl;
    for(int n=a; n<=b; n++){
        if(reverse(n)==true){
            cout<<n<<"\t";
            }
        }
return 0;
}