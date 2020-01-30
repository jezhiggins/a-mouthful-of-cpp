#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <fstream>

auto const Fizz = std::string { "Fizz" };
auto const Buzz = std::string { "Buzz" };

std::map<int, std::string> make_fizzbuzz(std::vector<int> const& numbers);
std::string fizz_buzz(int i);

int main() {
  auto numbers = std::vector { 1, 2, 3, 4, 5, 6, 7, 8, 13, 15, 17, 21, 25, 42 };
  auto number_to_fb = make_fizzbuzz(numbers);

  auto outputFile = std::ofstream { "fizzbuzz.txt" };
  for (auto [ num, fb ] : number_to_fb)
    outputFile << num << ' ' << fb << '\n';
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

// get filename from command line
// factor out fizzbuzz_out