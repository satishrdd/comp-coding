		/*****************************************************************************************/
/*																		     			 */
/*  					Satish Reddy Yerva										 			 */
/*																			 			 */
/*****************************************************************************************/
 
#include <bits/stdc++.h>

/* Data types and structures. */
#define ll long long int
#define llu long long int unsigned
#define vi vector <int>
#define vl vector <ll> 
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vpii vector <pii >
#define vpll vector <pll >
 
/* Data structure helpers. */ 
#define f first
#define s second
#define pb push_back
#define pob pop_back
#define mp make_pair
#define sz(n) (int)n.size()-1
#define all(n) n.begin(), n.end()
#define has(it,s) if(it!=s.end())
 
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
#define rep(i,j,k) for(int i=j; i<=k; i++)
#define repd(i,j,k) for(int i=j; i>=k; i--)
#define iter(it, s) for(auto it=s.begin(); it!=s.end(); it++)

/* constraints. */ 
#define max_size 100005
#define max_sieve_size 1000005
#define max_matrix_size 100
#define max_log 17
#define INF 1000000000000000000
#define MOD 1000000007
#define EPS 0.0000000001
#define GCD_EPS 0.0001
#define PI 3.14159265358979323846
#define mod(a) ((a)%MOD)
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)

ll ciel(double a) { ll ret = a; if(a-ret>EPS) ret++; return ret; }
ll gcd(ll a, ll b) { if(a<b)return gcd(b, a); if(a%b==0)return b; return gcd(b, a%b); }
ll lcm(ll a, ll b) { return (a * (b / gcd(a, b))); } // divide before multiply!
/* This method does modular exponentiation in log(n). */
ll pow(ll n, ll p) {if(p==0)return 1; if(n<=1)return n;ll res = 1;while(p){if(p&1) res = mod(res*n);n = mod(n*n);p /= 2;} return res;}

double fgcd(double a, double b) { if(fabs(a)<fabs(b)) return fgcd(b, a); if(fabs(b)<GCD_EPS) return a; return fgcd(b, fmod(a,b)); }

 
using namespace std;
int p[1001]={0};
void prefix(string s){					//prefix array for kmp
	int n = s.length();					
	p[1]=0;
	int a=0;
	for(int b=2;b<=n;b++){
		while(a>0 && s[a]!=s[b-1]){
			a=p[a];
		}
		if(s[a]==s[b-1]){
			a++;
		}
		p[b]=a;

	}
}
int flag=0;

void kmpmatch(string pattern,string original){
	prefix(pattern);
	int index=0;
	int match=0;
	while(index+match < original.length()){
		if(original[match+index] == pattern[match]){
			match++;											
			if(match==pattern.length()){
				if(flag==0){								//if pattern is matched print you found the pattern
					cout<<"Pattern found at indices\n";
				}
				cout<<index<<" "<<index+pattern.length()<<endl;
				flag=1;
			}
		}else{
			if(match==0){
				index++;
			}else{
				index = index+match - p[match];
				match = p[match];
			}
		}
	}
}


int main(int argc, char const *argv[])
{
	/* code */
	string orig,fname,patt;
	cout<<"Enter the input text file name\n";
	cin>>fname;
	ifstream infile(fname.c_str());
	orig.assign( (std::istreambuf_iterator<char>(infile) ),
                (std::istreambuf_iterator<char>()    ) );			//take entire input file as a string
	
	fflush(stdin);
	getchar();
	cout<<"Enter the pattern\n";
	getline(cin,patt);
	kmpmatch(patt,orig);
	if(flag==0){													//if flag==0 means pattern is not found
		cout<<"Pattern not found"<<endl;
	}
	return 0;
}