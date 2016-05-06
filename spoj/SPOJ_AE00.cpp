#include <iostream>
#include<cstring>
#include<string.h>
#include<cmath>
#include<algorithm>
using namespace std;
 
main()
{
	/* code */
	
 
	int i,a,j;
	int n;
	cin>>n;
	a =0;
	for(i=1;i<=(int)sqrt(n);i++){
		a = a + (n/i) ;
		a=a+ 1-i;
	}
	cout<<a<<endl;
	
 
}