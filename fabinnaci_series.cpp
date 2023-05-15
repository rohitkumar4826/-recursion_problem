#include<iostream>
using namespace std;
int faboinacci(int n){
   if(n==0){
    return 0;
   }else if(n==1){
    return 1;
   }else{
    return faboinacci(n-1) + faboinacci(n-2);
   }
}
int main(){
int n;
cin>>n;
cout<<faboinacci(n)<<endl;
}