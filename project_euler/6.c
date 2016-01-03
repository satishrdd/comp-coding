#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int i,n;
    scanf("%d",&n);
    long a[n];
    
    for(i=0;i<n;i++){
        scanf("%ld",&a[i]);
    }
    
    unsigned long long sums,ssum;
    for(i=0;i<n;i++){
        sums = (unsigned long long)(a[i]*(a[i]+1)*(2*(a[i])+1))/6;
        ssum = (unsigned long long)(a[i]*a[i]*(a[i]+1)*(a[i]+1))/4;
        printf("%lld\n",ssum-sums);
    }
    
    
    return 0;
}
