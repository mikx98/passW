#include <cstdio>

#define LL long long

using namespace std;

LL a, b;

void getValues() {
  FILE * f;
  f = fopen(".conf", "r");

  fscanf(f, "%lld %lld", &a, &b);

  fclose(f);
}

int main() {

  LL seed; scanf("%lld", &seed);

  getValues();

  printf("%lld\n", a+(seed % (b-a)));

	return 0;

} 
