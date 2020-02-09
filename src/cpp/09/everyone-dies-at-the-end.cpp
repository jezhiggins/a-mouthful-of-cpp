#include <iostream>

class mayfly {
public:
    mayfly() {
      std::cout << "Born\n";
    }
    ~mayfly() {
      std::cout << "Die\n";
    }

    void eat() {
      std::cout << "Eat\n";
    }
};

int main() {
  auto brian = mayfly { };

  brian.eat();
}

// mayflies
// evil_science_experiment(mayfly m)
// add copy constructor to show cloning
// delete copy constructor
// pluck_fully_formed_from_the_spawning_vat
// return by value - moved, not copied
// add some state
// related back to ofstream, and indeed everything