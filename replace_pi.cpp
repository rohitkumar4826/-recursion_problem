#include<iostream>
using namespace std;
void func(string s){
    if(s.length()==0){
        return ;
    }
    // if(s[start]=="p" && s[start+1]=="i"){
    //     cout<<"3.14";
    //     return func(s+2, start,n-2);
    // }else{
    //     cout<<s[start];
    // }
    // return func(s+1, start, n-1);
    if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
      func(s.substr(2));
    }else{
        cout<<s[0];
        func(s.substr(1));
    }
}
int main(){
   string s;
   cin>>s;
   
    func(s);
}