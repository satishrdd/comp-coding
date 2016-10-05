		/*****************************************************************************************/
/*																		     			 */
/*  					Satish Reddy Yerva										 			 */
/*																			 			 */
/*****************************************************************************************/
 
#include <bits/stdc++.h>
#include<bitset>
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
#define debug cout<<"hrllo"
 
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



#define maxstates 100001
#define maxchar 100

using namespace std;

bitset<1000> output[maxstates];
int failure[maxstates]={-1};
int gto[maxstates][maxchar]={-1};
int states;



string inputtext;
string s,fname;
vector<string> patt;
vector<int> pt[1000];
queue<int> myqueue;

void initialize(){
	memset(failure,-1,sizeof(failure));
	
	memset(gto,-1,sizeof(gto));
	states=1;
}


void readinput(){
	cout<<"Enter the file name\n";
	cin>>fname;
	ifstream infile(fname.c_str());
	inputtext.assign( (std::istreambuf_iterator<char>(infile) ),
                (std::istreambuf_iterator<char>()    ) );
	cout<<"Enter pattern file name\n";
	cin>>fname;
	ifstream pfile(fname.c_str());
	int n;												//read inputs from the file
	pfile>>n;
	fflush(stdin);
	
	getline(pfile,s);
	while(n--){
		getline(pfile,s);
	
		patt.push_back(s);
	}

}


void buildpatternmachinegoto(){
	for(int i=0;i<patt.size();i++){
		int currstate=0;
		for(int j=0;j<patt[i].length();j++){
			int x = patt[i][j] - ' ';
			if(gto[currstate][x]==-1){
				states+=1;
				gto[currstate][x] = states;						//transition function from a state to other state on reacivig a character
			}
			currstate = gto[currstate][x];
		}
		bitset <1000> temp;
		temp.set(1000-i-1);
		output[currstate] = output[currstate]|(temp);
		//pt[i].push_back({-1,-1});
	}
	for(int x=0;x<maxchar;x++){
		if(gto[0][x]==-1){
			gto[0][x]=0;
		}
	}
}


void buildfailurefunction(){
	for(int x=0;x<maxchar;x++){
		if(gto[0][x]!=0){
			failure[gto[0][x]] = 0;						//build failure function if match is failed at a point
			myqueue.push(gto[0][x]);
		}
	}
	while(myqueue.size()>0){
		int curr  = myqueue.front();
		myqueue.pop();
		for(int x=0;x<maxchar;x++){
			if(gto[curr][x]!=-1){
				int f = failure[curr];
				while(gto[f][x] == -1){
					f = failure[f];
				}
				f = gto[f][x];
				failure[gto[curr][x]] =  f;
				output[gto[curr][x]] = output[gto[curr][x]] | output[f];
				myqueue.push(gto[curr][x]);
			}
		}
	}
}




void ahocorsickrun(){
	int currstate =0;
	cout<<inputtext.length()<<endl;
	for(ll i=0;i<inputtext.length();i++){			//run aho corsick on text after failure function and goto is made
		//cout<<i<<endl;
		if(i==inputtext.length()-1){
			break;
		}
		int x= inputtext[i]-' ';
		while (gto[currstate][x] == -1)
			currstate = failure[currstate];
		currstate = gto[currstate][x];
		if(output[currstate]==0){
			continue;
		}
		for(int j=0;j<patt.size();j++){
			bitset<1000> temp;
			bitset<1000> temp1;

			temp.set(1000-j-1);
			temp = temp&output[currstate];
			if(temp!=temp1){
				if((i-patt[j].size()+1)<=i)
				//cout<<"pattern for "<<patt[j]<<" found at "<<i-patt[j].size()+1<<" "<<i<<endl;
				pt[j].push_back(i);					//if pattern found push it back to vector
			}
		}
		//debug;
	}
}


void printresults(){
	for(int i=0;i<patt.size();i++){				//print for each pattern results found or not found
		if(pt[i].size()==0){
			cout<<patt[i]<<" not found"<<endl;
		}else{
			cout<<"pattern for "<<patt[i]<<" found at "<<endl;
			//;//cout<<"pattern for "<<patt[i]<<"found at"<<pt[i][1].first<<" "<<pt[i][1].second<<endl;
			for(int j=0;j<pt[i].size();j++){
				cout<<pt[i][j] - patt[i].size()+1<<" "<<pt[i][j]<<endl; 
			}
		}
	}
}



 

int main(int argc, char const *argv[])
{
	/* code */
	initialize();
	readinput();						//functions to do each of them
	buildpatternmachinegoto();
	buildfailurefunction();
	ahocorsickrun();
	printresults();
	return 0;
}