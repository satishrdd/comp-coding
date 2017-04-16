#include<bits/stdc++.h>


using namespace std;



int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	int pos=n,temp;
	int ar[n+1];
	for(int i=1;i<=n;i++){
		ar[i]=-1;
	}
	for(int i=0;i<n;i++){
		cin>>temp;
		ar[temp]=1;
		if(ar[pos]==1){
			while(ar[pos]!=-1){
				cout<<pos<<" ";
				pos--;
				if(pos<=0){
					break;
				}
			}
			cout<<endl;
		}else if(ar[pos]==-1){
			cout<<endl;
		}
	}
	return 0;
}