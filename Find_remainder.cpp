#include<iostream>
using namespace std;
int func(int a){
    int c=a%10;

    if(a==0){
        return 0;
    }else if(c==0){
       return 1+func(a/10);
    }
     return func(a/10);
}
int main(){

    int n;
    cin>>n;
    cout<<func(n)<<endl;
}