#include<iostream>
using namespace std;
bool is_sorted(int arr[], int size){
    if(size==0 || size ==1){        // checking size of array after decreasing upto 0 or 1
        return true;                
    }
     if(arr[0]>arr[1]){           // taking first two element of array
        return false;
     }
     return is_sorted(arr+1, size-1);  // everytime decreasing the size of array by 1
}
int main(){
int n;
cin>>n;
int ar[n];
for( int i=0; i<n; i++){
    cin>>ar[i];
}
cout<<is_sorted(ar, 5)<<endl;
}