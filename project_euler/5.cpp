#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;


int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a%b);
}
int lcm(int a[], int n) {
  int res = 1, i;
  for (i = 0; i < n; i++) {
    res = res*a[i]/gcd(res, a[i]);
  }
  return res;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,i,cases,j,res;
  cin>>cases;
    for(i=0;i<cases;i++){
     cin>>n;
        int a[n];
        for(j=0;j<n;j++){
            a[j] = j+1;
        }
        res = lcm(a,n);
        printf("%d\n",res);
    }
    return 0;
}
