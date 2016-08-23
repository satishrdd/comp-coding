#include "iostream"
#include<string.h>

using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	
	string str[n];
	int a[n],b[n];
	memset(a,0,n);
	memset(b,0,n);
	for(int i =0 ;i<n;i++){
		a[i] = 0;
		b[i] = 0;
	}
	for(int i=0;i<n;i++){
		cin>>str[i];
		for(int j=0;j<n;j++){
			//cin>>[i][j];
			if(str[i][j]=='C'){
				a[i]++;
				b[j]++;
			}
		}
	}
long val =0;
	for(int i=0;i<n;i++){
		val = val + (a[i])*(a[i]-1)/2 + (b[i])*(b[i]-1)/2;
	}
cout<<val<<endl;
	return 0;
}