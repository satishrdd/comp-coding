#include <bits/stdc++.h>
using namespace std;




int main()
{
    int n,m;
    cin>>n>>m;
    int ar[n][m],dp[n][m]={0},dp1[n][m]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>ar[i][j];
        }
    }

    for(int i=0;i<n;i++){
        dp[i][0]=ar[i][0];
        for(int j=1;j<m;j++){
            dp[i][j] = dp[i][j-1]+ar[i][j];
        }
    }

    for(int j=0;j<m;j++){
        dp1[0][j]=ar[0][j];
        for(int i=1;i<n;i++){
            dp1[i][j] = dp1[i-1][j] + ar[i][j];
        }
    }
    int count=0;


    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(ar[i][j]==0){
                if(dp[i][0]<=dp[i][j]){
                    if(dp[i][j]>0)
                        count++;
                }
                if(dp[i][m-1]>dp[i][j]){
                    count++;
                }
                if(dp1[0][j]<=dp1[i][j]){
                    if(dp1[i][j]>0)
                        count++;
                }
                if(dp1[n-1][j]>dp1[i][j]){
                    count++;
                }
            }
        }
    }
    cout<<count<<endl;
    return 0;
}