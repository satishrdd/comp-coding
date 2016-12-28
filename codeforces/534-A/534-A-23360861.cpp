#include<iostream>
#include<bits/stdc++.h>

using namespace std;






int main(int argc, char const *argv[])
{
	/* code */
	long long n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++){
		ar[i] = i+1;
	}
	//cout<<"fsg";
	if(n==1){
		cout<<n<<endl<<ar[0]<<endl;
	}else if(n==2){
		cout<<1<<endl<<ar[0]<<endl;
	}else if(n==3){
		cout<<2<<endl<<ar[0]<<" "<<ar[2]<<endl;
	}else if(n==4){
		cout<<n<<endl<<"3 1 4 2"<<endl;
	}else{
		cout<<n<<endl;
		for(int i=0;i<n;i=i+2){
			cout<<ar[i]<<" ";
		}
		for(int i=1;i<n;i=i+2){
			cout<<ar[i]<<" ";
		}
		cout<<endl;
			
	}
	return 0;
}

//8 4 2 6 8


///x y y-x -x -y x-y