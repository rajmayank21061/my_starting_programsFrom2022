#include<iostream>
#include<vector>
using namespace std;
int isprime( int n)
{
    int ct=0;
   vector<bool> prime(n+1,true);
   prime[0] = prime[1] = false;
   for( int i =2; i<n; i++)
   {
    if( prime[i]){
        ct++;
    }
    for( int j = i*2; j<n; j = j+i)
    {
        prime[j] = 0;
    }
   }
   return ct;
}
int main()
{
    cout<< isprime(10);
   
}


// #include<iostream>
// using namespace std;
// bool isprime(int m)
// {
//         if( m<=1)
//     {
//         return false;
//     }
//     for( int i=2; i<m; i++)
//     {
//         if( m%i==0)
//         {
//             return false;
//         }
//     }
//     return false;
// }
// int countprimenum( int n )
// {
//    int count =0;
//     for( int i =2; i<n; i++)
//     {
//         if( isprime(i) )
//         {
//             count++;
//         }
//     }
//     return count;
// }
// int main()
// { 
//     isprime(9);
//     cout<<countprimenum(9);
    
// }