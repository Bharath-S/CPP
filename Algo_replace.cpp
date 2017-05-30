#include <algorithm>
#include <array>
#include <vector>	
#include <iostream>
#include <functional>
#include <iterator>
 
int main()
{
    std::array<int, 10> s{5, 7, 4, 2, 8, 6, 1, 9, 0, 3};
 
    std::replace(s.begin(), s.end(), 8, 88);
 
    for (int a : s) {
        std::cout << a << " ";
    }
    std::cout << '\n';
 
    std::replace_if(s.begin(), s.end(), 
                    std::bind(std::less<int>(), std::placeholders::_1, 5), 55);
    for (int a : s) {
        std::cout << a << " ";
    }
    std::cout << '\n';

    std::vector<int> v{5, 7, 4, 2, 8, 6, 1, 9, 0, 3};
    std::replace_copy_if(v.begin(), v.end(),
                         std::ostream_iterator<int>(std::cout, " "),
                         [](int n){return n > 5;}, 99);  // Note down
//usage of std::ostream_iterator<int>(std::cout)
//std::copy(a.begin(), a.end(), std::ostream_iterator<int>(std::cout))

    std::cout << '\n';
}
