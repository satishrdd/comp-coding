#include<iostream>
#include<algorithm>
#include<cmath>


using namespace std;



int main(int argc, char const *argv[])
{
	/* code */
	int n,k;
	cin>>n>>k;
	int ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	int count=0;
	for(int i=1;i<n;i++){
		if(ar[i]+ar[i-1]<k){
			int temp = k-ar[i]-ar[i-1];
			count+=temp;
			ar[i]+=temp;
		}
	}
	cout<<count<<endl;
	for(int i=0;i<n;i++){
		cout<<ar[i]<<" ";
	}
	cout<<endl;
	return 0;
}