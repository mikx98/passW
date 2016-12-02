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

int a, b;

void getValues() {
  FILE * f;
  f = fopen(".conf", "r");

  LL waste;
  fscanf(f, "%lld %lld %d %d", &waste, &waste, &a, &b);

  fclose(f);
}

int main() {

  LL seed; scanf("%lld", &seed);

  getValues();

  printf("%d\n", a+(seed % (b-a)));

	return 0;

} 
