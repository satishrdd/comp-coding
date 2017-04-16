#include<bits/stdc++.h>


using namespace std;



int main(int argc, char const *argv[])
{
	/* code */
	int ar[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int month,day;
	cin>>month>>day;
	int temp = ar[month-1];
	temp = temp - (8-day);
	if(temp%7==0)
	cout<<temp/7 +1<<endl;
	else{
		cout<<(temp/7)+2<<endl;
	}
	return 0;
}