#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int ar[1005][1005];
	int row[1005];
	int col[1005];

int main(int argc, char const *argv[])
{
	/* code */
	ios_base::sync_with_stdio(0);;cin.tie(0);
	int n,m,k;
	char c;
	//scanf("%d%d%d",&n,&m,&k);
	cin>>n>>m>>k;
	

	for(int i=0;i<n;i++){
		row[i]=i;
		for(int j=0;j<m;j++){
			//scanf("%d",&ar[i][j]);
			cin>>ar[i][j];
			//col[j]=j;
		}
	}
	for(int i=0;i<m;i++){
		col[i]=i;	
	}
	int a,b;
	while(k--){
		cin>>c>>a>>b;
		if(c=='r'){
			int temp = row[a-1];
			row[a-1] = row[b-1];
			row[b-1] = temp;
			//swap(row[a-1],row[b-1]);
		}else if(c=='c'){
			int temp = col[a-1];
			col[a-1] = col[b-1];
			col[b-1] = temp;
		}else{
			cout<<ar[row[a-1]][col[b-1]]<<endl;
		}
	}

	return 0;
}