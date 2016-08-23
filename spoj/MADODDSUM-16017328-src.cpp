#include <iostream>
using namespace std;

int main() {
	long long a,b,c,d;
	// your code here
	cin>>a>>b;
	if(a%2==0)
	c = a+1;
	else
	c = a;
	
	if(b%2==0)
	d = b-1;
	else
	d = b;
	
	long long n = (d -c)/2 +1;
	
	printf("%lld\n",n*(c+d)/2);

	return 0;
}