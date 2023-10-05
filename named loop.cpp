#include <iostream>

using namespace std;

int main() {
  // Define the named loop macro
  #define named(blockname) goto blockname; \
      blockname##_skip: if (0) \
      blockname:

  // Create a named loop and print the numbers from 1 to 5
  named(my_loop) {
    for (int i = 1; i <= 5; ++i) {
      cout << i << " ";
    }
  }

  return 0;
}
