#include <iostream>

int smaller(int num1, int num2) {
  return (num1 < num2) ? num1 : num2;
}

int larger(int num1, int num2) {
  return (num1 > num2) ? num1 : num2;
}

int sum(int num1, int num2) {
  return (num1 + num2);
}

int difference(int num1, int num2) {
  return (num1 - num2);
}

int product(int num1, int num2) {
  return (num1 * num2);
}

int ratio(int num1, int num2) {
  return (num1 / num2);
}

int main() {
  std::cout << "Enter two integer values to summarize.\n"
            << "Integer 1: ";

  int val1;
  std::cin >> val1;

  std::cout << "Integer 2: ";
  int val2;
  std::cin >> val2;

  std::cout << "The smaller of " << val1 << " and " << val2 << " is " << smaller(val1, val2) << '\n';
  std::cout << "The larger of " << val1 << " and " << val2 << " is " << larger(val1, val2) << '\n';
  std::cout << "The sum of " << val1 << " and " << val2 << " is " << sum(val1, val2) << '\n';
  std::cout << "The difference of " << val1 << " and " << val2 << " is " << difference(val1, val2) << '\n';
  std::cout << "The product of " << val1 << " and " << val2 << " is " << product(val1, val2) << '\n';
  std::cout << "The ratio of " << val1 << " and " << val2 << " is " << ratio(val1, val2) << '\n';

  return 0;
}
