#include <iostream>

int euclid_gcd(int a, int b){
  if (b == 0)
    return a;
  return euclid_gcd(b, a % b);
}

long long lcm_fast(long long int a, long long int b) {
  if (a > b)
    return (a / euclid_gcd(a, b)) * b;
  else
    return (b / euclid_gcd(a, b)) * a;
}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << lcm_fast(a, b) << std::endl;
  return 0;
}
