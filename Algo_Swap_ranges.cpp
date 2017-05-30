// swap_ranges example
#include <iostream>     // std::cout
#include <algorithm>    // std::swap_ranges
#include <vector>       // std::vector

int main () {
  std::vector<int> foo (5,10);        // foo: 10 10 10 10 10
  std::vector<int> bar (5,33);        // bar: 33 33 33 33 33

  auto print = [](const int& n) { std::cout << " " << n; };
  std::swap_ranges(foo.begin(), foo.end(), bar.begin());

  // print out results of swap:
  std::cout << "foo contains:";
  std::for_each(foo.begin(), foo.end(), print);
  std::cout << '\n';

  std::cout << "bar contains:";
  std::for_each(bar.begin(), bar.end(), print);
  std::cout << '\n';

  return 0;
}
