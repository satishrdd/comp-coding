#include <iostream>
using namespace std;
int min(int a,int b){
    if(a<b){
        return a;
    }else
    return b;
}
 
int main() {
	// your code goes here
	string s1,s2;
	int ar[26],br[26];
	int cases;
	cin>>cases;
	while(cases--){
	    cin>>s1;
	    cin>>s2;
	    int count1 =0;
	    int count2=0,count3=0;
	   for(int i =0;i<26;i++){
	       ar[i]=0;
	       br[i]=0;
	   }
	    for(int i =0;i<s1.length();i++){
	        if(s1[i]==s2[i]){
	            count1++;
	            s1[i] = 0;
	            s2[i] = 0;
	        }
	    }
	   for(int i=0;i<s1.length();i++){
	       if(s1[i]!=0)ar[s1[i]-97]++;
	       if(s2[i]!=0)br[s2[i]-97]++;
	   }
	    int val=0;
	   for(int i =0;i<26;i++){
	      val = val + min(ar[i],br[i]);
	      ar[i] = ar[i]-min(ar[i],br[i]);
	      br[i] = br[i] - min(ar[i],br[i]);
	   }
	     count2 = val ;
	    cout<<count1<<"N"<<count2<<"J"<<s1.length()-count1-count2<<"S"<<endl;
	}
	return 0;
}
