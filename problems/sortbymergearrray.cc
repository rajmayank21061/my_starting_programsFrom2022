#include<iostream>
using namespace std;
void mergearray( int arr1[],int arr2[],int m , int n,int arr3[])
{
    int i = 0,j=0;
    int k =0;
    while( i<m && j<n)
    {
        if( arr1[i]<arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    //copy first array in arr3;
    while(i<m)
    {
        arr3[k++]  = arr1[i++];
    }
    //copy second array in arr3;
    while(j<n)
    {
        arr3[k++] = arr2[j++];
    }
}
void print( int arr3[], int n)
{
    for( int l = 0; l<n; l++)
    {
        cout<< arr3[l] << " ";
    }
}
int main()
{
   int arr1[5] = {3,5,6,8,9};
   int arr2[4] = {4,7,10,13};
   int n1 = sizeof(arr1)/sizeof(arr1[0]);
   int n2 = sizeof(arr2)/sizeof(arr2[0]);
   int arr3[n1 + n2];
   mergearray(arr1,arr2,n1,n2,arr3);
   print(arr3,(n1 + n2));
}