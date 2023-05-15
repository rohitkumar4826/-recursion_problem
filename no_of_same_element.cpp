#include<iostream>
using namespace std;
int func(int arr[], int x, int size){
    if(size<=0){
        return 0;
    }else if(arr[0]==x){
        return 1+func(arr+1,x,size-1);
    }
    return func(arr+1,x,size-1);
}
int main(){
    int n,x;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    cout<<"Enter the element to be found"<<endl;
    cin>>x;
    cout<<"Enter the array elements"<<endl;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<func(arr,x,n)<<endl;
}