#include<bits/stdc++.h>
 
#define LL long long 
#define sn(n) scanf("%d",&n) ;
#define all(n) n.begin() , n.end()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define INF 0x7fffffff
#define fast_io ios::sync_with_stdio(0) ; cin.tie(0) ; 
#define in() freopen("input.txt" , "r" , stdin) ;
#define out() freopen("output.txt" , "w" , stdout) ;
#define MOD 1000000007
#define debug() cout << "HI" << endl ;
 
using namespace std ;

int n, t;
int BLOCK_SIZE ;
pair<pair<int, int >, int >queries[200005] ;
LL ans[200005] ;
int cnt[1000005] ;
int arr[1000005] ;
int LEFT, RIGHT ;
LL current_ans ;

inline bool cmp(const pair<pair<int, int >, int > &x, const pair<pair<int, int >, int > &y)
{
    if(x.fi.fi/BLOCK_SIZE != y.fi.fi/BLOCK_SIZE)
        return x.fi.fi < y.fi.fi ; 
    return x.fi.se < y.fi.se ;
}

void add(LL val)
{
    current_ans -= val*cnt[val]*cnt[val] ;
    cnt[val] += 1 ;
    current_ans += val*cnt[val]*cnt[val] ;
}

void sub(LL val)
{
    current_ans -= val*cnt[val]*cnt[val] ;
    cnt[val] -= 1 ;
    current_ans += val*cnt[val]*cnt[val] ;
}

int main()
{
    
    fast_io ;
    scanf("%d %d", &n, &t) ;
    // queries.resize(n) ;
    BLOCK_SIZE = sqrt(n) ;
    for(int i = 0; i < n; ++i)
        scanf("%d", &arr[i]) ;
    for(int i = 0; i < t; ++i)
    {
        scanf("%d %d",&queries[i].fi.fi, &queries[i].fi.se) ;
        queries[i].fi.fi -= 1 ;
        queries[i].fi.se -= 1 ;
        queries[i].se = i ;
    }
    sort(queries, queries + t, cmp) ;
    LEFT = 0 ;
    RIGHT = -1 ;
    for(int i = 0; i < t; ++i)
    {
        int l = queries[i].fi.fi;
        int r = queries[i].fi.se ;
        int idx = queries[i].se ;
        while(RIGHT < r)
        {
            ++RIGHT ;
            add(1LL*arr[RIGHT]) ;
        }
        while(RIGHT > r)
        {
            sub(1LL*arr[RIGHT]) ;
            --RIGHT ;
        }
        while(LEFT < l)
        {
            sub(1LL*arr[LEFT]) ;
            ++LEFT ;
        }
        while(LEFT > l)
        {
            --LEFT ;
            add(1LL*arr[LEFT]) ;
        }
        ans[idx] = current_ans ;
    }
    for(int i = 0; i < t; ++i)
         cout << ans[i] << "\n" ;
       // printf("%I64d\n", ans[i]);

    return 0 ;
}