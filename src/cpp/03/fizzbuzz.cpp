#include <iostream>
#include <vector>
#include <string>

auto const Fizz = std::string { "Fizz" };
auto const Buzz = std::string { "Buzz" };

std::string fizz_buzz(int i);

int main() {
  auto numbers = std::vector { 1, 2, 3, 4, 5, 6, 7, 8, 13, 15, 17, 21, 25, 42 };

  for (auto i : numbers)
    std::cout << i << ' ' << fizz_buzz(i) << '\n';
}

std::string fizz_buzz(int i) {
  if (i%3 == 0 && i%5 == 0)
    return Fizz + Buzz;

  if (i%3 == 0)
    return Fizz;

  if (i%5 == 0)
    return Buzz;

  return std::to_string(i);
}

// capture int to fizzbuzz in a std::map
// can't output std::map
// can loop on it though, but can't output that either
// it's a pair -> i.first, i.second