#include<iostream>


using namespace std;


int main(int argc, char const *argv[])
{
	/* code */
	int n,k,temp;
	cin>>n>>k;
	int ar[n*k+1]={0};
	for(int i=0;i<k;i++){
		cin>>temp;
		ar[temp]=i+1;
	}
	int j=0;
	for(int i=1;i<=n*k;i++){
		if(ar[i]==0){
			ar[i] = (j/(n-1))+1;
			//cout<<ar[i]<<endl;
			j++;
		}
	}
	for(int i=1;i<=k;i++){
		for(int j=1;j<=n*k;j++){
			if(ar[j]==i){
				cout<<j<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}