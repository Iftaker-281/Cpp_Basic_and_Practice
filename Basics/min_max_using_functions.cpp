#include<iostream>
using namespace std;

int min_sum(int a, int b);
int max_sum(int c, int d);

int main(){
    cout<<min_sum(5,10)<<endl;
    cout<<max_sum(5,10)<<endl;
    return 0;
}

int min_sum(int a, int b){
    if(a<b)
        return a;
    else
        return b;
}

int max_sum(int c, int d){
    if(c>d)
        return c;
    else
        return d;
}
