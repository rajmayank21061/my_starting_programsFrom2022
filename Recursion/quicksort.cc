#include<iostream>
using namespace std;
int partition(int *arr,int s, int e){
    int pivot = arr[s];
    int cnt = 0;
    for( int i = s+1; i<=e; i++)
    {
        if(arr[i]<=pivot)
        cnt++;
    }
    int pvt_ind = s + cnt;
    swap(arr[pvt_ind],arr[s]); 
    int i = s,j=e;
    while(i<pvt_ind && j>pvt_ind){
        while(i<pvt_ind && arr[i]<=pivot){
            i++;
        }
        while(j>pvt_ind && arr[j]>pivot){
            j--;
        }
        if(i<pvt_ind && j>pvt_ind){
            swap(arr[i++],arr[j--]);
        }
    }
    return pvt_ind;
}
void sortarray( int *arr, int s , int e)
{
   if(s>=e){
    return;
   }
   // for partition
   int p = partition( arr,s,e);
   //rec relation
   //left part
   sortarray(arr,s,p-1);
   //right part
   sortarray(arr,p+1,e);
}
int main()
{
    int arr[8] = {2,4,1,44,12,3,5,0};
    int n = 8;
    sortarray(arr, 0, n-1);

    for( int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}