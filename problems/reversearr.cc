#include<iostream>
using namespace std;
void reversearrayf( int arr[], int k, int size)
{
    int p =0;
    int ro[5];
   for( int i = k; i<size; i++)
    {
       ro[p] = arr[i];
       p++;  
    }
   for( int t=0; t<k; t++)
   {
    ro[p] = arr[t];
    p++;
   }
   for(int h = 0; h<size; h++)
   {
    arr[h] = ro[h];
   }
}
void print(int arr[] , int n)
{
    for( int j = 0; j<n; j++)
    {
       cout<<" "<< arr[j];
       
    }
}
int main()
{
    int arr[5] = { 3,5,1,66,-45};
    // int si = sizeof(arr)/sizeof(arr[0]);
    reversearrayf( arr, 3,5);
    print( arr, 5);

}