#include<iostream>


#define ll long long 
using namespace std;


int main(int argc, char const *argv[])
{
	/* code */
	ll n,k,h;
	cin>>n>>h>>k;
	ll curr=0,ans=0,temp;
	for(int i=0;i<n;i++){
		cin>>temp;

		if(curr+temp<=h){
			curr = curr+temp;
		}else{
			ans++;
			curr = temp;
			

		}
		ans += curr/k;
			curr = curr%k;
		//cout<<ans<<endl;
	}

	ans = ans + curr/k;
	curr  = curr%k;
	if(curr>0){
		ans= ans+1;//curr;
	}

	cout<<ans<<endl;
	return 0;
}