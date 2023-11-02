#include<iostream>
using namespace std;
int main()
{
   int arr[5] = {2,4,6,8,10};
   /*
   cout<< *arr <<endl;
   cout<< &(*arr) <<endl;
   cout<< *arr + 1 <<endl;
   cout<< *(arr+1) <<endl;
   int i = 2;
   cout<< arr[i] <<" " << *(arr + i) <<endl;
   cout<< i[arr] <<" " << *(arr + i);
 */
 //error
 // arr = arr + 1;
   cout<< &arr[0] <<endl;
   
   int *t = &arr[0];
   
   cout<< t <<endl;
   cout<< &t <<endl;
}