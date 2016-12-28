#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(int argc, char const *argv[])
{
	/* code */
	int y,k,n;
	cin>>y>>k>>n;
	int a  = (y/k)*k;
	vector<int> ve;
	for(int i=a;i<=n;i+=k){
		if(i-y > 0){
			ve.push_back(i-y);
		}
	}
	if(ve.size()==0){
		cout<<-1<<endl;
	}else{
		//cout<<ve.size()<<endl;
		for(int i=0;i<ve.size();i++){
			cout<<ve[i]<<" ";
		}
		cout<<endl;
	}

	return 0;
}