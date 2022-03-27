#include <iostream>
#include <cmath>
using namespace std;
//Một số được coi là số đẹp nếu nó là số thuận nghịch, có chứa ít nhất một 
//chữ số 6, và tổng các chữ số của nó có chữ số cuối cùng là 8. Viết chương trình liệt 
//kê trong một đoạn giữa hai số nguyên cho trước có bao nhiêu
//số đẹp như vậy INPUT: 1-100,  OUTPUT: 161
bool thuanNghich(int n){
    int temp = n;
    int rev = 0;
    while(n>0){
        rev = rev*10 + (n%10);
        n /= 10;
    }
    n = temp;
    if(rev == temp){
        return true;
    }
    else{
        return false;
    }
}
bool num6(int n){
    int temp = n;
    int cnt = 0;
    while(n>0){
        int j = n%10;
        if(j==6){
            cnt++;
        }
        n /= 10;
    }
    if(cnt>=1){
        return true;
    }
    else{
        return false;
    }
}
int check(int n){
    int sum = 0;
    int temp = n;
    while(n>0){
        int j = n%10;
        sum = sum + j;
        n /= 10;
    } n = temp;
    if((sum % 10)==8){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int a,b,n;
    int k=0;
    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;
    while(a>b){
        cout<<"Vui long nhap lai a<b :";
        cout<<"a = "; cin>>a;
        cout<<"b = "; cin>>b;
    }
    cout<<"Cac so thoa man la:"<<endl;
    for(int i=a; i<=b; i++){
        if((thuanNghich(i)==true)&&(num6(i)==true)&&(check(i)==true)){
            cout<<i<<"\t";
            k++;
        }
    }
    cout<<endl;
    cout<<"Co "<<k<<" so thoa man.";
    return 0;
}
 