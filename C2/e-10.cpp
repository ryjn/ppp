#include <iostream>

void calculate(char operation, double num1, double num2) {
  if (operation == '+') {
    std::cout << num1 
              << operation
              << num2
              << "="
              << (num1 + num2)
              << '\n';
  }
  else if (operation == '-') {
    std::cout << num1 
              << operation
              << num2
              << "="
              << (num1 - num2)
              << '\n';
  }
  else if (operation == '*') {
    std::cout << num1 
              << operation
              << num2
              << "="
              << (num1 * num2)
              << '\n';
  }
  else if (operation == '/') {
    std::cout << num1 
              << operation
              << num2
              << "="
              << (num1 / num2)
              << '\n';
  }
  else {
    std::cout << "Error: invalid operator.\n";
  }
}

int main() {
  std::cout << "Welcome to a simple calculator.\n"
            << "Please enter the operator and two operands (separated by spaces): ";
  char operation;
  double oper1;
  double oper2;
  std::cin >> operation >> oper1 >> oper2;

  calculate(operation, oper1, oper2);

  return 0;
}
