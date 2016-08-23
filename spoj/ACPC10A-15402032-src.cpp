#include <iostream>
using namespace std;

main()
{
	/* code */

	int a,b,c;
	while(true){
		cin>>a>>b>>c;
		if(a==0&&b==0&&c==0)
			break;
		else if(b-a==c-b&&b-a!=0)
			cout<<"AP "<<2*c-b<<endl;		
		else
			cout<<"GP "<<c*c/b<<endl;
	}

}
