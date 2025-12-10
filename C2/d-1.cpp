#include <iostream>

/**
  * Drills question 1 - 
  */

int main() {
  // #1
  std::cout << "Enter the name of the person you want to write to: ";
  std::string first_name;
  std::cin >> first_name;

  std::cout << "Dear " << first_name << ",\n";
  
  // #2
  std::cout << "  How are you? I am doing well.\n"
            << "I am practicing C++ using the PPP book.\n";

  // #3
  std::cout << "Enter the name of another friend: ";
  std::string friend_name;
  std::cin >> friend_name;
  std::cout << "Have you seen " << friend_name << " recently?\n";

  // #4
  std::cout << "Enter your age: ";
  int age;
  std::cin >> age;
  std::cout << "I hear you just had a birthday and you are "
            << age
            << " years old.\n";
  if (age <= 0 || age > 110) {
    std::cout << "Liar!\n";
  }
  else if (age < 12) {
    std::cout << "Next year you will be " << age + 1 << '\n';
  }
  else if (age == 17) {
    std::cout << "Next year you will be able to vote.\n";
  }
  else if (age > 70) {
    std::cout << "Are you retired?\n";
  }

  return 0;
}
