#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int i,n;
        long sum=0,x,y,z;
    
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        
       x = ((long)a[i]/3)*3;
        y = ((long)a[i]/5)*5;
        z = ((long)a[i]/15)*15;
        sum = (long)x*(x+3)/6 + y*(y+5)/10 - z*(z+15)/30;
        if(a[i]%3==0|a[i]%5==0)
            sum = sum - a[i];
    printf("%ld\n",sum);
    sum =0;}
	return 0;
}
