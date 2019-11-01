#include <iostream>
#include <vector>

int main(){

    // 1D vector:
    std::vector<int> v_1{0, 1, 2, 3, 4};

    std::cout << "1D vector with " << v_1.size() << " elements.\n";
    for(int i = 0; i < v_1.size(); i++){
        std::cout << v_1[i] << " ";
    }
    std::cout << "\n\n";

    // 2D vector:
    std::vector<std::vector<int>> v_2{{0, 1}, {2, 3}, {4, 5}};
    int row = v_2.size();
    int col = v_2[0].size();

    std::cout << "2D vector with " << row*col << " elements.\n";
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            std::cout << v_2[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}