#include<iostream>
#include<algorithm>
#include<string.h>

using namespace std;






int main(int argc, char const *argv[])
{
	/* code */
	int cases,a,b[8];
	cin>>cases;
	string s;
	
	while(cases--){
		cin>>a;
		cin>>s;
		b[0] = 0;
	b[1] = 0;
	b[2] = 0;
	b[3] = 0;
	b[4] = 0;
	b[5] = 0;
	b[6] = 0;
	b[7] = 0;
	b[8] = 0;
		for(int i=0;i<=37;i++){
			if(s.substr(i,3)=="TTT"){
				b[0]++;
			}else if(s.substr(i,3)=="TTH"){
				b[1]++;
			}else if(s.substr(i,3)=="THT"){
				b[2]++;
			}else if(s.substr(i,3)=="THH"){
				b[3]++;
			}else if(s.substr(i,3)=="HTT"){
				b[4]++;
			}else if(s.substr(i,3)=="HTH"){
				b[5]++;
			}else if(s.substr(i,3)=="HHT"){
				b[6]++;
			}else if(s.substr(i,3)=="HHH"){
				b[7]++;
			}
		}

		cout<<a<<" "<<b[0]<<" "<<b[1]<<" "<<b[2]<<" "<<b[3]<<" "<<b[4]<<" "<<b[5]<<" "<<b[6]<<" "<<b[7]<<endl;
	}
	
	return 0;
}
