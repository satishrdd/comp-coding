#include <bits/stdc++.h>


 
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0)

#define MOD 1000000007;
vector<vector<int> > fact(2010);
long long mat[2002][2002] = {0};
	long long res=0;
	int n,k;


void preprocess(){
	for(int i=1;i<=2000;i++){
    	mat[1][i] = 1;
    }
	
    fact[1].push_back(1);
    for(int i=2;i<=2000;i++){
    	for(int j=1;j<sqrt(i);j++) if(i%j==0) fact[i].push_back(j),fact[i].push_back(i/j);
    	if(i == (int)sqrt(i)*sqrt(i)) fact[i].push_back(sqrt(i));
    }
    for(int i=2;i<2001;i++){
    	for(int j=1;j<2001;j++){
    		for(int k=0;k<fact[j].size();k++){
    			mat[i][j] = (mat[i][j] +  mat[i-1][fact[j][k]])%MOD;
    		}
    	}
    }
}

void readinput(){
	fast_io;
	cin>>n>>k;
}

void solve(){
	for(int i=1;i<=n;i++) {
    	res = (res + mat[k][i])%MOD;
    }
}

void print(){
	fast_io;
	cout<<res<<endl;
}

int main(int argc, char const *argv[])
{
	/* code */
	fast_io;
	preprocess();
   	readinput();
   	solve();
   	print();

	return 0;
}