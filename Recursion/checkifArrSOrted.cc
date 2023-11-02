#include<iostream>
using namespace std;
bool checksorted( int arr[] , k)
{
    if( int indx == k - 1)
    return true;
    int smP = checksorted(arr,n-1);
    int bigP = smP * n ;
    return bigP;
}
int main()
{
    int arr[5];
    cin>> arr;
    int k = arr.length;
    int ans = checksorted(arr,k);
    cout << ans ;
}