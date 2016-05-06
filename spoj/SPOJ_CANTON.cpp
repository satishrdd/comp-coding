#include<iostream>
#include<algorithm>
 
 
using namespace std;
 
 
 
 
 
 
int main(int argc, char const *argv[])
{
	/* code */
	long long n,i=0,num=0,den=0;
	int cases;
	cin>>cases;
	while(cases--){
	cin>>n;
	long long k = n;
 
	while(true){
		i++;
		n = n-i;
		if(n<=0){
			if(i%2==0){
				num =i;
				den = 1;
				num = num - (i+n-1);
				den = den + (i+n-1); 
			}else{
				num =1;
				den = i;
				den = den - (i+n-1);
				num = num + (i+n-1); 
			}
			cout<<"TERM "<<k<<" IS "<<den<<"/"<<num<<endl;
			break;
		}
		
	}
	i=0;
}
	return 0;
}