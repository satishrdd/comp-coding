#include<iostream>
#include<algorithm>
#include<string.h>
 
using namespace std;
 
 
 
 
 
 
int main(int argc, char const *argv[])
{
	/* code */
	long long n,m,a,b;
	cin>>n>>m;
	int flag=1;
	int visit[n];
	memset(visit,9,sizeof(visit));
	while(m--){
		cin>>a>>b;
		if(visit[a-1]==1&&visit[b-1]==1){
			cout<<"NO\n";
			flag =0;
			break;
		}else{
			visit[a-1]=1;
			visit[b-1]=1;
		}
	}
	if(flag==1){
		cout<<"YES\n";
	}
	
	return 0;
}
