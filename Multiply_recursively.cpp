#include<iostream>
using namespace std;
int func(int a,int b){
     
    if(b==0){
    return 0;
    }else{
        return a+func(a,b-1);
    }
}
int main(){
    int p,q;
    cin>>p>>q;
    cout<<func(p,q)<<endl;
}