#include<iostream>
using namespace std;
bool is_sorted( int *arr, int size){
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        return is_sorted(arr+1,size-1);
    }
}
int main(){
    int arr[4] = {2,4,1,5};
    cout<< is_sorted(arr,4);
}