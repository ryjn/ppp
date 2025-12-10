#include <iostream>

void print_sequence(int num1, int num2, int num3) {
  if (num1 <= num2 && num1 <= num3) {
    std::cout << num1 << ", ";
    if (num2 <= num3) {
      std::cout << num2 << ", " << num3 << '\n';
    }
    else {
      std::cout << num3 << ", " << num2 << '\n';
    }
  }
  else if (num2 <= num1 && num2 <= num3) {
    std::cout << num2 << ", ";
    if (num1 <= num3) {
      std::cout << num1 << ", " << num3 << '\n';
    }
    else {
      std::cout << num3 << ", " << num1 << '\n';
    }
  }
  else if (num3 <= num1 && num3 <= num2) {
    std::cout << num3 << ", ";
    if (num1 <= num2) {
      std::cout << num1 << ", " << num2 << '\n';
    }
    else {
      std::cout << num2 << ", " << num1 << '\n';
    }
  }
}

int main(){
  std::cout << "Enter three integers to sort.\n"
            << "Integer 1: ";
  int val1;
  std::cin >> val1;

  std::cout << "Integer 2: ";
  int val2;
  std::cin >> val2;

  std::cout << "Integer 3: ";
  int val3;
  std::cin >> val3;

  print_sequence(val1, val2, val3);

  return 0;
}
