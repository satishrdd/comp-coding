#include <iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

int main() {
	
	// your code here
	double a,b,c,d;
	int cases;
	cin>>cases;
	while(cases--){
	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
		double s = (a+b+c+d)/2;
		double k = (s-a)*(s-b)*(s-c)*(s-d);
		printf("%.2lf\n",sqrt(k));
	}

	return 0;
}