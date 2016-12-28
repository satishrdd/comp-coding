/*
ID: satishr1
PROG: test
LANG: C++                  
*/



#include<bits/stdc++.h>

using namespace std;
bool func(int a1,int a2,int b1,int b2,int c1,int c2){
	if((b1-a1)*(c2-a2) - (b2-a2)*(c1-a1)>0){
		return true;
	}else {
		return false;
	}
}

int main(){
long n;
cin>>n;
int ac=0;
int ar[n+1][2];
for(int i=0;i<=n;i++){
	cin>>ar[i][0]>>ar[i][1];
	if(i>=2){
		if(func(ar[i-2][0],ar[i-2][1],ar[i-1][0],ar[i-1][1],ar[i][0],ar[i][1])){
			ac++;
		}
	}
}
cout<<ac<<endl;



return 0;
}