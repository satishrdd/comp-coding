#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	int temp;
	set<int> s;
	for(int i=0;i<n;i++){
		cin>>temp;
		if(temp<=n)
		s.insert(temp);
	}
	cout<<n-s.size()<<endl;

	return 0;
}