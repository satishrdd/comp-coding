#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(int argc, char const *argv[])
{
	/* code */
	long long r,x1,y1,x2,y2;
	cin>>r>>x1>>y1>>x2>>y2;
	double dist = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
	cout<<ceil(dist/(double)(2*r));
	return 0;
}

//8 4 2 6 8