#include <iostream>
#include <cstring>
#include <string.h>
#include <sstream>
#include <stdlib.h>
#include <cmath>
using namespace std;
template <typename T> 
string to_string(T val){
    stringstream stream;
    stream << val;
    return stream.str();
}


bool isPrime(unsigned long k){
		if (k <= 3) {
	 return k > 1;
	}
	if (k % 2 == 0 || k % 3 == 0) {
	return false;
	}
	long long  sq=sqrt(k);
	for (long long  i = 5; i<=sq; i+=6){
		if(k%i==0 || k % (i + 2)==0) 
 	 	return false; 
	}
	return true; 
}




int main(int argc, char const *argv[])
{
	/* code */

	unsigned long i=0,n,m,k,count =0,cases;
	cin>>cases;
	while(cases--){
		cin>>n>>m;
		k = n;
		while(k<=m){
			if(isPrime(k))
				cout<<k<<endl;

			k++;
		}
	}

	
	return 0;
}
