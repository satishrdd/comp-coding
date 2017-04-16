#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	int ar[n],br[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	for(int i=0;i<n/2;i++){
		if(i%2==0){
			swap(ar[i],ar[n-1-i]);
		}else{
			;
		}
	}
	for(int i=0;i<n;i++){
		cout<<ar[i]<<" ";
	}
	cout<<endl;
	return 0;
}