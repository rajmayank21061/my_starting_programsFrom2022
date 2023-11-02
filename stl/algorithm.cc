#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
vector<int> num = { 2,4,25,565,21,0};
cout<< binary_search(num.begin(),num.end(),0) <<endl;
int a=4,b=9;
cout<< max(a,b) <<endl;
string kg = "aliko";
reverse(kg.begin(),kg.end());
cout<< kg <<endl;
cout<< min(a,b) <<endl;
rotate( num.begin() , num.begin() + 2 , num.end() );
cout<<"after rotated"<<endl;
for( int i:num)
{
    cout<<i<<" ";
}

}
