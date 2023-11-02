#include<iostream>
#include<string.h>
#include<math.h>
int convert(int num)
{
    int rem;
    int i = 0;
    int p;
    while(num!=0)
    {
     rem = num%2;
     num /=2;
     a[i] = rem;
     i++;
    }
    for(int j=num/2;j<=0;j--)
    {
        p[j] = a[i];
        return a[j];
    }
}
int main() 
{
    int num;
    cout<<"Enter a number whose convert in binary number"
    cin>>num;
    ans = convert(num);
    cout<<ans<<endl;
    return 0;
}