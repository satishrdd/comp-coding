#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}

	int prev =0;
	int rest=0;
	for(int i=0;i<n;i++){
		if(ar[i]==0 || (prev!=3 && ar[i]==prev)){
			rest++;
			prev=0;
		}else if(ar[i]==3){
			if(prev==1){
				prev=2;
			}else if(prev==2){
				prev=1;
			}else{
				prev=3;
			}
		}else{
			prev = ar[i];
		}
	}
	cout<<rest<<endl;


	
	return 0;
}