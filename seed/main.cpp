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

LL PRIME, MODULO;

  //--- vrati a^b mod MODULO
// LL power(LL a, LL b) {
//   LL ret = 1LL; LL moc = a;

//   for(LL i=0LL; ((LL)(1LL << i)) <= b; i++) {
//     if (b & ((LL)(1LL << i))) {
//       ret *= moc;
//       ret %= MODULO;
//     }

//     moc *= moc;
//     moc %= MODULO;
//   }

//   return ret;
// }

LL hashni(LL seed) {
  LL ret = 1LL;
  
  LL mocn = 1LL;
  while (seed > 0LL) {
    LL wh = seed % 10LL;
    seed /= 10LL;

    ret *= (wh * mocn) % MODULO;
    ret %= MODULO;

    mocn *= PRIME;
  }

  return ret;
}

int skusaj(int a, int b, LL sth) {
  For(i, a, b) 
    hashni(i) == sth && cout << i << endl;

  return 0;
}

void getValues() {

}

int main() {

  ios_base::sync_with_stdio(false);

  getValues();

  string s; cin >> s;

  s == "hash" && printf("%lld\n", hashni(seed));

  s == "find" && cin >> sth && skusaj(a, b, sth);

	return 0;

} 
