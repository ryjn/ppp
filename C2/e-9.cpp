#include <iostream>

void string_to_digit(std::string num) {
  if (num == "zero") {
    std::cout << 0 << '\n';
  }
  else if (num == "one") {
    std::cout << 1 << '\n';
  }
  else if (num == "two") {
    std::cout << 2 << '\n';
  }
  else if (num == "three") {
    std::cout << 3 << '\n';
  }
  else if (num == "four") {
    std::cout << 4 << '\n';
  }
  else {
    std::cout << "Not a number I know, sorry!\n";
  }
}
int main() {
  std::cout << "Spell out a number to convert to digit: ";
  std::string val;
  std::cin >> val;

  string_to_digit(val);
  return 0;
}
