#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<cmath>
#include<climits>
using namespace std;
 
long long gcd(long long a,long long b){
	long long t;
	while(b!=0){
		t = b;
		b = a%b;
		a=t;
	}
	return a;
}
 
long long res[1000010];
long long phi[1000010];
 
void precal( long long n ) {
  
    for(long long i=1;i<=n;i++)
     phi[i] = i;
    for(long long i=2;i<=n;i++) {
        if ( phi[i] == i ) {
            for ( long long j = i; j <= n; j += i ) {
                phi[j] /= i;
                phi[j] *= i - 1;
            }
        }
    }
 
    for(long long i=1;i<=n;i++){
        for ( long long j = i; j <= n; j += i ) {
            res[j] += ( i * phi[i] );
        }
    }
}
 
int main(int argc, char const *argv[])
{
	/* code */
	long long cases,n,sum,prev;
	scanf("%lld",&cases);
	
precal(1000000);
	while(cases--){
		scanf("%lld",&n);
		sum=0;
		
		
		sum =  (res[n]+1)*n/2;
		printf("%lld\n",sum);
	}
	return 0;
}
 