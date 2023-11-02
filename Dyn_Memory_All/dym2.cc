#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter number"<<endl;
   cin>>n;
   int **arr = new int*[n];
   for( int i = 0; i<n; i++)
   {
     arr[i] = new int[n];
   }
   // 2d array creation done.
   
   // taking input
   for( int i = 0; i<n; i++)
   {
    for( int j = 0; j<n; j++)
    {
        cin>>arr[i][j];
    }
   }

   //taing output
   for(int i =0; i<n; i++)
   {
    for( int j =0; j<n; j++)
    {
    cout<< arr[i][j] <<" ";
   } 
   cout<<endl;     
    }
}