#include <iostream>
#include <vector>
#include <cassert>

class Matrix
{
private:
    std::vector<int> values_;
    int rows_;
    int columns_;

public:
    Matrix(int rows, int cols) 
        : rows_(rows), columns_(cols), values_(rows * cols)
        {

        }
    
    int& operator()(int row, int col) {
        return values_[row*columns_+col];
    }

    int operator()(int row, int col) const {
        return values_[row*columns_+col];
    }
};

int main()
{
    Matrix matrix(2, 2);
    matrix(0, 0) = 7;
    assert(matrix(0, 0) == 7);
}