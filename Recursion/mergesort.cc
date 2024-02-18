#include<iostream>
using namespace std;

void merge(int *arr, int s, int e){
    int mid  = s + (e-s)/2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    int mergeind = s;
    for(int k = 0; k < len1; k++ ){
        first[k] = arr[mergeind++];
    }

    mergeind = mid+1;
    for(int l = 0 ; l < len2; l++){
        second[l] = arr[mergeind++];
    }

    // merge two arrays
    int ind1 = 0;
    int ind2 = 0;
    mergeind = s;

    while( ind1 < len1 && ind2 < len2){
        if(first[ind1] < second[ind2]){
            arr[mergeind++] = first[ind1++];
        }
        else{
            arr[mergeind++] = second[ind2++];
        }
    }

    while( ind1 < len1){
        arr[mergeind++] = first[ind1++];  
    }

    while( ind2 < len2){
        arr[mergeind++] = second[ind2++];
    }

    // (you can skip)Free the dynamically allocated memory
    delete[] first;
    delete[] second;
}

void sortarray( int *arr, int s, int e){
    // base case
    if( s >= e){
        return;
    }

    int mid = s + (e-s)/2;

    // left part
    sortarray( arr, s, mid);
    
    // right part
    sortarray(arr, mid+1, e);

    merge(arr, s, e);
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
