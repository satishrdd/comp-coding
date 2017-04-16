#include<bits/stdc++.h>


using namespace std;
typedef long long ll;
int main(int argc, char const *argv[])
{
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin>>n;
	ll ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	sort(ar,ar+n);
	
	for(int i=0;i<n-2;i++){
		if(ar[i]+ar[i+1]>ar[i+2]){
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
	return 0;
}