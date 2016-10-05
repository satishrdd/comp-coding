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


void extended_euclid(int a,int b){
	if(b==0){
		d=a;
		x=1;
		y=0;
	}else{
		extended_euclid(b,a%b);
		int temp =x;
		x=y;
		y= temp - (a/b)*y;
	}
}



int p[1001]={0};
void prefix(string original){					//prefix array for kmp
	int n = original.length();					
	p[1]=0;
	int a=0;
	for(int b=2;b<=n;b++){
		while(a>0 && original[a]!=original[b-1]){
			a=p[a];
		}
		if(original[a]==original[b-1]){
			a++;
		}
		p[b]=a;

	}
}


int modpoweriter(int a,int b,int c){			//exponential modulus
	int ans=1;
	while(b!=0){
		if(b%2==1){
			ans = (ans*a)%c;
		}
		a=(a*a)%c;
		b = b/2;
	}
	return ans;
}



bool find(int a,int b){
	if(arr[a]==arr[b]){							//find operation
		return true;
	}else{
		return false;
	}
}

void union(int n,int a,int b){
	int temp = arr[a];
	for(int i=0;i<n;i++){					//union operation
		if(arr[i]==temp){
			arr[i] = arr[b];
		}
	}
}

bool ispoweroftwo(int x){						//is the number a power of two
	return (x && !(x&(x-1)));
}

int count_one(int n){
	int count=0;								//count of no of set bits
	while(n){
		n = n&(n-1);
		count++;
	}
	return count;
}


bool isithbitone(int n,int i){			//check if ith bit is one
	if(n&(1<<i)){
		return true;
	}else{
		return false;
	}
}


void possiblesubsets(int n){		//all possible subsets of a set a
	for(int i=0;i<(1<<n);i++){
		for(int j=0;j<n;j++){
			if(i&(1<<j)){
				cout<<a[j]<<" ";
			}
		}
		cout<<endl;
	}
}

int lp2ln(int n){			//largest power of two less than or equal n
	n=n|(n>>1);
	n=n|(n>>2);
	n=n|(n>>4);
	n=n|(n>>8);

	return (n+1)>>1;
}



void maxheapify(int i,int n){
	int left = 2*i;
	int right = 2*i+1;

	if(left<=n and arr[left] > arr[i]){
		largest =left;
	}else{
		largest =i;
	}

	if(right<=n and arr[right] > arr[largest]){
		largest  =right;
	}

	if(largest !=i){
		swap(arr[i],arr[largest]);
		maxheapify(largest,n);
	}
}

void minheapify(int i,int n){
	int left = 2*i;
	int right = 2*i+1;

	if(left<=n and arr[left] < arr[i]){
		smallest =left;
	}else{
		smallest =i;
	}

	if(right<=n and arr[right] < arr[largest]){
		smallest  =right;
	}

	if(smallest !=i){
		swap(arr[i],arr[smallest]);
		maxheapify(smallest,n);
	}
}


void build_heap(){
	for(int i=n/2;i>=1;i--){
		maxheapify(i,n);//for maxheap
		minheapify(i,n);//for minheap
	}
}



void kmp(string pattern,string original){
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


void generate(ll s,int n){				//lucky number generation of size n where lucky is a set
	if(n==0){
		lucky.insert(s);
		return;
	}
	generate(s*10+4,n-1);
	generate(s*10+7,n-1);
}




int main(int argc, char const *argv[])
{
	/* code */
	kmp("afs","cocacola");
	return 0;
}