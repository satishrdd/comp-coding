#include<iostream>
#include<algorithm>
#include<string.h>
 
using namespace std;
 
 
 
 
 
 
int main(int argc, char const *argv[])
{
	/* code */
	int cases;
	long long n,a;
	char c,c1;
	cin>>cases;
	while(cases--){
	cin>>n>>c;
	while(true){
		a=n;
		c1 =c;
		cin>>n>>c;
		if(c1=='+'){
			n = a+n;
		}else if(c1=='-'){
			n = a-n;
		}else if(c1=='*'){
			n = a*n;
		}else if(c1=='/'){
			n = a/n;
		}
 
 
		if(c=='='){
			cout<<n<<endl;
			break;
		}
 
	}
	}
	return 0;
}