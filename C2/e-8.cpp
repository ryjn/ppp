#include <iostream>

void odd_even(int num) {
  if (num % 2 == 0) {
    std::cout << num << " is even.\n"; 
  }
  else {
    std::cout << num << " is odd.\n";
  }
}
int main() {
  std::cout << "Enter a number to test if odd or even: ";
  int val;
  std::cin >> val;

  odd_even(val);
  return 0;
}
