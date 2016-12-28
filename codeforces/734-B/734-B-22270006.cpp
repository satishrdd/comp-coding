#include<iostream>


using namespace std;


int main(int argc, char const *argv[])
{
	/* code */
	long long a,b,c,d;
	cin>>a>>b>>c>>d;
	long long k =min(a,min(c,d));
	long long ans = k*256;
	a-=k;
	c-=k;
	d-=k;
	k = min(a,b);
	ans+=k*32;
	cout<<ans<<endl;
	return 0;
}