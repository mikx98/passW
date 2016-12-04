#include <cstdio>
#include <cstdlib>

#define FOR(i, n) for(int i=0;i<(n);i++)
#define LL long long

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
