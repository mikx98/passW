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

LL PRIME, MODULO, PRIME_2, MODULO_2;
LL a, b;

LL hashni(LL seed, LL PR, LL MOD) {
  LL ret = 1LL;
  
  LL mocn = PR;
  while (seed > 0LL) {
    LL wh = seed % 10LL;
    seed /= 10LL;

    ret += ((wh+1LL) * mocn) % MOD;
    ret %= MOD;

    mocn *= PR;
    mocn %= MOD;
  }

  return ret;
}

int skusaj(LL a, LL b, LL sth, LL sth2) {
  for (LL i = a; i < b ; ++i)
    hashni(i, PRIME, MODULO) == sth && 
      hashni(i, PRIME_2, MODULO_2) == sth2 && cout << i << endl;

  return 0;
}

void getValues() {
  FILE * f;
  f = fopen(".conf", "r");

  fscanf(f, "%lld %lld %lld %lld %lld %lld", &a, &b, &PRIME, &MODULO, &PRIME_2, &MODULO_2);

  fclose(f);
}

int main() {

  ios_base::sync_with_stdio(false);

  getValues();

  string s; LL sth, sth2; cin >> s >> sth;

  s == "hash" && printf("%lld\n%lld\n", hashni(sth, PRIME, MODULO), hashni(sth, PRIME_2, MODULO_2));

  s == "find" && cin >> sth2 && skusaj(a, b, sth, sth2);

	return 0;

} 
