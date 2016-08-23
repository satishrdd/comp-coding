#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#include<bitset> 
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0)
using namespace std;
 
int n,k,x;
int count,count1;
bitset<502> dp[502][32];
 
void compute();
 
 
 
int main() {
    fast_io;
    int t,s;
  
    
    cin >> n;
    vector< vector<int> > a(502);
    for(int i=1;i<=n;i++) {
      for(int j=1;j<=n;j++){
       {
        cin >> s;
        if(s==1) {
          a[i].push_back(j);
          dp[i][0][j]=1;
        }
      }
    }}
    
    for(int t=1;t<=30;t++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(dp[i][t-1][j]) 
                  dp[i][t] =dp[i][t]|dp[j][t-1];
            }
        }
    }
    int cases;
    cin >>cases;
    while(cases--){
        cin >> k >> x;
        if(k!=0){
            compute();
            count1=0;
            
        }
        else {
          cout << 1 << endl << x << endl;
              count1=0;
        }  
      
    }
    return 0;
}
 
 
 
void compute(){
    bitset<502> temp,curr;
    temp[x] =  1;
    curr[x] = 1;
    for(int i=30;i>=0;i--){
        if((1LL<<i)&k){
            curr = temp;
            temp.reset(); 
            for(int j=1;j<=n;j++){
                if(curr[j]){
                    temp = temp|dp[j][i];
                }
            }
        }
    }
    for(int i=1;i<=n;i++) if(temp[i]==1)count1++;
    cout <<count1<< endl;
    if(count1!=0) 
      {
        for(int i=1;i<=n;i++) 
          if(temp[i]==1) 
            {
              cout << i << " ";
            }
            cout<<endl;
      }
    else cout << -1 << endl;
 
}  
