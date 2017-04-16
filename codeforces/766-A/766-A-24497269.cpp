#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(int argc, char const *argv[])
{
	/* code */
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	string a,b;
	cin>>a>>b;
	if(a==b){
		cout<<-1<<endl;
	}else{
		cout<<max(a.length(),b.length())<<endl;
	}
	return 0;
}