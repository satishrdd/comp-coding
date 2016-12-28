#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int m[24][60]={0};

int main(int argc, char const *argv[])
{
	/* code */
	ios_base::sync_with_stdio(0);cin.tie(0);
	int n,a,b;
	cin>>n;
	vector<int> primes;
	int i=2;
	bool flag=false;
	while(primes.size()<n){
		for(int j=2;j*j<=i;j++){
			if(i%j==0){
				flag=true;
				break;
			}
		}
		if(!flag){
			primes.push_back(i);
		}
		flag=false;
		i++;
	}

	for(int j=0;j<primes.size();j++){
		cout<<primes[j]<<" ";
	}
	//cout<<endl;
	return 0;
}