#include<iostream>
#include<algorithm>


using namespace std;






int main(int argc, char const *argv[])
{
	/* code */
	int cases;
	
	long long n;
	cin>>cases;
	while(cases--){
	cin>>n;
	long long res1 = n*(n+1)*(n+2)/6;
	if(n%2==0){
		res1 = res1 + (n*(n+2)*(2*n-1))/24;
	}else{
		res1 = res1 + ((n-1)*(n+1)*(2*n+3))/24;
	}
	cout<<res1<<endl;}
	return 0;
}
