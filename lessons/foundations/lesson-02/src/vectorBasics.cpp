#include <iostream>
#include <vector>

int main()
{

    // 1D vector:
    std::vector<int> v_1{0, 1, 2};
    std::vector<int> v_2 = {3, 4, 5};

    std::vector<int> v_3;
    v_3 = {6};

    std::cout << "1D vector worked!"
              << "\n";

    // 2D vector:
    std::vector<std::vector<int>> v{{1, 2}, {3, 4}};
    std::cout << "2D vector worked!"
              << "\n";

    return 0;
}