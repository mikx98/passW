#include <cstdio>
#include <iostream>
#include <string>

#define LL long long

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
