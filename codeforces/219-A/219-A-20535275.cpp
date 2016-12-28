/*****************************************************************************************/
/*                                                                                          */
/*                      Satish Reddy Yerva                                                      */
/*                                                                                          */
/*****************************************************************************************/
 
#include<iostream>
#include<cstring>
#include<stdio.h>
#include<cmath>
#include<vector>
#include<algorithm>



 
/* Input output defines. */
#define sd(n) scanf("%d", &n)
#define sl(n) scanf("%lld", &n)
#define slf(n) scanf("%lf", &n) 
#define pd(n) printf("%d", n);
#define pl(n) printf("%lld", n);
#define plf(n) printf("%0.9lf", n);
#define ps printf(" ")
#define pe printf("\n")

/* loops */


using namespace std;
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0)

using namespace std;





bool prime(long long n){
    
    return true;
}



int main() {

   int k;
   string s;
   cin>>k;
   cin>>s;
   int a[26]={0};
   if(s.length()%k!=0){
    cout<<-1<<endl;
    return 0;
   }
   for(int i=0;i<s.length();i++){
     a[s[i]-'a']++;
   }
   string temp="";
   for(int i=0;i<26;i++){
    if(a[i]%k!=0){
        cout<<-1<<endl;
        return 0;
    }
    if(a[i]>0){
        char c = 'a' +  i;
        string u="";
        for(int j=0;j<a[i]/k;j++){
            u +=c;
        }
        temp = temp + u;
    }
   }
   string res = "";
   for(int i=0;i<k;i++){
    res+=temp;
   }
   cout<<res<<endl;

    return 0;
}