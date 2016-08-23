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
           pow = pow * a%1000000007;
           --b;
         }
         a = a*a%1000000007;
         b = b/2;
  }
  return pow%1000000007;
}



int main(int argc, char const *argv[])
{
	/* code */
	int cases;
	long long c1,c2;
	cin>>cases;
	while(cases--){
		cin>>c1>>c2;
		if(c1%2==1 && c2%2==1){
			cout<<"Ramesh\n";
		}else{
			cout<<"Suresh\n";
		}
		
	}
	return 0;
}
