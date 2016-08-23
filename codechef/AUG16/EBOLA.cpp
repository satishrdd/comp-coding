#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0)
 
int main(){
    fast_io;
    long long n,m,k,s,a,b;
    cin>>n>>m>>k>>s;
    long weight[n+1],visited[n+1],degree[n+1];
    for(int i=1;i<=n;i++){
        cin>>weight[i];
        visited[i]=0;
        degree[i]=0;
    }
    vector<int> edges[n+1];
    for(int i=0;i<m;i++){
        cin>>a>>b;
        edges[a].push_back(b);
        edges[b].push_back(a);
        degree[a]++;
        degree[b]++;
    }
    vector<int> infected;
    for(int i=0;i<edges[s].size();i++){
        infected.push_back(edges[s][i]);
    }
    visited[s]=1;
    while(k--){
        int pos=0,max=0,dmax=0;
        for(int i=0;i<infected.size();i++){
            int sum=0;
           
            for(int j=0;j<edges[infected[i]].size();j++){
                if(visited[edges[infected[i]][j]]==0&&visited[infected[i]]!=2){
                    sum +=degree[edges[infected[i]][j]]*weight[edges[infected[i]][j]];
                   // weightsum+=weight[edges[infected[i]][j]];
                }
            }
            sum+=200*degree[infected[i]]*weight[infected[i]];
            
            
            if(sum>dmax){
                pos=i;
                dmax = sum;
                sum=0;
            }
            visited[infected[i]] =1;
        }
        visited[infected[pos]]=2;
        cout<<infected[pos]<<" ";
        vector<int> infected1;
        for(int i=0;i<infected.size();i++){
            for(int j=0;j<edges[infected[i]].size();j++){
                if(visited[edges[infected[i]][j]]==0&&visited[infected[i]]!=2)
                infected1.push_back(edges[infected[i]][j]);
            }
        }
        infected.clear();
        for(int i=0;i<infected1.size();i++){
            infected.push_back(infected1[i]);
        }
        infected1.clear();
        
    }
    cout<<endl;
    return 0;
}   
