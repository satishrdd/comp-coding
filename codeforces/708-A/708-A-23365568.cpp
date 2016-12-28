#include<iostream>
#include<bits/stdc++.h>

using namespace std;






int main(int argc, char const *argv[])
{
	/* code */
	string s;
	int pos=-1;
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(s[i]!='a'){
			pos=i;
			break;
		}
	}

	for(int i=pos;i<s.length();i++){
		if(s[i]!='a'){
			s[i] = s[i]-1;
		}else{
			break;
		}
	}
	if(pos==-1){
		s[s.length()-1] = 'z';
		cout<<s<<endl;
	}else
	cout<<s<<endl;
	return 0;
}

//8 4 2 6 8


///x y y-x -x -y x-y