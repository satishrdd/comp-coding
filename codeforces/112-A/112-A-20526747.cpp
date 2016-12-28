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
    int flag=0;
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.length();i++){
        if((s1[i]>='a')&&(s1[i]<='z')){
            s1[i] = s1[i] - 'a';
        }else{
            s1[i] = s1[i] - 'A';
        }

        if((s2[i]>='a')&&(s2[i]<='z')){
            s2[i] = s2[i] - 'a';
        }else{
            s2[i] = s2[i] - 'A';
        }

        if(s1[i]==s2[i]){
            ;
        }else if(s1[i]>s2[i]){
            flag=1;
            break;
        }else{
            flag=-1;
            break;
        }
    }

    cout<<flag<<endl;
    


    return 0;
}