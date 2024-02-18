#include<iostream>
using namespace std;
bool binary_search( int *arr, int f,int e, int key){
   int mid = f+ (e-f)/2;
   if(f>e){
    return -1;
   }
   if(arr[mid]>key){
    return binary_search(arr,f,mid-1,key);
   }
   if(arr[mid] == key){
    return true;
   }
   else{
    return binary_search(arr,mid+1,e,key);
   }
}
int main()
{
int arr[] = {2,3,5,6,7,8,9};
int key = 1;
cout<< binary_search(arr,0,7,key) ;
}
// Hey it's only baby