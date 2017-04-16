#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
#define MOD 100000000





int main(int argc, char const *argv[])
{
	/* code */
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    cout<<min(n,m)<<" "<<(max(n,m)-min(n,m))/2<<endl;
	return 0;
}