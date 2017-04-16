#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
#define MOD 100000000





int main(int argc, char const *argv[])
{
	/* code */
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
    	cin>>ar[i];
    }
    sort(ar,ar+n);
    for(int i=0;i<n;i++){
    	cout<<ar[i]<<" ";
    }
    cout<<endl;
	return 0;
}