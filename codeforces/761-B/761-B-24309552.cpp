#include<bits/stdc++.h>


typedef long long ll;


using namespace std;


int main(int argc, char const *argv[])
{
	/* code */
	vector<int> ve1;
	vector<int> ve2;
	ll n,l;
	cin>>n>>l;
	ll ar[n];
	ll br[n];
	ll temp[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
		temp[i]=ar[i];
	}
	for(int i=0;i<n;i++){
		cin>>br[i];
	//	temp[i]=ar[i];
	}

	int falg=0;
	falg=0;
		for(int i=0;i<n;i++){
			if(ar[i]!=br[i]){
				falg=1;
			}
		}
		if(falg==0){
			cout<<"YES"<<endl;
			return 0;
		}

	while(true){
		for(int i=0;i<n;i++){
			ar[i]= (ar[i]+1)%l;

		}
		sort(ar,ar+n);
		falg=0;
		for(int i=0;i<n;i++){
			if(ar[i]!=br[i]){
				falg=1;
			}
		}
		if(falg==0){
			cout<<"YES"<<endl;
			break;
		}
		falg=0;
		for(int i=0;i<n;i++){
			if(ar[i]!=temp[i]){
				falg=1;
			}
		}
		if(falg==0){
			cout<<"NO"<<endl;
			break;
		}
	}

	return 0;
}