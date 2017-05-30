#include <algorithm>
#include <vector>
#include <iostream>
 
struct x {
  typedef int result_type;
  x() : current(0), next(1) {}
  int operator() () {
    int tmp = current;
    current = next;
    next += tmp;
    return tmp;
  }
private:
  int current;
  int next;
};

int main()
{
    std::vector<int> v{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
 
    std::fill(v.begin(), v.end(), -1);
 
    for (auto elem : v) {
        std::cout << elem << " ";
    }
    std::cout << "\n";

    // check this 
    /*vector<int> x(10, 1);
    std::fill_n (back_inserter(x), 10, 2); 
    std::for_each(x.begin(),x.end(), [](int &c){ std::cout<<c<<" ";});*/

// generate function

   std::generate(v.begin(), v.end(), x());
    for (auto elem : v) {
        std::cout << elem << " ";
    }
}
