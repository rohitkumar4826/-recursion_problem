#include<iostream>
using namespace std;
int find_index(int arr[], int n, int size,int start){
       if(start==size){
        return -1;
       }
        if(arr[start]==n){
            return start;
        }
        return find_index(arr,n,size,start+1);
}
int main(){
int n,start=0;
cout<<"Enter the element whose index is to be found"<<endl;
cin>>n;
int size;
cout<<"Enter the size of the array"<<endl;
cin>>size;
int ar[size];
for(int i=0; i<size; i++){
    cin>>ar[i];
}
 cout<<find_index(ar,n,size,start)<<endl;

}