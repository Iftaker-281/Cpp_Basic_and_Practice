#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;

    int max_num;
    cin>>max_num;

    for(int i=1;i<T;i++){
        int x;
        cin>>x;
        if(x > max_num){
            max_num = x;
        }
    }
    cout<<max_num<<endl;
    return 0;
}
