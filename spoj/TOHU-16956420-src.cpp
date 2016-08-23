#include<iostream>
#include<algorithm>
#include<map>
#include <iomanip>
using namespace std;
#include <sstream>

template <typename T>
  string NumberToString ( T Number )
  {
     ostringstream ss;
     ss << Number;
     return ss.str();
  }

int main(int argc, char const *argv[])
{
	/* code */
	long long t;
	double n,sum=0;
	cin>>t;
	 std::cout << std::fixed;
    std::cout << std::setprecision(11);
	while(t--){
		cin>>n;
		sum = (double)3/(double)4  - ((double)1/((double)2*(n+1)*(n+2)));
		
		cout<<sum<<endl;
	}
	return 0;	
}