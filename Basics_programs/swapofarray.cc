#include<iostream>
using namespace std;
void Reverse(int arr[],int size)
{
    int start = 0;
    int end = size-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void print(int arr[], int size)
{
   for(int i=0; i<=size; i++)
   {
    cout<<arr[i]<<" ";
   }
   cout<<endl;
}
int main()
{
    int pok[10] ={2,4,6,8,10};
    int ol[13] = {1,3,5,7,9};
   
     Reverse(pok,10);
     Reverse(ol,13);
      
      print(pok,10);
      print(ol,13);
    
}