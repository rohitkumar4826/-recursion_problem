#include<iostream>
using namespace std;

int func(int input[], int i, int size, int x, int output[], int m){
    if(size == 0){
        return 0;
    }
    int count = 0;
    int a = 0;
    if(input[i] == x){
      count++;
      output[m] = i;
      a = func(input, i+1, size-1, x, output, m+1);
    }
    else{
        a = func(input, i+1, size-1, x, output, m);
    }
    count += a;
    return count;
}

int main(){
  int n;
  cin >> n;
  int *input = new int[n];
  for(int i=0; i<n; i++){
      cin >> input[i];
  }
  int x;
  cin >> x;
  int *output = new int[n];
  int size = func(input, 0, n, x, output, 0);
  for(int i=0; i<size; i++){
      cout << output[i] << " ";
  }
  cout<<endl;
  cout<<size;
  delete[] input;
  delete[] output;
  return 0;
}

