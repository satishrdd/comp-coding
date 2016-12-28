#include<iostream>


using namespace std;


int main(int argc, char const *argv[])
{
	/* code */
	int len;
	string s;
	cin>>len>>s;
	int zero=0,one=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='0'){
			if(one>0){
				one--;
			}else{
				zero++;
			}
		}else{
			if(zero>0){
				zero--;
			}else{
				one++;
			}
		}
	}

	cout<<one+zero<<endl;
	return 0;
}