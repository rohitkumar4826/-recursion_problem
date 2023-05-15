// sum of G.P series using recursion
////////////////////(7-05-2023)/////////////
#include <iostream>
using namespace std;

double func(int a){
    if(a==0){
        return 1;
    }else{
        return 0.5 * func(a-1);
    }
}

int main(){
    int k;
    cout << "Enter a value for k: ";
    cin >> k;
    for(int i=0; i<=k; i++){
        double sum=sum+func(i);
        if(i==k){
            cout<<sum<<endl;
        }
    }
}
