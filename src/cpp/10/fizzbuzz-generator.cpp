#include <iostream>

class fizz_buzzer {
public:
    fizz_buzzer();

    std::string operator()();

private:
    int index_;

    std::string const Fizz { "Fizz" };
    std::string const Buzz { "Buzz" };

    std::string fizz_buzz();
};

int main() {
    auto fb = fizz_buzzer();

    for (int i = 0, ; i != 15; ++i)
        std::cout << fb() << '\n';
}

///////////
fizz_buzzer::fizz_buzzer() :
    index_(0) {
}

std::string fizz_buzzer::operator()() {
    ++index_;
    return fizz_buzz();
}

std::string fizz_buzzer::fizz_buzz() {
    if (index_%3 == 0 && index_%5 == 0)
        return Fizz + Buzz;

    if (index_%3 == 0)
        return Fizz;

    if (index_%5 == 0)
        return Buzz;

    return std::to_string(index_);
}