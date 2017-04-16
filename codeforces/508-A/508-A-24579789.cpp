#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(int argc, char const *argv[])
{
	/* code */
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll n,m,k,x,y;
	cin>>n>>m>>k;
	int ans=0;
	int ar[n+2][m+2]={0};
	for(int i=0;i<k;i++){
		cin>>x>>y;
		ar[x][y]=1;
		int t1=ar[x][y] + ar[x-1][y] + ar[x][y-1] + ar[x-1][y-1];
		int t2 = ar[x][y] + ar[x-1][y] + ar[x][y+1] + ar[x-1][y+1];
		int t3 = ar[x][y] + ar[x+1][y] + ar[x][y-1] + ar[x+1][y-1];
		int t4 = ar[x][y] + ar[x+1][y] + ar[x][y+1] + ar[x+1][y+1];
		if(t1==4||t2==4||t3==4||t4==4){
			if(ans==0)
			ans = i+1;
		}
	}
	
	cout<<ans<<endl;

	return 0;
}