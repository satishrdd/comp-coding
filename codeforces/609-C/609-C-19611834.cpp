#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#define mod 1000003
using namespace std;



int main(int argc, char const *argv[])
{
	/* code */
	
	long n;
	cin>>n;
	long a[n];
	long long sum =0;
	for(long i=0;i<n;i++){
		cin>>a[i];
		sum +=a[i];
	}
	long r = sum%n;
	sum = sum/n;
	long long minus=0;
	long long plus=0;

	for(long i=0;i<n;i++){
		if(a[i]>sum+1&&r>0){
			plus= plus + a[i]-sum-1;
			r--;
		}else if(r==0){
			if(a[i]>sum)
			plus = plus + a[i]-sum;
		}else{
			if(a[i]==sum+1&&r>0)
			r--;
		}
}

	cout<<plus<<endl;



	return 0;
}