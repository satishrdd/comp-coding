#include<bits/stdc++.h>


typedef long long ll;


using namespace std;


int main(int argc, char const *argv[])
{
	/* code */
	ll n,m;
	cin>>n>>m;
	vector<string> v1;
	vector<string> v2;
	map<string,int> ma;
	string s;
	int count=0;
	for(int i=0;i<n;i++){
		cin>>s;
		v1.push_back(s);
		ma[s]=1;
	}
	for(int i=0;i<m;i++){
		cin>>s;
		v2.push_back(s);
		if(ma[s]==1){
			count++;
		}
	}
	
 	//cout<<v.size()<<endl;
 	if(n>m){
 		cout<<"YES"<<endl;
 	}else if(n==m){
 		if(count%2==0){
 			cout<<"NO"<<endl;
 		}else{
 			cout<<"YES"<<endl;
 		}
 	}else{
 		cout<<"NO"<<endl;
 	}
	return 0;
}