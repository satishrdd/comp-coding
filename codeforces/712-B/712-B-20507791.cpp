#include<iostream>
#include<cmath>
#include<algorithm>


using namespace std;


int main(int argc, char const *argv[])
{
	/* code */
	string s;
	long n;
	cin>>s;
	long u=0,d=0,l=0,r=0;
	if(s.length()%2!=0){
		cout<<-1<<endl;
	}else{
		for(int i=0;i<s.length();i++){
			if(s[i]=='U'){
				u++;
			}else if(s[i]=='D'){
				d++;
			}else if(s[i]=='R'){
				r++;
			}else{
				l++;
			}
		}

		cout<<(abs(l-r)+abs(u-d))/2<<endl;
	}
	return 0;
}