#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int> maxi;
    //for minimum
    priority_queue< int,vector<int>, greater<int> > mini;
    maxi.push(4);
    maxi.push(3);
    maxi.push(21);
    maxi.push(1);
    cout<<maxi.top()<<endl;
    int n = maxi.size();
    for(int i = 0; i<n; i++)
    {
        cout<<maxi.top()<<endl;
        maxi.pop();
    }
    mini.push(34);
    mini.push(3);
    mini.push(211);
    mini.push(31);

int m = mini.size();
for(int j=0; j<m; j++)
{
    cout<<mini.top()<<" "<<endl;
    mini.pop();
}
}
// and other operation apply as well as other ds.
