#include <iostream>

int main() {
  std::cout << "Welcome to the Miles-to-Kilometers Converter!\n";
  std::cout << "Enter the number of miles to convert: ";

  double miles;
  double km_factor = 1.609;
  std::cin >> miles;

  std::cout << miles << " is " << miles * km_factor << " kilometers.\n";

  return 0;
}
