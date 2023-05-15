#include <iostream>
using namespace std;

   int sum(int a[], int n){
           if(n==0 || n==1){       //check if the size of the array have reached to the end or not
            return 0;
           }
           return a[0]+sum(a+1,n-1);
   }


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<sum(arr,n)<<endl;
}