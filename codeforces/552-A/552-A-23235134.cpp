#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(int argc, char const *argv[])
{
	/* code */
	int m[101][101];
	for(int i=0;i<=100;i++){
		for(int j=0;j<=100;j++){
			m[i][j]=0;
		}
	} 
	int n,x1,x2,y1,y2;
	cin>>n;
	while(n--){
		cin>>x1>>y1>>x2>>y2;
		for(int i=x1;i<=x2;i++){
			for(int j=y1;j<=y2;j++){
				m[i][j]+=1;
			}
		}
	}

	long long res=0;
	for(int i=0;i<=100;i++){
		for(int j=0;j<=100;j++){
			res+=m[i][j];
		}
	} 
	cout<<res<<endl;
	return 0;
}

//8 4 2 6 8