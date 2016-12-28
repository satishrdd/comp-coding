#include<iostream>
#include<algorithm>
#include<cmath>
#include<map>


using namespace std;



int main(int argc, char const *argv[])
{
	/* code */
	int cases;
	long long n,temp=0,res=0;
	cin>>cases;
	while(cases--){
		cin>>n;
		res = n*(n+1)/2;
		for(long long i=0;;i++){
			if((1<<i) > n){
				break;
			}else{
				long long x =1<<i;
				temp = temp + x;
				
			}

		}
	
		res = res - 2*temp;
		cout<<res<<endl;
		temp=0;
		res=0;
	}
	return 0;
}