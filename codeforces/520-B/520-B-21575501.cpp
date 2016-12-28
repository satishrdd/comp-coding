#include<bits/stdc++.h>




using namespace std;

int a;

void dfs(int num,int count){
	if(num==a){
		cout<<count<<endl;
		return ;
	}
	else if(num>a){
		if(num%2==0)	
		dfs(num/2,count+1);
		else{
			dfs(num+1,count+1);
		}
	}else{

		dfs(num+1,count+1);
	}
	
}

int main(int argc, char const *argv[])
{
	/* code */
	int b;
	cin>>a>>b;
	dfs(b,0);
	return 0;
}