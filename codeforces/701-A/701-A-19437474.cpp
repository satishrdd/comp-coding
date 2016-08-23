#include<iostream>


using namespace std;


int main(int argc, char const *argv[])
{
  /* code */
  int n;
  cin>>n;
  int m = n/2;
  int ar[n],visited[n];
  int sum=0;
  for(int i=0;i<n;i++){
    cin>>ar[i];
    sum = sum+ar[i];
    visited[i]=0;
  }
  int val = sum/m;
  int i=0;
  while(m>0){
    if(visited[i]==0)
    for(int j=i+1;j<n;j++){
      if((visited[j]==0)&&ar[j]==(val-ar[i])){
        cout<<i+1<<" "<<j+1<<endl;
        visited[i]=1;
        visited[j]=1;
        m--;
        break;
      }
    }
    i++;
  }

  return 0;
}