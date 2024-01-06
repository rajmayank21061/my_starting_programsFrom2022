#include<iostream>
using namespace std;
int sumOf_arr(int *arr, int n){
    //base case
  if(n==0){
    return 0;
  }
  if(n==1){
    return arr[0];
  }
  else{
  return arr[n-1] + sumOf_arr(arr,n-1);
  } }
int main()
{
  int arr[3] = {3,1,5};
  cout<< sumOf_arr(arr,3);
}