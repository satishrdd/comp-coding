#include<bits/stdc++.h>


using namespace std;

 
using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	 ios_base::sync_with_stdio(false) ;cin.tie(NULL);
	map<string,int> m;
	int cases;
	cin>>cases;
	char c;
	string s="",f="";
	while(cases--){
		cin>>c>>s;
		int n =18-s.length();
		for(int i=0;i<n;i++){
			s="0"+s;
		}
		
		
		if(c!='?'){
		for(int i=0;i<s.length();i++){
			if((s[i]-'0')%2==0){
				f=f+'0';
			}else{
				f = f+'1';
			}
		}
		for(int i=0;i<18-s.length();i++){
			f='0'+f;
		}
		
		}
		if(c=='+')
			m[f]++;
		else if(c=='-'){
			m[f]--;
		}else{
			cout<<m[s]<<std::endl;
		}
		f="";
	}
	return 0;
}