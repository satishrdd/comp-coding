#include<iostream>
#include<vector>
#include<cstring>
#define mod 1000000007
using namespace std;


long long int square(long long int x,int n)
{
    if(n==0)
        return 1;
    else if(n==1)
        return x;
    else if(n%2==0)
        return square((x*x)%mod,(n/2));
    else
        return (x*square((x*x)%mod,((n-1)/2)))%mod;
}
long long int fast_pow(long long base, long long n,long long M)
{
    if(n==0)
       return 1;
    if(n==1)
    return base;
    long long halfn=fast_pow(base,n/2,M);
    if(n%2==0)
        return ( halfn * halfn ) % M;
    else
        return ( ( ( halfn * halfn ) % M ) * base ) % M;
}
long long int findMMI_fermat(long long int n,long long int M)
{
    return fast_pow(n,M-2,M);
}
int main(int argc, char const *argv[])
{
	/* code */
	
	string s;
	long long n;
	cin>>s;
	long long k;
	cin>>k;
	vector<long> pos;
	for(long long i=0;i<s.length();i++){
		if(s[i]=='0'||s[i]=='5'){
			pos.push_back(i);
		}
	}
	long l = pos.size();
	long long t = square(2,s.length());
	long long res=0;
	for(long long i=0;i<pos.size();i++){
		long long temp =  (((fast_pow(2,pos[i],mod)))*((fast_pow(2,k*s.length(),mod)-1)));
		long long temp1 = findMMI_fermat(t-1,mod);
		temp = ((temp%mod)*(temp1%mod))%mod;
		res = res+temp;
		res = res%mod;
	}
	cout<<res%mod<<endl;


	return 0;
}