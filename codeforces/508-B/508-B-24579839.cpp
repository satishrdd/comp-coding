#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(int argc, char const *argv[])
{
	/* code */
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	string s;
	cin>>s;
	int n  = s.length();
	for(int i=0;i<n;i++){
		if((s[i]-'0')%2==0){
			break;
		}
		if(i==n-1){
			cout<<-1<<endl;
			return 0;
		}
	}
	char c = s[n-1];
	for(int i=0;i<n-1;i++){
		if(s[i]<s[n-1] && (s[i]-'0')%2==0){
			swap(s[i],s[n-1]);
			cout<<s<<endl;
			return 0;
		}
	}
	for(int i=n-2;i>=0;i--){
		if(s[i]>s[n-1] && (s[i]-'0')%2==0){
			swap(s[i],s[n-1]);
			cout<<s<<endl;
			return 0;
		}
	}
	

	return 0;
}