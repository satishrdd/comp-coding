#include<stdio.h>

int main(){


int n,m,a=0,i;
scanf("%d%d",&n,&m);
int ar[n];
for(i=0;i<m;i++){
  scanf("%d",&ar[i]);
if(ar[i]!=0)
a++;
}
for(i=m;i<n;i++){
scanf("%d",&ar[i]);
if(ar[i]>=ar[m-1]&&ar[i]!=0)
a++;
}
printf("%d\n",a);
return 0;
}