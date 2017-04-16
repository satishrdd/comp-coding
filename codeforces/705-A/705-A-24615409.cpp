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
    string s = "I hate ";
    cin>>n;
    if(n==1){
    	s = s+ "it";
    	cout<<s<<endl;
    }else{
    	for(int i=1;i<n;i++){
    		if(i%2!=0){
    			s = s + "that I love ";
    		}else{
    			s = s + "that I hate ";
    		}
    	}
    	s = s+"it";
    	cout<<s<<endl;
    }
	return 0;
}