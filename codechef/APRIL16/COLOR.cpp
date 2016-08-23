#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<cmath>
 
using namespace std;
 
 
 
long long power(long long a, long long b)
{
  long long pow = 1;
  while ( b ) 
  {
         if ( b & 1 ) 
         {
           pow = pow * a%10000007;
           --b;
         }
         a = a*a%10000007;
         b = b/2;
  }
  return pow%10000007;
}
 
 
int main(int argc, char const *argv[])
{
	/* code */
	
	int cases;
	cin>>cases;
	while(cases--){
		long long len ;
		cin>>len;
 
		string s;
		cin>>s;
		long long r=0,b=0,g=0;
				for(long long i=0;i<len;i++){
			if(s[i]=='R'){
				r++;
			}else if(s[i]=='G'){
				g++;
			}else{
				b++;
			}
		}
 
		cout<<len - max(max(r,g),b)<<endl;
	}
	
	return 0;
}
