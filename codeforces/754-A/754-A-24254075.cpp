#include<bits/stdc++.h>


typedef long long ll;


using namespace std;


int main(int argc, char const *argv[])
{
	/* code */
	int n;
	int temp,sum=0,falg=0,pos=-1;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
		sum+=ar[i];
		if(falg==0&&sum!=0){
			pos=i;
			falg=1;
		}
	}
	if(sum==0){
		if(pos==-1){
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
			cout<<2<<endl<<1<<" "<<pos+1<<endl<<pos+2<<" "<<n<<endl;
		}
	}else{
		cout<<"YES"<<endl;
		cout<<1<<endl<<1<<" "<<n<<endl;
	}
	return 0;
}