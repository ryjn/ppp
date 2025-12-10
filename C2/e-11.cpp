#include <iostream>

void print_coins(int penny, int nickel, int dime, int quarter, int hdollar, int dollar) {

  // Penny
  if (penny == 1) {
    std::cout << "You have 1 penny.\n";
  }
  else if (penny > 1) {
    std::cout << "You have " << penny << " pennies.\n";
  }

  // Nickel
  if (nickel == 1) {
    std::cout << "You have 1 nickel.\n";
  }
  else if (nickel > 1) {
    std::cout << "You have " << nickel << " nickels.\n";
  }

  // Dime
  if (dime == 1) {
    std::cout << "You have 1 dime.\n";
  }
  else if (dime > 1){
    std::cout << "You have " << dime << " dimes.\n";
  }

  // Quarter
  if (quarter == 1) {
    std::cout << "You have 1 quarter.\n";
  }
  else if (quarter > 1){
    std::cout << "You have " << quarter << " quarters.\n";
  }

  // Half-dollar
  if (hdollar == 1) {
    std::cout << "You have 1 half-dollar.\n";
  }
  else if (hdollar > 1) {
    std::cout << "You have " << hdollar << " half-dollars.\n";
  }

  // Dollar
  if (dollar == 1) {
    std::cout << "You have 1 dollar.\n";
  }
  else if (dollar > 1) {
    std::cout << "You have " << dollar << " dollars.\n";
  }
}

void print_sum(int penny, int nickel, int dime, int quarter, int hdollar, int dollar) {
  std::cout << "The value of all your coiins is "
            << (1 * penny) + (5 * nickel) + (10 * dime) + (25 * quarter) + (50 * hdollar) + (100 * dollar)
            << " cents.\n";
}

int main() {
  std::cout << "Welcome to the Coin Counter.\n";

  // Pennies
  std::cout << "Number of pennies: ";
  int penny_count;
  std::cin >> penny_count;

  // Nickels
  std::cout << "Number of nickels: ";
  int nickel_count;
  std::cin >> nickel_count;

  // Dimes
  std::cout << "Number of dimes: ";
  int dime_count;
  std::cin >> dime_count;

  // Quarters
  std::cout << "Number of quarters: ";
  int quarter_count;
  std::cin >> quarter_count;

  // Half-dollar
  std::cout << "Number of half-dollars: ";
  int hdollar_count;
  std::cin >> hdollar_count;

  // Dollar
  std::cout << "Number of dollars: ";
  int dollar_count;
  std::cin >> dollar_count;

  print_coins(penny_count, nickel_count, dime_count, quarter_count, hdollar_count, dollar_count);
  print_sum(penny_count, nickel_count, dime_count, quarter_count, hdollar_count, dollar_count);

  return 0;
}
