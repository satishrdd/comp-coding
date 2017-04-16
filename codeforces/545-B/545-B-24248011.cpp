#include<bits/stdc++.h>


using namespace std;




int main(int argc, char const *argv[])
{
	/* code */
	string s,p;
	cin>>s>>p;
	int count=0;
	for(int i=0;i<s.length();i++){
		if(s[i]!=p[i]){
			if(count%2==0){
				p[i]=s[i];
			}
			count++;
		}
	}
	if(count%2==0){
		cout<<p<<endl;
	}else{
		cout<<"impossible"<<endl;
	}
	return 0;
}