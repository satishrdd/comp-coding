#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
#define MOD 1000000007

vector<int> ve[100005];
ll visited[100005];
ll coun[100005];
ll A[100005],B[100005],C[100005];




void dfs(int i,int label){
	if(visited[i]==0){
		visited[i]=label;
	}
	for(int j=0;j<ve[i].size();j++){
		if(visited[ve[i][j]]==0){
			dfs(ve[i][j],label);
		}
	}
	return;
}



int main(int argc, char const *argv[])
{
	/* code */
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,k1,k2,temp;
	cin>>n;
	queue<int> q1,q2;
	cin>>k1;
	for(int i=0;i<k1;i++){
		cin>>temp;
		q1.push(temp);
	}
	cin>>k2;
	for(int i=0;i<k2;i++){
		cin>>temp;
		q2.push(temp);
	}
	long long cnt=0;
	while(!q1.empty() && !q2.empty() && cnt<1000000){
		int temp1= q1.front();
		int temp2 = q2.front();
		q1.pop();
		q2.pop();
		if(temp1>temp2){
			q1.push(temp2);
			q1.push(temp1);
		}else{
			q2.push(temp1);
			q2.push(temp2);
		}
		cnt++;


	}

	if(cnt==1000000){
		cout<<-1<<endl;
	}else if(!q2.empty()){
		cout<<cnt<<" "<<2<<endl;
	}else{
		cout<<cnt<<" "<<1<<endl;
	}
	return 0;
}