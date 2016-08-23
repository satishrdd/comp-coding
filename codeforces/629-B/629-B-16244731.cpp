#include "iostream"
#include<string.h>
#include<algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	char c;
	int a ,b;
	int male[n][2];
	int female[n][2];
	int index=0;
	int index1=0;

	long mcount=0;
	long fcount =0;

	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>c>>a>>b;
		if(c=='M'){
			male[index][0] = a;
			male[index][1] = b;
			index++;
		}else{
			female[index1][0] = a;
			female[index1][1] = b;
			index1++;
		}
	}
long ans=0;
	for(int i =1;i<=367;i++){
		ans = max(ans,2*min(mcount,fcount));

		mcount =0;
		fcount=0;
		for (int j = 0; j < index; ++j)
		{
			/* code */
			if(i>=male[j][0]&&i<=male[j][1]){
				mcount++;
			}

		}
		for (int j = 0; j < index1; ++j)
		{
			/* code */
			if(i>=female[j][0]&&i<=female[j][1]){
				fcount++;
			}

		}
	}
	cout<<ans<<endl;
	return 0;
}