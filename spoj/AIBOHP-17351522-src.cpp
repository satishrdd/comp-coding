#include<iostream>
#include<cstring>

using namespace std;

int lcs_length(const char * A, const char * B)
    {
      int m = strlen(A);
      int n = strlen(B);
  int L[m+1][n+1];
  for(int i=0;i<=m;i++){
    for(int j=0;j<=n;j++){
      L[i][j] = 0;
    }
  }
  for (int i = m; i >= 0; i--)
      for (int j = n; j >= 0; j--)
      {
    if (A[i] == '\0' || B[j] == '\0') L[i][j] = 0;
    else if (A[i] == B[j]) L[i][j] = 1 + L[i+1][j+1];
    else L[i][j] = max(L[i+1][j], L[i][j+1]);
      }
  return L[0][0];
    }


int main(int argc, char const *argv[])
{
  /* code */
  int cases;
  int dp[2][6001];
  cin>>cases;
  while(cases--){
    string s;
    cin>>s;
    memset(dp,0,sizeof(dp));
        int L = s.length();
        for(int i = L-1;i >= 0;--i){
            int r = i & 1;
            
            for(int j = 0;j < L;++j){
                dp[r][L-1-j] = max(dp[r][L-j],dp[r ^ 1][L-1-j]);
                if(s[i] == s[j]) dp[r][L-1-j] = max(dp[r][L-1-j],1+dp[r ^ 1][L-j]);
            }
        }


cout<<s.length()-dp[0][0]<<endl;

  }
  return 0;
}