#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	
	// your code here
	int cases;
	int h,w;
	cin>>cases;
	while(cases--){
		cin>>h>>w;
		int ar[w],br[w],res[w];
		for(int i=0;i<w;i++){
			cin>>ar[i];
			res[i]= ar[i];
		}
		
		h--;
		while(h--){
			int temp1=0,temp2=0,temp3=0;
			for(int i=0;i<w;i++){
			cin>>ar[i];
			}
			for(int i=0;i<w;i++){
			if(i>0){
				temp1 = res[i-1];
			}
			temp2 = res[i];
			if(i<w-1){
				temp3 = res[i+1];
			}
			ar[i] = ar[i] + max(max(temp1,temp2),temp3);
			}
			for(int i=0;i<w;i++){
			res[i] = ar[i];
			}
			
		}
        int max = res[0];
        for(int i=1;i<w;i++){
            if(res[i]>max){
                max = res[i];
            }
        }
        cout<<max<<endl;
	}

	return 0;
}