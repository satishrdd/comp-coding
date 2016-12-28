#include<iostream>
#include<algorithm>
#include<cmath>
#include<map>


using namespace std;



int main(int argc, char const *argv[])
{
	/* code */
	long long n,c,count=0;
	cin>>n>>c;
	long long temp=0,temp1=0;
	
	
	for(long long i=0;i<n;i++){
		cin>>temp1;
		if(temp1-temp>c){
			count=0;
		}
			count++;
		
		temp = temp1;
	}
	
	cout<<count<<endl;
	return 0;
}