#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>

using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    int n,temp;
    
    cin>>n;
vector<int> A(100,0);
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

sort(ar,ar+n);
    for(int j=0;j<n;j++){
        temp=ar[j];
        for(int i=0;i<100;i++){
            if(A[i]<=temp){
                A[i]++;
                break;
            }
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(A[i]>0){
            count++;
        }else{
            break;
        }
    }
    cout<<count<<endl;
    return 0;
}