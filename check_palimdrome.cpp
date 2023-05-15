#include <bits/stdc++.h>
using namespace std;
int checkPalimdrome(string a,int len){
    if(len==1 || len==0){
        return 1;
    }
     if(a[0]!=a[len-1]){
        return 0;
    }
    return checkPalimdrome(a.substr(1), len-2);
}
int main(){
 string s;
 cin>>s;
 int len=s.length();
cout<< checkPalimdrome(s,len)<<endl;
}