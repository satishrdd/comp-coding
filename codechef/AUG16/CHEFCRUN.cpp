#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#include<stack>
#define mod 1000003
using namespace std;
stack<int> mystack;
 #define fast_io ios_base::sync_with_stdio(0);cin.tie(0)
 
long long maxSubArraySum(vector<long long> a, long long size)
{
    long long max_so_far = 0, max_ending_here = 0;
 
    for (long long i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_ending_here < 0)
            max_ending_here = 0;
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
    }
    return max_so_far;
}
 
int main(){
    fast_io;
    long cases;
    cin>>cases;
   long long n,start,end;
    while(cases--){
        cin>>n;
        long long a[n];
        long long sum=0,sum1=0;
        vector<long long> left;
        vector<long long> right;
        for(long long i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        long long start,end;
        cin>>start>>end;
        for(long long i=start-1;;i=(i+1)%n){
            if(i==end-1){
                break;
            }
            
            sum1 = sum1+a[i];
            left.push_back(a[i]);
        }
        
         for(long long i=end-1;;i=(i+1)%n){
              if(i==start-1){
                break;
            }
           
            right.push_back(a[i]);
        }
        long long leftsub = maxSubArraySum(left,left.size());
         long long rightsub = maxSubArraySum(right,right.size());
        sum = sum-sum1;
        cout<<min(2*(sum1-leftsub)+sum,sum1+2*(sum-rightsub))<<endl;
            
    }
    return 0;
}

