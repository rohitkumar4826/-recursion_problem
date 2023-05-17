#include<iostream>
using namespace std;
int func(int arr[],int si,int ei,int x){
    if(si>ei){
        return false;
    }
  int mi=(si+ei)/2;
  if(x==arr[mi]){
    return mi;
  }else if(x>arr[mi]){
    return func(arr,mi+1,ei,x);
  }else{
    return func(arr,si,mi-1,x);
  }
}
int main (){
    int n,x;
    cin>>n;
    int arr[n];              // For binary search the array must be sorted already
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be search"<<endl;
    cin>>x;
    int si=0; 
    int ei=n-1;
    cout<<"Index of the entered  element is = ";
    cout<<func(arr,si,ei,x)<<endl;
}