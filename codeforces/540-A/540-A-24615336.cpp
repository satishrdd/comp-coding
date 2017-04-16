#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
#define MOD 100000000





int main(int argc, char const *argv[])
{
	/* code */
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string a,b;
    cin>>n;
    cin>>a>>b;
    int res=0;
    for(int i=0;i<n;i++){
    	int temp1 = a[i]-'0';
    	int temp2 = b[i]-'0';
    	res += min(abs(temp2-temp1),10-max(temp2,temp1)+min(temp1,temp2));
    }
    cout<<res<<endl;
	return 0;
}