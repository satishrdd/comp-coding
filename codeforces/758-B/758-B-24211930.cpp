#include<bits/stdc++.h>


typedef long long ll;


using namespace std;


int main(int argc, char const *argv[])
{
	/* code */
	string s;
	cin>>s;
	int r=0,g=0,b=0,y=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='!'){
			int k=i;
			if(k-4>=0){
					if(s[k-4]=='R'){
						s[i]='R';
						r++;
					}else if(s[k-4]=='G'){
						s[i]='G';
						g++;
					}else if(s[k-4]=='B'){
						s[i]='B';
						b++;
					}else if(s[k-4]=='Y'){
						s[i]='Y';
						y++;
					}
					
				}else{

			while(true){
				
				if(k+4>=s.length()){
					break;
				}
				if(s[k+4]!='!'){
					if(s[k+4]=='R'){
						s[i]='R';
						r++;
					}else if(s[k+4]=='G'){
						s[i]='G';
						g++;
					}else if(s[k+4]=='B'){
						s[i]='B';
						b++;
					}else if(s[k+4]=='Y'){
						s[i]='Y';
						y++;
					}
					break;
				}else{
					k=k+4;
				}
			}
		}
		}
	}
	cout<<r<<" "<<b<<" "<<y<<" "<<g<<endl;
	return 0;
}