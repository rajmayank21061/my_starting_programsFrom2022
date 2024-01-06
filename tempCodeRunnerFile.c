#include<stdio.h>
#include<stdlib.h>
void swap( int a1[t],int a2[b]){
    int temp = a1[t];
    a1[t] = a2[b];
    a2[b] = temp;
}
void quicksort( int arr[],int low, int high){
    int p = arr[0];
    int st = low + 1;
    int end = high;
    while(st<=high){
        while( st<=high && arr[st] <= p){
            st++;
        }
        while(st<=high && arr[end] >=p){
           end--;
        }
        if(st<=high){
            swap(arr[st],arr[end]);
        }
    }
    //st>high
    swap( arr[low] , arr[end]);
    quicksort(arr,low,end-1);
    quicksort(arr,end+1,high);
}
void printarr(int arr[], int m){
    for( int h =0; h<m; h++){
        printf("%d\t",arr[h]);
    }
    }
int main() { 
    int arr[] = {35, 50, 15, 25, 80, 20, 90, 45};
    int length = sizeof(arr) / sizeof(arr[0]) - 1;
    quicksort(arr, 0, length);
    printarr(arr, length);
    return 0;
}