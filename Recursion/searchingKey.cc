#include<iostream>
using namespace std;
bool foundKey(int *arr, int size , int key){
    //base case
  if( size == 0){
    return false;
  }
  if( arr[0] == key){
    return true;
  }
  else{
    return foundKey(arr+1,size-1,key);
  }
}
int main()
{
int arr[] = {2,4,2,1,5,7};
int size = 6;
cout<< foundKey(arr,size,9);
}