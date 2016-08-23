#include<bits/stdc++.h>
using namespace std;
inline int scan(){
    char c = getchar_unlocked();
    int x = 0;
    while(c<'0'||c>'9'){
        c=getchar_unlocked();
    }
    while(c>='0'&&c<='9'){
        x=(x<<1)+(x<<3)+c-'0';
        c=getchar_unlocked();
    }
    return x;
}
#define pb push_back
#define mp make_pair
int main(){
    int t=scan();
    while(t--){
        int n=scan(),m=scan();
        vector<pair<int,int> > v[2][100001];
        while(m--){
            int a=scan(),b=scan(),c=scan();
            v[0][a].pb(mp(b,c));
            v[1][b].pb(mp(a,c));
        }
        priority_queue<pair<int,int> > q;
        int d[n+1][2];
        for(int k=0;k<2;k++){
            for(int i=0;i<=n;d[i++][k]=INT_MAX);
            d[1][k]=0;
            q.push(mp(0,1));
            while(!q.empty()){
                int node=q.top().second;
                int weight=-q.top().first;
                q.pop();
                if(weight>d[node][k])continue;
                int x=v[k][node].size();
                for(int i=0;i<x;i++){
                    int next=v[k][node][i].first;
                    int w = v[k][node][i].second;
                    if(d[next][k]>weight+w){
                        d[next][k]=weight+w;
                        q.push(mp(-d[next][k],next));
                    }
                }
            }
        }
        int ans=0;
        for(int i=2;i<=n;i++){
            ans+=d[i][0]+d[i][1];
        }
        printf("%d\n",ans);
    }
}