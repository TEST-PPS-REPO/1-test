#include <cstdio>
#include <cstdlib>
#include <cstring>
int* a[101010];
int main() {
  for (int i = 0; i < 101010; ++i) {
    a[i] = (int*)malloc(100000 * sizeof(int));
    a[i][0] = 1987654321;
    a[i][99999] = 1987654321;
  }
  int b, c, d;
  scanf("%d%d%d", &b, &c, &d);
  printf("%d%d%d", &b, &c, &d);
  return 0;
}