#include<iostream>
#include<algorithm>
#include<cmath>
#include<map>


using namespace std;



int main(int argc, char const *argv[])
{
	/* code */
	int n,temp;
	map<long long,int> ma;
	int pos=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>temp;
		for(int j=pos;j<pos+temp;j++){
			ma[j]=i;
		}
		pos = pos +temp;
	}
	int q,x;
	cin>>q;
	while(q--){
		cin>>x;
		cout<<ma[x]<<endl;
	}
	return 0;
}