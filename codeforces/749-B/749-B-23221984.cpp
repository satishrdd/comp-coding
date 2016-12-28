#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(int argc, char const *argv[])
{
	/* code */
	int a1,b1,a2,b2,a3,b3;
	cin>>a1>>b1>>a2>>b2>>a3>>b3;
	set<pair<int,int>> s;
	s.insert({(a1+a2-a3),(b1+b2-b3)});
	s.insert({(a3+a2-a1),(b3+b2-b1)});
	s.insert({(a1+a3-a2),(b1+b3-b2)});
	cout<<s.size()<<endl;
	std::set<pair<int,int>>::iterator it;
for (it = s.begin(); it != s.end(); ++it)
{
    pair<int,int> f = *it; // Note the "*" here
    cout<<f.first<<" "<<f.second<<endl;
}
	return 0;
}