#include<iostream>
#include<stdio.h>

using namespace std;

int main(){


int n,m,a;
scanf("%d",&n);
scanf("%d",&m);
scanf("%d",&a);
long long x = n/a;
 if (n % a) 
 x++;
 long long y = m/a ;
 if (m % a) 
 y++;

cout<<x*y<<endl;
return 0;
}