#include <iostream>

int main() {
  for (auto i = 1; i != 100; ++i) {
    if ((i%3 == 0) && (i%5 == 0)) {
      std::cout << i << " FizzBuzz";
    } else if (i%3 == 0) {
      std::cout << i << " Fizz";
    } else if (i%5 == 0) {
      std::cout << i << " Buzz";
    } else {
      std::cout << i;
    }
    std::cout << '\n';
  }
}