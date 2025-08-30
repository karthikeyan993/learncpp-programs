/* Gets input from user and prints the doubled value of that number */

#include <iostream>

int getInput() {
  std::cout << "Please enter a number: ";
  int number{};
  std::cin >> number;
  return number;
}

int doubleNumber(int number) {
  return number * 2;
}

int main () {
  int number {getInput()};
  std::cout << "Double of " << number << " is " << doubleNumber(number) << std::endl;
}