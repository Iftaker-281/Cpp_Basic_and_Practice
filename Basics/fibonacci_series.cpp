#include<iostream>
using namespace std;

int number(int n);

int main(){
    int n;
    cin>>n;
    cout<<number(n)<<endl;
    return 0;
}

int number(int n){
    if(n==1) return 1;
    else if(n==0) return 0;
    else return number(n-1) + number(n-2);
}
