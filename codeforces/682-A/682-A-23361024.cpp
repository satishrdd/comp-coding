#include<iostream>
#include<bits/stdc++.h>

using namespace std;






int main(int argc, char const *argv[])
{
	/* code */
	long long n,m;
	cin>>n>>m;
	long long ar[5] ;
	for(int i=0;i<5;i++){
		ar[i] = n/5;
	}
	for(int i=0;i<n%5;i++){
		ar[i+1]++;
	}
	int br[5];
	for(int i=0;i<5;i++){
		br[i] = m/5;
	}
	for(int i=0;i<m%5;i++){
		br[i+1]++;
	}
	cout<<ar[0]*br[0] + ar[1]*br[4] + ar[4]*br[1] + ar[2]*br[3] + ar[3]*br[2]<<endl;
	return 0;
}

//8 4 2 6 8


///x y y-x -x -y x-y