#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <fstream>

auto const Fizz = std::string { "Fizz" };
auto const Buzz = std::string { "Buzz" };

void fizzbuzz_out(std::ostream& os, std::map<int, std::string> const& n_fb);
std::map<int, std::string> make_fizzbuzz(std::vector<int> const& numbers);
std::string fizz_buzz(int i);

int main(int argc, char const* argv[]) {
  auto numbers = std::vector { 1, 2, 3, 4, 5, 6, 7, 8, 13, 15, 17, 21, 25, 42 };
  auto number_to_fb = make_fizzbuzz(numbers);

  if (argc == 2) {
    auto file = std::ofstream { argv[1] };
    fizzbuzz_out(file, number_to_fb);
  } else {
    fizzbuzz_out(std::cout, number_to_fb);
  }
}

void fizzbuzz_out(std::ostream& os, std::map<int, std::string> const& n_fb) {
  for (auto [ num, fb ] : n_fb)
    os << num << ' ' << fb << '\n';
}

std::map<int, std::string> make_fizzbuzz(std::vector<int> const& numbers) {
  auto number_to_fb = std::map<int, std::string> { };

  for (auto i : numbers)
    number_to_fb[i] = fizz_buzz(i);

  return number_to_fb;
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

// is there anything missing here?
// when does the file get closed?
// defined lifetimes - things are destroyed when they go out of scope