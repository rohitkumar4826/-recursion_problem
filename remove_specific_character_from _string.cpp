#include<iostream>
using namespace std;
void func(string s){
    if(s.length()==0){
        return;
    }
    if(s[0]=='a'){
        func(s.substr(1));
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