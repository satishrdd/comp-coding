#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
#define MOD 100000000


int ceil(int n,int k){
	if(n%k>0){
		return (n/k)+1;
	}else{
		return n/k;
	}
}


int main(int argc, char const *argv[])
{
	/* code */
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   int sum1=0,sum2=0;
   int n;
   for(int i=0;i<3;i++){
   	cin>>n;
   	sum1+=n;
   }
   for(int i=0;i<3;i++){
   	cin>>n;
   	sum2+=n;
   }
   cin>>n;
   if(ceil(sum1,5)+ceil(sum2,10)<=n){
   	cout<<"YES"<<endl;
   }else{
   	cout<<"NO"<<endl;
   }

	return 0;
}