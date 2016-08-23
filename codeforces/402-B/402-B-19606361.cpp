#include<iostream>
#include<vector>
#include<cstring>

using namespace std;



int main(int argc, char const *argv[])
{
	/* code */
	
	int n,k;
	cin>>n>>k;
	int a[n];
	int afinal;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int count =0;
	int maxcount=1001;
	for(int i=1;i<=1000;i++){
		for(int j=0;j<n;j++){
			if(i+k*j!=a[j]){
				count++;
			}

		}
		if(count<maxcount){
			maxcount =count;
			afinal=i;
		}
		count =0;
	}
	cout<<maxcount<<endl;
	for(int i=0;i<n;i++){
		if(a[i]>afinal+i*k){
			cout<<"- "<<(i+1)<<" "<<(a[i]-afinal-i*k)<<endl;
		}else if(a[i]<afinal+i*k){
			cout<<"+ "<<(i+1)<<" "<<(-a[i]+afinal+i*k)<<endl;
		}
	}
	return 0;
}