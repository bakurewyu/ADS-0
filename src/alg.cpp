// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
  while (b!=0) {
    int cash = b;
    b = a % b;
    a = cash;
  }
  return a;
}
