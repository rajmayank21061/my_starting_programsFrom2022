#include<iostream>
#include<vector>
// #include<algorithm>
using namespace std;
    vector<int> reverse( vector<int> v)
    {
        int s = 0;
        int e = v.size() -1;
        while( s<=e)
        {
            swap(v[s],v[e]);
            s++;
            e--;
        }
        return v;
    }
    void printvector( vector<int> v)
    {
        for( int i = 0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
    }
    int main()
{
  vector<int> v;
  v.push_back(12);
  v.push_back(18);
  v.push_back(23);
  v.push_back(29);   
//   for( int i:v)
//   {
//     cout<<i<<" ";
//   }
//   cout<<endl;
//   for( auto it = v.rbegin(); it != v.rend(); it++)
//   {
//     cout<< *it <<" ";
//   }
vector<int> ans = reverse(v);
printvector(ans);
return 0;
}