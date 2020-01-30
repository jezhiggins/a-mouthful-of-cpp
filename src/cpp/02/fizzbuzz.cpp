#include <iostream>
#include <vector>

auto const Fizz = "Fizz";
auto const Buzz = "Buzz";

int main() {
  auto numbers = std::vector { 1, 2, 3, 4, 5, 6, 7, 8, 13, 15, 17, 21, 42 };

  for (auto i : numbers) {
    std::cout << i << ' ';

    if (i%3 == 0)
      std::cout << Fizz;

    if (i%5 == 0)
      std::cout << Buzz;

    std::cout << '\n';
  }
}

// factor out fizz_buzz(int i)
// alternative declaration -> auto fizz_buzz(int i) -> std::string
// declaration and definition - all names have scope
// automatic type deduction
