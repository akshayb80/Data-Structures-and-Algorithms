#include <iostream>
#include <math.h>

int get_change(int m) {
  //write your code here
  int result = 0;
  int s = 0;
  int denom[3] = {10, 5, 1};
  for (auto i : denom){
    if (i <= m){
      s = m/i;
      result += s;
      m = m % i;
      if (m == 0){
        break;
      }
    }
  }
return result;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
