#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<cmath>
#include<climits>
 
using namespace std;
 
 
int main(int argc, char const *argv[])
{
	/* code */
	int cases;
	long long n,count=0;
	scanf("%d\n",&cases);
	while(cases--){
		scanf("%lld\n",&n);
	string a[n+1];
	string s;
	for(long long i=0;i<n;i++){
		getline(cin,a[i]);
	}
	sort(a,a+n+1);
	for(long long i=1;i<n+1;i++){
		cout<<a[i];
		while(i!=n&&a[i+1]==a[i]){
			i++;
			count++;
		}
		cout<<" "<<count+1<<endl;
		count=0;
	}
	cout<<endl;
 
}
	return 0;
}
