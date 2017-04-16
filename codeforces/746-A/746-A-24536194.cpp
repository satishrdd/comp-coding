#include<bits/stdc++.h>


using namespace std;
typedef long long ll;
int main(int argc, char const *argv[])
{
	
	ios_base::sync_with_stdio(false);
    map<ll,ll> ma;
   ll n,m,c;
   cin>>n>>m>>c;
   cout<<7*(min(n,min(m/2,c/4)))<<endl;
	return 0;
}