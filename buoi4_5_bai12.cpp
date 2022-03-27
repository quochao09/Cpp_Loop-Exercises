#include<iostream>
#include<cmath>
using namespace std;
// n KHÔNG quá 9 chữ số va chỉ có các chữ số 0;6;8. true(1), false(1)

bool check(int n){
    int temp = n;
    while(n > 0){
        int j = n % 10;
        if((j==0)||(j==6)||(j==8)){
            n = n/10;
            return true;
        }
        else{
            return false;
        }
    }
    n = temp;
}

int main(){
    int n; 
    cout<<"n = "; cin>>n;
    while(n >= pow(10,9)){
        cout<<"Vui long nhap lai n = "; cin>>n;
    } 
    if(check(n)==true){
        cout<<"1";
    }
    else{
        cout<<"2";
    }
    return 0;
}