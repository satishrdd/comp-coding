#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	string s;
	cin>>s;
	
	int ar[7]={0};
	for(int i=0;i<s.length();i++){
		if(s[i]=='a'){
			ar[0]++;
		}else if(s[i]=='b'){
			ar[1]++;
		}else if(s[i]=='l'){
			ar[2]++;
		}else if(s[i]=='s'){
			ar[3]++;
		}else if(s[i]=='u'){
			ar[4]++;
		}else if(s[i]=='r'){
			ar[5]++;
		}else if(s[i]=='B'){
			ar[6]++;
		}
	}

	cout<<min(ar[0]/2,min(ar[1],min(ar[2],min(ar[3],min(ar[4]/2,min(ar[5],ar[6]))))))<<endl;

	
	return 0;
}