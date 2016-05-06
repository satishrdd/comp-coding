#include <cstdio>
#include <algorithm>
#include<iostream>
#include <map>
 
using namespace std;
 
int main(){
    int cases,n;
    pair<int,int> P[100000];
    cin>>cases;
    
    while(cases--){
       cin>>n;
        for(int i = 0,l,r;i < n;++i){
         cin>>l>>r;
            P[i] = make_pair(r,l);
        }
        
        sort(P,P + n);
        
        int ans = 0,best = -1;
        
        for(int i = 0;i < n;++i){
            if(P[i].second >= best){
                best = P[i].first;
                ++ans;
            }
        }
        
        cout<<ans<<endl;
    }
    
    return 0;
}