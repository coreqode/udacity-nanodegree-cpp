#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <fstream>

// 1. #include <fstream>
// 2. Create a std::ifstream object using the path to your file.
// 3. Evaluate the std::ifstream object as a bool to ensure that the stream creation did not fail.
// 4. Use a while loop with getline to write file lines to a string.

std::vector<int> ParseLine(std::string sLine)
{
    std::istringstream my_stream(sLine);
    int n;
    char c;
    std::vector<int> v;


    while(my_stream >> n >> c)
    {
        v.push_back(n);
    }

    return v;
}

std::vector<std::vector<int>> ReadBoardFile(std::string file_name)
{
    std::vector<std::vector<int>> board{};
    std::ifstream file_input;
    file_input.open(file_name);

    if (file_input)
    {
        std::string line;

        while (std::getline(file_input, line))
        {
            std::vector<int> iLine = ParseLine(line);
            board.push_back(iLine);
        }
    }
    else
    {
        std::cout << "Error trying to open the file"
                  << "\n";
    }

    return board;
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
    PrintBoard(ReadBoardFile("../src/board.txt"));
    // PrintBoard(board);
    return 0;
}