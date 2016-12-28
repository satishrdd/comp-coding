/*****************************************************************************************/
/*                                                                                          */
/*                      Satish Reddy Yerva                                                      */
/*                                                                                          */
/*****************************************************************************************/
 
#include<iostream>
#include<cstring>
#include<stdio.h>
#include<cmath>



 
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
    int count=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='4'||s[i]=='7'){
            count++;
        }
    } 

    int flag =0;
    string c = to_string(count);
    for(int i=0;i<c.length();i++){
        if(c[i]=='4'||c[i]=='7'){
            ;
        }else{
            flag=1;
            break;
        }
    }

    if(flag==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}