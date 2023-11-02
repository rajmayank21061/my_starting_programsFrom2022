#include<iostream>
#include<limits.h> //climits
using namespace std;
bool serchar(int arr1[],int size,int input)
{
     for(int i=0; i<sizeof(arr1); i++)
    {
          if(arr1[i]==input){
            return 1;
          }
}
return 0;
}
int main()
{ 
    int arr1[13] = {3,4,1,2,6,5,-2,8,-1,1};
    int input;
    cout<<"Put input value:"<<endl;
    cin>>input;
    bool ks =serchar( arr1 , 10 , input );
   
        if(ks)
        {
            cout<<"find out of"<<input<<endl;
        }
        else
        {
            cout<<"Not find of"<<input<<endl;
        }
    
    return 0;
}