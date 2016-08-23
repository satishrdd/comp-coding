#include<iostream>

#include<algorithm>


using namespace std;

int main(){
    int cases;
    long n,k;
    cin>>cases;
    while(cases--){
        cin>>n>>k;
        long ar[n];
        cin>>ar[0];
        long min;
        if(ar[0]>0){
            min = ar[0];
        }else{
            min = -1*ar[0];
        }
        for(long i=1;i<n;i++){
            cin>>ar[i];
            long temp;
            if(ar[i]>0)
            temp =ar[i];
            else
                temp  = -1*ar[i];
            if(temp<min){
                min = temp;
            }
        }
        sort(ar,ar+n);
        long pos=0;
        long long sum=0;
        for(long i=0;i<n;i++){
           if(k==0){
               break;
           }
            if(ar[i]<0){
                ar[i] = ar[i]*-1;
                
                k--;
            }else{
                
                break;
            }
        }
        if(k%2==0){
            for(long i=0;i<n;i++){
                sum = sum+ar[i];
            }
        }else{
            
             for(long i=0;i<n;i++){
                sum = sum+ar[i];
            }
            sum = sum + -(2*min);
        }
        cout<<sum<<endl;
        pos=0;
        sum=0;
    }
    return 0;
}