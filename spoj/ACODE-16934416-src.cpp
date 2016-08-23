#include<iostream>
#include<cstring>
using namespace std;



int main(int argc, char const *argv[])
{
	/* code */
	string s;
	while(true){
		cin>>s;
		if(s=="0"){
			break;
		}else{
			
			int len = s.length();
			long long ar[len+1];
			memset(ar, 0, len+1);

			ar[0]=1;
			ar[1] = 1;
			for(int i=2;i<=len;i++){
				ar[i] = 0;
			
			char c1 = s[i-2]-'0', c2 = s[i-1]-'0';
			
			if(c1==1 || (c1==2 && c2<=6)) ar[i] += ar[i-2];
			if(c2!=0) ar[i] += ar[i-1];
		}
			cout<<ar[len]<<endl;
		}
	}
	return 0;
}