#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        vector< pair<int,int> > v;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
            v.push_back(make_pair(a,b));
        }
        /*for(int i=0;i<v.size();i++)
        {
        cout<<v[i].first<<" "<<v[i].second<<endl;
        }*/
        sort(v.begin(),v.end());
        int max=0;
      for(int j=0;j<v.size();j++)
      {
        int count=1;
        for(int k=0;k<v.size();k++)
        {
        if(k==j)  continue;
        if(v[k].first<v[j].second && v[k].second>=v[j].second)
              { count++; 
               //cout<<"h"<<endl;
               }
        }
        if(count>=max)
          max=count;
        }
        cout<<max<<endl;
    }
    // your code goes here
    return 0;
}