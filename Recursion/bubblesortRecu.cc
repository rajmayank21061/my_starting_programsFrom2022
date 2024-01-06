#include<iostream>
using namespace std;
void usingBubble(int *arr, int l){
    if(l == 0 || l == 1)
    {
        return ;
    }
    for(int i=0; i<l-1; i++)
    {
    if(arr[i+1]<arr[i]){
        swap(arr[i+1],arr[i]);
    }
    }
    usingBubble(arr,l-1);
}
int main()
{
int arr[6] = {5,87,8,2,9,6};
usingBubble(arr,6);
for( int j=0; j<5; j++)
{
    cout<< arr[j] << "\t";
}
}