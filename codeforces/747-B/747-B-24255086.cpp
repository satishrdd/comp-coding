#include<bits/stdc++.h>


typedef long long ll;


using namespace std;


int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	string s;
	cin>>s;
	int ar[4];
	ar[0]=n/4;
	ar[1]=n/4;
	ar[2]=n/4;
	ar[3]=n/4;
	//cout<<ar[0]<<" "<<ar[1]<<" "<<ar[2]<<" "<<ar[3]<<endl;
	if(n%4!=0){
		cout<<"==="<<endl;
	}else{
		for(int i=0;i<n;i++){
			if(s[i]=='A'){
				ar[0]--;
			}else if(s[i]=='C'){
				ar[1]--;
			}else if(s[i]=='T'){
				ar[2]--;
			}else if(s[i]=='G'){
				ar[3]--;
			}
		}
		//cout<<ar[0]<<" "<<ar[1]<<" "<<ar[2]<<" "<<ar[3]<<endl;
		if(ar[0]<0 || ar[1]<0|| ar[2]<0 || ar[3]<0){
			cout<<"==="<<endl;
		}else{
			for(int i=0;i<n;i++){
				if(s[i]=='?'){
					if(ar[0]>0){
						s[i]='A';
						ar[0]--;
					}else if(ar[1]>0){
						s[i]='C';
						ar[1]--;
					}else if(ar[2]>0){
						s[i]='T';
						ar[2]--;
					}else if(ar[3]>0){
						s[i]='G';
						ar[2]--;
					}
				}
			}
			cout<<s<<endl;
		}
	}
	return 0;
}