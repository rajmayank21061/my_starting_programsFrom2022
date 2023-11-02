#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num= -123 ;
    int ans=0,digit;
    int intmax= -2147483648,intmin = 2147483647;


    // range of int number
    //power of 2 of 31 to 2 of 31 - 1 
    if((ans>intmax/10) || (ans<intmin/10)){
        return 0;
    }
    while(num!=0){
        digit = num % 10;
        ans = (ans * 10) + digit;
        num = num /10;
    }
 cout<<"Reverse Number : "<< ans;
}