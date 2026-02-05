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
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum += i;
    }
    return sum;
}
