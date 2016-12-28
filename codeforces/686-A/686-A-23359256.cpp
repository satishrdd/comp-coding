#include<iostream>
#include<bits/stdc++.h>

using namespace std;






int main(int argc, char const *argv[])
{
	/* code */
	long long n,x,temp,count=0;
	char c;
	cin>>n>>x;
	while(n--){
		cin>>c>>temp;
		if(c=='+'){
			x = x+temp;
		}else if(c=='-'){
			if(temp<=x){
				x =x-temp;
			}else{
				count++;
			}
		}
	}
	cout<<x<<" "<<count<<endl;
	return 0;
}

//8 4 2 6 8


///x y y-x -x -y x-y