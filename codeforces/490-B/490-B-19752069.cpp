#include <iostream> 
#include <stdio.h>
using namespace std; 

int p1[1000001],p2[1000001];
int main()
{
    int n,i,j,a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        p2[a]=b;
        ++p1[a];--p1[b];
    }
    
    i=0;
    while(p1[++i]!=1);
    
    j=p2[0];
    while(j&&i)
    {
        printf("%d %d ",i,j);
        i=p2[i];j=p2[j];
    }
    
    if(i)printf("%d",i);
    
}