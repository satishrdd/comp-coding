#include<bits/stdc++.h>


using namespace std;




int main(int argc, char const *argv[])
{
	/* code */
	 freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
	int cases,n;
	cin>>cases;
	while(cases--){
		cin>>n;
		cout<<1-n%2<<endl;
	}
	return 0;
}