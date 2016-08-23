#include <iostream>
#include<cstring>
#include<string.h>
using namespace std;

main()
{
	/* code */

	int a,b=0,c,count=0,i;
	string s;
	while(true){
		cin>>a;
		int ar[a];
		if(a==-1)
			break;
		for(i=0;i<a;i++){
			cin>>c;
			ar[i] = c; 
			b = b +c; 
		}
		if(b%a==0){
			for(i=0;i<a;i++){
				if((b/a)>ar[i])
					count = count+b/a-ar[i];
			}
			
		cout<<count<<endl;
	

		}else
			cout<<"-1"<<endl;

		count=0;
		a=0;
		b=0;
		c=0;
	}

}
