#include <iostream>

// divisible by 3: say "fizz"
// divisible by 5: say "buzz"
// both: "fizzbuzz"
// count up from 1 to 50

int main() {
    int countMax{50};

    for (int currNmbr{1}; currNmbr <= countMax; ++currNmbr) {
        if (currNmbr % 3 == 0 && currNmbr % 5 == 0) {
            std::cout << "fizzbuzz" << std::endl;
        }
        else if ((currNmbr % 5) == 0) {
            std::cout << "buzz" << std::endl;
        }
        else if ((currNmbr % 3) == 0) {
            std::cout << "fizz" << std::endl;
        }
        else {
            std::cout << currNmbr << std::endl;
        }
    }

    return 0;
}