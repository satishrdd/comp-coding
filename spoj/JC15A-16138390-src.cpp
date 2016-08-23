#include <fstream>
#include <iostream>
#include <string>
#include <complex>
#include <math.h>
#include <set>
#include <vector>
#include <map>
#include <queue>
#include <stdio.h>
#include <stack>
#include <algorithm>
#include <list>
#include <ctime>
#include <memory.h>
#include <ctime>
#include <assert.h>
#include <stack>
//#include <cstdint>
#include <bitset>

using namespace std;

//typedef int_fast64_t Li;
//typedef int_fast32_t ll;
//typedef int_fast8_t ii;
typedef long long LL;
typedef long l;
//typedef makepair mpr;

//#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
//#define mpr(x,y) make_pair(x,y);

//const ll arrsz=2*10e9+1;
//ll minleft=10e9+1;
//ll maxright=-10e9-1;

int main(int argc, char const *argv[]) {
  //fast;
  int TP,CP,CBS,WS;
  char WD;
  cin>>CP>>TP>>CBS>>WS>>WD;
  int direction = TP-CP;
  int EQ_speed;
  int time_t;
  double zero = 0.000000;
  std::string imp = "Impossible";
  if(direction > 0 && WD == 'R')
  {
    EQ_speed = CBS+WS;
    printf("%.6f",(double)direction/EQ_speed);
  }
  else if(direction > 0 && WD == 'L')
  {
    EQ_speed = CBS-WS;
    if(EQ_speed<0) std::cout << imp << std::endl;
    else{
      printf("%.6f",(double)direction/EQ_speed);
    }
  }
  else if(direction<0 && WD == 'R')
  {
    EQ_speed = CBS-WS;
    if(EQ_speed<0) std::cout << imp << std::endl;
    else{
      printf("%.6f",abs((double)direction/EQ_speed));
    }
  }
  else
  {
    EQ_speed = CBS+WS;
    printf("%.6f",abs((double)direction/EQ_speed));
  }
  return 0;
}
