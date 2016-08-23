#include<stdio.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long unsigned int r=0,R=0,x,y;
		int n,i,j,k;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lld%lld",&x,&y);
			if(x>r)
			{
				k = i+1;
				r = x;
			}
			else if(y>R)
				R=y;
		}
		if(r>R)
			printf("%d\n",k);
		else
			printf("-1\n");
	}
	return 0;
}
