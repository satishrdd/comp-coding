#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<cmath>
#include<climits>
 
using namespace std;


int main(int argc, char const *argv[])
{
	/* code */
	double m_p = 2*acos(0);
	long long cases,l;
	double n;
	scanf("%lld",&cases);

	while(cases--){
		cin>>n;
		if(n==0.00||n==1.00)l=1;

        else{
        l=(((log(2.00*m_p*n)/2.00)+(n*(log(n)-1.00)))/log(10.0))+1;
        }
        cout<<l<<endl;
    }
	return 0;
}
