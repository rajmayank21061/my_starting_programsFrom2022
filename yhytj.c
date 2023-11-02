#include <stdio.h>    
     int main()    
{        
    int arr[] = {1, 2, 3, 4, 5};    
    int length = sizeof(arr)/sizeof(arr[0]);    
    printf("Elements of given array: \n");     
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);     
    }        
    return 0;    
}   
