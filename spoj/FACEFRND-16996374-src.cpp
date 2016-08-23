#include<iostream>
#include<algorithm>
#include<set>

using namespace std;

int main(){
    int n;
    std::set<int> myset;
    cin>>n;
    int a=n;
    while(n--){
        int k,t,u;
        cin>>k>>t;
        myset.insert(k);
        while(t--){
            cin>>u;
             myset.insert(u);
        }
    }
    int u = myset.size();
    u = u-a;
    cout<<u<<endl;
    
}