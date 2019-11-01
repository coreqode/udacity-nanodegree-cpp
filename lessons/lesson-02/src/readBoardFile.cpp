#include <iostream>
#include <string>
#include <vector>
#include <fstream>

// 1. #include <fstream>
// 2. Create a std::ifstream object using the path to your file.
// 3. Evaluate the std::ifstream object as a bool to ensure that the stream creation did not fail.
// 4. Use a while loop with getline to write file lines to a string.

void ReadBoardFile(std::string file_name)
{
    std::ifstream file_input;
    file_input.open(file_name);

    if (file_input)
    {
        std::string line;

        std::cout << "chegou aqui..." << "\n";

        while (std::getline(file_input, line))
        {
            std::cout << line << "\n";
        }
    }
    else
    {
        std::cout << "Error trying to open the file" << "\n";
    }
}

void PrintBoard(const std::vector<std::vector<int>> board)
{
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[i].size(); j++)
        {
            std::cout << board[i][j];
        }
        std::cout << "\n";
    }
}

int main()
{

    ReadBoardFile("../src/board.txt");
    //PrintBoard(board);
    return 0;
}