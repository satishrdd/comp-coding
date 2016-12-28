#include<iostream>
#include<bits/stdc++.h>

using namespace std;






int main(int argc, char const *argv[])
{
	/* code */
	long long n,a,count=0;
	cin>>n>>a;
	long long ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	a--;
	for(int i=0;i<n;i++){
		if(a-i<0 || a+i >=n){
			if(a-i<0){
				for(int j=a+i;j<n;j++){
					count+=ar[j];
				}
			}else if(a+i>=n){
				for(int j=0;j<=a-i;j++){
					count+=ar[j];
				}
			}
			break;
		}else{
			if(ar[a-i]==1 && ar[a+i]==1){
				if(a-i==a+i)
					count++;
				else{
					count+=2;
				}
			}
		}
	}
	cout<<count<<endl;
	return 0;
}

//8 4 2 6 8


///x y y-x -x -y x-y