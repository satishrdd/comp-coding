#include<iostream>



using namespace std;


int main(int argc, char const *argv[])
{
	/* code */
	long n;
	cin>>n;
	long b[n+1];
	long a[n+1];

	for(int i=1;i<n+1;i++){
		cin>>b[i];

	}
	a[n]=b[n];
	for(long i=n-1;i>0;i--){
		a[i] = b[i] + b[i+1];
	}

	for(long i=1;i<=n;i++){
		cout<<a[i]<<" ";

	}
	cout<<endl;
	return 0;
}