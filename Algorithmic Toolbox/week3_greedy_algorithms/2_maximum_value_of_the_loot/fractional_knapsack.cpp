#include <iostream>
#include <vector>

using std::vector;

double get_optimal_value(int capacity, vector<int> weights, vector<int> values, int n) {
  double value = 0.0;
  double A[] {};
  int amt = 0;
  for (int i = 0; i < n; i++) {
    if (capacity == 0){
      break;
    }
    else {
      amt = std::min(weights[i], capacity);
      value = value + amt*((double)values[i]/weights[i]);
      weights[i] -= amt;
      A[i] = A[i] + amt;
      capacity -= amt;
    }
  }
  return value;
}

int main() {
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values, n);

  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}
