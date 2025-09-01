#include <stdio.h>

int main() {
  int a = 5; // 0101
  int b = 3; // 0011
  int c = 2; // 0010
  int d = 1; // 0001
  printf("a: %i\n", a);
  printf("b: %i\n", b);
  printf("c: %i\n", c);
  printf("d: %i\n", d);

  float A = a + b * c / d;
  printf("A: %f\n", A);

  float B = a % b;
  printf("B: %f\n", B);

  int C = a == b;
  int D = a != b;
  printf("C: %i\n", C);
  printf("D: %i\n", D);

  int E = a & b;
  int F = a | b;
  printf("E: %i\n", E);
  printf("F: %i\n", F);

  int G = ~a;
  printf("G: %i\n", G);

  int H = a && b;
  int I = a || b;

  printf("H: %i\n", H);
  printf("I: %i\n", I);

  int J = a << 1;
  printf("J: %i\n", J);

  int K = a >> 1;
  printf("K: %i\n", K);

  a += b;
  printf("a += b: %i\n", a);

  a -= b;
  printf("a -= b: %i\n", a);

  a *= b;
  printf("a *= b: %i\n", a);

  a /= b;
  printf("a /= b: %i\n", a);

  a %= b;
  printf("a porcent= b: %i\n", a);
}
