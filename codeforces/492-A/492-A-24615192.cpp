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
    cin>>n;
   	int i=0;
   	while(true){
   		if(i*(i+1)>2*n){
   			cout<<i-1<<endl;
   			break;
   		}
   		n = n - i*(i+1)/2;
   		i++;
   	}
	return 0;
}