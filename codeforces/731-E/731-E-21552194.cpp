#include<iostream>
#include<algorithm>
#include<cmath>
#include<map>


using namespace std;



int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	int ar[n],sum[n],dp[n];
	cin>>ar[0];
	sum[0]=ar[0];
	for(int i=1;i<n;i++){
		cin>>ar[i];
		sum[i] = ar[i] + sum[i-1];
	}
	dp[n-1]= sum[n-1];
	for(int i= n-2;i>0;i--){
		dp[i] = max(dp[i+1],sum[i]-dp[i+1]);
	}
	cout<<dp[1]<<endl;
	return 0;
}