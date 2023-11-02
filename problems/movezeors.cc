//input = arr[] = { 1,3,0,4,0,0,7,8,0,0,0};
//output = { 1,3,4,7,8,0,0,0,0,0,0}

#include<bits/stdc++.h>
using namespace std;
int movearr(int arr[], int size)
{
    int i = 0;
    int n = size;
   for( int j = 0; j<n;j++)
   {
    if(arr[j] != 0)
    {
        swap(arr[i],arr[j]);
        i++;
    }
   }
  }


int print(int arr[], int m)
{
  for( int n =0; n<m;n++)
    cout<<arr[n]<<" ";
}
int main()
{
    int arr[7]= { 1,3,0,0,4,0,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    movearr(arr,n);
    print(arr,n);
}