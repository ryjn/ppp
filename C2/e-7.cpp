#include <iostream>

void print_sequence(std::string str1, std::string str2, std::string str3) {
  if (str1 <= str2 && str1 <= str3) {
    std::cout << str1 << ", ";
    if (str2 <= str3) {
      std::cout << str2 << ", " << str3 << '\n';
    }
    else {
      std::cout << str3 << ", " << str2 << '\n';
    }
  }
  else if (str2 <= str1 && str2 <= str3) {
    std::cout << str2 << ", ";
    if (str1 <= str3) {
      std::cout << str1 << ", " << str3 << '\n';
    }
    else {
      std::cout << str3 << ", " << str1 << '\n';
    }
  }
  else if (str3 <= str1 && str3 <= str2) {
    std::cout << str3 << ", ";
    if (str1 <= str2) {
      std::cout << str1 << ", " << str2 << '\n';
    }
    else {
      std::cout << str2 << ", " << str1 << '\n';
    }
  }
}

int main(){
  std::cout << "Enter three strings to sort.\n"
            << "String 1: ";
  std::string val1;
  std::cin >> val1;

  std::cout << "String 2: ";
  std::string val2;
  std::cin >> val2;

  std::cout << "String 3: ";
  std::string val3;
  std::cin >> val3;

  print_sequence(val1, val2, val3);

  return 0;
}
