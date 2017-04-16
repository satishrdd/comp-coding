#include<bits/stdc++.h>



using namespace std;


int main(int argc, char const *argv[])
{
	/* code */
	long long n,k;
	cin>>n>>k;
	vector<long long> ve;
	for(long long i=1;i<=(long long)sqrt(n);i++){
		if(n%i==0){
			ve.push_back(i);
			long long temp = n/i;
			if(i!=temp)
			ve.push_back(temp);
		}
	}
	if(ve.size()<k){
		cout<<-1<<endl;
	}else{
		sort(ve.begin(), ve.end());
		cout<<ve[k-1]<<endl;
	}
	
	return 0;
}