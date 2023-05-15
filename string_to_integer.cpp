#include<iostream>
#include<math.h>
using namespace std;
int func(string s){
    if(s.length()==0){
        return 0;
    }
    int sum=s[0]-'0';
    return sum*((int)(pow(10,s.length()-1)+1e-9)) + func(s.substr(1));
}
int main(){
    string s;
    cin>>s;
    cout<<func(s)<<endl;
}