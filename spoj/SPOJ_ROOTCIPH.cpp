    #include<stdio.h>
    int main()
        {
    		int t;
    		long long a,b,c;
    		scanf("%d",&t);
    		while(t>0)
    		{
    			scanf("%lld%lld%lld",&a,&b,&c);
    			printf("%lld\n",a*a - 2*b);
    			t--;
     
    		}
        } 