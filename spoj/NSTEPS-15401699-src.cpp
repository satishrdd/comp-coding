#include <iostream>
#include <cstring>
#include <string.h>
#include <sstream>
#include <stdlib.h>
#include <cmath>
using namespace std;




int main(int argc, char const *argv[])
{
	/* code */

	unsigned long i=0,n,m,k,count =0,cases;
	cin>>cases;
	while(cases--){

		cin>>n>>m;
		if(n==m||n==m+2){
			if(n%2==0){
				cout<<n+m<<endl;
			}else{
				cout<<n+m-1<<endl;
			}
		}else{
			cout<<"No Number"<<endl;
		}

	}

	
	return 0;
}
