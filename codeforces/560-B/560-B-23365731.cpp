#include<iostream>
#include<bits/stdc++.h>

using namespace std;






int main(int argc, char const *argv[])
{
	/* code */
	long long a,b,a1,b1,a2,b2;
	cin>>a>>b>>a1>>b1>>a2>>b2;
	bool cond  = false;
	bool cond1 = max(a1,a2)<=a && b1+b2<=b;
	cond  = cond or cond1;
	 cond1 =  max(a1,b2)<=a && a2+b1<=b;
	cond  = cond or cond1;
	 cond1 = max(a2,b1)<=a && a1+b2<=b;
	cond  = cond or cond1;
	 cond1 = max(b1,b2)<=a && a2+a1<=b;
	cond  = cond or cond1;
	 cond1 = max(a1,a2)<=b && b1+b2<=a;
	cond  = cond or cond1;
	 cond1 =  max(a1,b2)<=b && a2+b1<=a;
	cond  = cond or cond1;
	 cond1 = max(a2,b1)<=b && a1+b2<=a;
	cond  = cond or cond1;
	 cond1 = max(b1,b2)<=b && a2+a1<=a;
	cond  = cond or cond1;
	if(cond){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	return 0;
}

//8 4 2 6 8


///x y y-x -x -y x-y