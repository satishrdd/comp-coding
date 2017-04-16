#include<bits/stdc++.h>


typedef long long ll;


using namespace std;


int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	for(int i=sqrt(n);i>=1;i--){
		if(n%i==0){
			cout<<min(i,n/i)<<" "<<max(i,n/i)<<endl;
			break;
		}
	}
	return 0;
}