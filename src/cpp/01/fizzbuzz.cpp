#include <iostream>

int main() {
  for (auto i = 1; i != 100; ++i) {
    if (!(i%3) && !(i%5)) {
      std::cout << i << " FizzBuzz";
    } else if (!(i%3)) {
      std::cout << i << " Fizz";
    } else if (!(i%5)) {
      std::cout << i << " Buzz";
    } else {
      std::cout << i;
    }
    std::cout << '\n';
  }
}

// introduce constants for Fizz and Buzz
// implicit conversion to bool (!(i%3))
// progress output - number, then fizz, then buzz
// ternary operator?
// selection of numbers in a vector
// loop over vector


