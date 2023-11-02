#include<iostream>
using namespace std;
int getsum(int *arr, int a)
{
    int sum = 0;
    for(int j=0; j<a; j++)
    {
        sum += arr[j];
    }
    return sum;
}
int main()
{
    int a;
    cout<<"Enter the Number: "
    cin>>a;

    //variabl_size_array
    int* arr = new int[a];

    for(int i =0;i<a;i++)
    {
        cin>> arr[i];
    }
    int ans = getsum(arr,a);
    cout<< ans <<endl;

}