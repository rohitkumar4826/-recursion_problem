#include<iostream>
using namespace std;
int func(string ar[], string arr[], int size,int start){
    if(size>=0){
        arr[start]=ar[size];
        return func(ar,arr,size-1,start+1);
    }
    return 0;
}
int main(){
    int n;
    cout<<"Enter the no of element of string"<<endl;
    cin>>n;
    string ar[n],arr[n];
    cout<<"Enter the elements of array "<<endl;
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
    int start=0;
    int size=n;
    func(ar,arr,size-1,start);

      for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}