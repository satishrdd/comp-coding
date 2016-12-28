#include<iostream>
#include<bits/stdc++.h>

using namespace std;






int main(int argc, char const *argv[])
{
	/* code */
	long long n,k;
	cin>>n>>k;
	long long ar[n];
	long long j=0;
	
	for(int i=0;i<n;i=i+2){
		j++;
		ar[i] = j;
	}
	j=n;
	for(int i=1;i<n;i=i+2){
		ar[i]=j;
		j--;
	}

	sort(ar+k,ar+n);
	//cout<<count<<endl;
	if(abs(ar[k-1]-ar[k])==1)
	for(int i=0;i<n;i++){
		cout<<ar[i]<<" ";
	}else{
		for(int i=0;i<k;i++){
			cout<<ar[i]<<" ";
		}for(int i=n-1;i>=k;i--){
			cout<<ar[i]<<" ";
		}
	}
	cout<<endl;
	return 0;
}

//8 4 2 6 8


///x y y-x -x -y x-y