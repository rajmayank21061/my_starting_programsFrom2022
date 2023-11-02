#include<iostream>
using namespace std;
bool IsarrayRotedorSorted( int arr[] , int size)
{
    bool yorn = 0;
    for( int i = 1 ; i <size; i++)
    {
        if( arr[i -1] > arr[i])
        {
        yorn++;
        }
    }
       if( arr[size-1] > arr[0])
     {
          yorn++;
    }
    return yorn <=1;
}
int main()
{
   int arr[5] = { 3,4,1,2,5};
   IsarrayRotedorSorted( arr, 5);
    if( 1 )
   {
    cout<<" not Roted and Sorted";
   }
   else
   {
    cout<<"Yes Roteted or Sorted";
   }
  
}