#include<iostream>
#include<algorithm>
#include<cmath>


using namespace std;



int main(int argc, char const *argv[])
{
	/* code */
	int k,r;
	cin>>k>>r;
	
	int u =k%10;
	int res=1;
	while(true){
		if(u==0||u==r){
			cout<<res<<endl;
			break;
		}
		u+=k;
		u%=10;
		res++;
		
	}
	return 0;
}