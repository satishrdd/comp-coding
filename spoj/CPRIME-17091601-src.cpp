		/*****************************************************************************************/
/*																		     			 */
/*  					Satish Reddy Yerva										 			 */
/*																			 			 */
/*****************************************************************************************/
 
#include <bits/stdc++.h>
#include <bitset>
#include <iostream>

using namespace std;
#define ll long long
#define MAX 100000001
#define LIM 10000

int flagArr[MAX>>6];
int arrVal[MAX];
#define ifComp(x) (flagArr[x>>6]&(1<<((x>>1)&31)))
#define isComp(x) (flagArr[x>>6]|=(1<<((x>>1)&31)))

void Sieve()
{
       register int i,j,k;
       for(i=3;i<LIM;i+=2)
       {
              if(!ifComp(i))
              {
                     for(j=i*i,k=i<<1;j<MAX;j+=k)
                            isComp(j);
              }	
       }
       //printf("2\n");
       arrVal[2]=1;
       for(i=3;i<MAX;i++)
       {
            if(i%2 && !ifComp(i))
            {
            	arrVal[i]=arrVal[i-1]+1;
               }
               else 
               	arrVal[i]=arrVal[i-1];
       }
}


int main(int argc, char const *argv[])
{
	/* code */
	ll n,cases;
	Sieve();
	while(cin>>n){
	if(n==0)
		break;
	
	  std::cout << std::fixed;
    std::cout << std::setprecision(1);
	ll x = arrVal[n];
	cout<<100*(abs((double)x-((double)n/log(n)))/(double)x)<<endl;
	
}
return 0;

}