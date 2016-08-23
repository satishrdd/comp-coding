#include <iostream>
#include<algorithm>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int dp[2001][2001];
int ar[2001];
int calculate(int start , int end , int year)
{
    if(start > end)
        return 0;
    if(dp[start][end] != -1)
        return dp[start][end];
    return (dp[start][end] = max(calculate(start + 1 , end , year+1) + year * ar[start] , calculate(start, end - 1 , year+1) + ar[end]*year));
}
int main() {
	
	// your code here
	int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>ar[i];
       
    }
     memset(dp , -1 , sizeof dp);
    cout<<calculate(0,n-1,1)<<endl;
	return 0;
}