    #include "iostream"
    #include <cstring>
    #include <algorithm>
    #include<stdio.h>
     
    using namespace std;
     
     
     
    int main()
    {
        int t;
        scanf("%d",&t);
        while(t--)
        {
            int g,mg;
            scanf("%d%d",&g,&mg);
            int i,god[g],mech[mg];
            for(i=0;i<g;i++)
                scanf("%d",&god[i]);
            for(i=0;i<mg;i++)
                 scanf("%d",&mech[i]);
            sort(god,god+g);
            sort(mech,mech+mg);
            if(god[g-1]>=mech[mg-1])
                printf("Godzilla\n");
            else
                printf("MechaGodzilla\n");
        }
    }
     
    /*
    int max(int a,int b){
    	if(b>a){
    		return b;
    	}else{
    		return a;
    	}
    }
     
    int main(int argc, char const *argv[])
    {
    	/* code 
    	int cases;
    	string s;
    	cin>>cases;
    	int temp=0,a,b;
    	while(cases--){
    		cin>>a>>b;
    		int ar1[a];
    		int ar2[b];
    		for (int i = 0; i < a; i++)
    		{
    			/* code 
    			cin>>ar1[i];
    		}
    		for (int i = 0; i < b; ++i)
    		{
    			/* code 
    			cin>>ar2[i];
    		}
    		int m = max(a,b);
     
    		int k;
     
    		for(int j=1;j<a;j++){
    			int key = ar1[j];
    			k =j-1;
    		while(k>=0 && ar1[k]>key){
    			ar1[k+1] = ar1[k];
    			k--;
    		}
    			ar1[k+1] = key;
    		}
     
    		for(int j=1;j<b;j++){
    			int key = ar2[j];
    			k =j-1;
    		while(k>=0 && ar2[k]>key){
    			ar2[k+1] = ar2[k];
    			k--;
    		}
    			ar2[k+1] = key;
    		}
     
     
    		int ia = 0;
    		int ib =0;
    		for (int i = 0; i < m; ++i)
    		{
    			/* code 
    			if(ar1[ia]<ar2[ib]){
    				ia++;
    			}else{
    				ib++;
    			}
     
    		}
     
    		if(ia< ib){
    			cout<<"Godzilla"<<endl;
    		}else{
    			cout<<"MechaGodzilla"<<endl;
    		}
     
     
    	}
    	return 0;
    }
     
    */ 