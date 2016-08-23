#include<iostream>

#include <utility>
#include<vector>
#include<algorithm>

long long minmum(long long a,long long b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}

using namespace std;


int main(int argc, char const *argv[])
{
    /* code */

    long long n,m,k;
    cin>>n>>m>>k;
    long  long u,v,l;
    long long temp;
    pair<pair<long long,long long>, long long> *p = new pair<pair<long long,long long>,long long>[m];
    
vector<long long> road[n+1];
    for(long long i=0;i<m;i++){
        cin>>u>>v>>l;
       p[i].first.first =u;
        p[i].first.second=v ;
         p[i].second = l;

    }
    long long min = 1000000002;
   
    bool check[n+1] = {false};
    long long t1;
    for(long long i=0;i<k;i++){
        cin>>t1;
        check[t1] = true;
    } 
for(long long i=0;i<m;i++){if ((check[p[i].first.first] && !check[p[i].first.second]) ||

     (!check[p[i].first.first] && check[p[i].first.second])) {
      min = minmum(min, p[i].second);

    }
}

    if(min == 1000000002){
        cout<<-1<<endl;
    }else
    cout<<min<<endl;

    return 0;
}