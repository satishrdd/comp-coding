#include <iostream>
#include <queue>
#include <vector>
#include <set>
#include <stack>
#include <string.h>
#include <stdio.h>
#include <algorithm>
#include <stdlib.h>
#include <cassert>
#include <math.h>
 
using namespace std;
 
long sum(int n){
	long sum =0;
	for (int i = 1; i <= n; ++i)
	{
		/* code */
		sum+= i;
	}
	return sum;
}
 
 
int main(int argc, char const *argv[])
{
	/* code */
	int cases;
	cin>>cases;
	int a ,b;
	while(cases--){
		cin>>a>>b;
		long val = sum(b);
		for (int i = 1; i < a; ++i)
		{
			/* code */
			val = sum(val);
		}
		cout<<val<<endl;
			}
	return 0;
} 
