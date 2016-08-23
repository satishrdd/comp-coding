
#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<vector>
using namespace std;
int maxlength=0;
#define MAX 100009
bool check[MAX]={false};

int dfs(vector<int> v[],int start){
	int m,m1=-1,m2=-1;
	check[start]  = true;
	for (int i = 0; i < v[start].size(); ++i)
	{
		/* code */
		if(!check[v[start][i]]){
			m = dfs(v,v[start][i]);
			if(m>=m1){
				m2 = m1;
				m1 =m;
			}else if(m>m2){
				m2=m;
			}
		}
	}
	maxlength = max(maxlength,m1+m2+2);
	return (m1+1);

}



int main() {
	
	int n,a,b;
	cin>>n;
	vector<int> v[n+9];
	for(int i=0;i<n-1;i++){
        scanf("%d%d",&a,&b);
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(v,1);
    cout<<maxlength<<endl;
	return 0;
}