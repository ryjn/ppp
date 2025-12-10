#include <iostream>

double smaller(double num1, double num2) {
  return (num1 < num2) ? num1 : num2;
}

double larger(double num1, double num2) {
  return (num1 > num2) ? num1 : num2;
}

double sum(double num1, double num2) {
  return (num1 + num2);
}

double difference(double num1, double num2) {
  return (num1 - num2);
}

double product(double num1, double num2) {
  return (num1 * num2);
}

double ratio(double num1, double num2) {
  return (num1 / num2);
}

int main() {
  std::cout << "Enter two float values to summarize.\n"
            << "Float 1: ";

  double val1;
  std::cin >> val1;

  std::cout << "Float 2: ";
  double val2;
  std::cin >> val2;

  std::cout << "The smaller of " << val1 << " and " << val2 << " is " << smaller(val1, val2) << '\n';
  std::cout << "The larger of " << val1 << " and " << val2 << " is " << larger(val1, val2) << '\n';
  std::cout << "The sum of " << val1 << " and " << val2 << " is " << sum(val1, val2) << '\n';
  std::cout << "The difference of " << val1 << " and " << val2 << " is " << difference(val1, val2) << '\n';
  std::cout << "The product of " << val1 << " and " << val2 << " is " << product(val1, val2) << '\n';
  std::cout << "The ratio of " << val1 << " and " << val2 << " is " << ratio(val1, val2) << '\n';

  return 0;
}
