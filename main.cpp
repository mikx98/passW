#include <iostream>
#include <vector>
#include <sstream>
#include <cstdio>
#include <string>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <functional>
#include <deque>
#include <cmath>
#include <stack>
#include <ctime>
#include <cstring>
#include <complex>
#include <iomanip>

#define FOR(i, n) for(int i=0;i<(n);i++)
#define For(i, a, n) for(int i=(a);i<(n);i++)
#define DFOR(i, n) for(int i=((n)-1);i>=0;i--)
#define DFor(i, n, a) for(int i=((n)-1);i>=(a);i--)
#define itFOR(it, S) for(auto it=S.begin();it!=S.end();++it)
#define range(x) x.begin(), x.end()
#define cc continue
#define LL long long
#define MKP make_pair
#define PII pair<int, int>
#define PLL pair<LL, LL>
#define VPLL vector<PLL>
#define VI vector<int>
#define VVI vector< VI >
#define VPII vector< PII >
#define VL vector<LL>
#define VVL vector<VL>
#define VB vector<bool>
#define VVB vector< VB >
#define VS vector<string>
#define VVS vector< VS >
#define pb push_back
#define CX complex<LD>
#define CL complex<LL>
#define LD long double
#define INFIN 2000000000000000047LL
#define INTFIN 2000000047

using namespace std;


int main() {

	LL seed; scanf("%lld", &seed);
  
  srand(seed);

  FOR(i, (10 + rand() % 3)) {
    int wh = rand() % 3;

    wh == 0 && printf("%c", (char) ('a' + (rand() % 26)));
    wh == 1 && printf("%c", (char) ('A' + (rand() % 26)));
    wh == 2 && printf("%d", 0 + (rand() % 10));
  }

  printf("\n");

	return 0;

} 
