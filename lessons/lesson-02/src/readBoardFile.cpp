#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <fstream>

// 1. #include <fstream>
// 2. Create a std::ifstream object using the path to your file.
// 3. Evaluate the std::ifstream object as a bool to ensure that the stream creation did not fail.
// 4. Use a while loop with getline to write file lines to a string.

enum class State {kEmpty, kObstacle};

std::vector<State> ParseLine(std::string sLine)
{
    std::istringstream my_stream(sLine);
    int n;
    char c;
    std::vector<State> s;


    while(my_stream >> n >> c)
    {
        if(n == 0)
        {
            s.push_back(State::kEmpty);
        }
        else
        {
            s.push_back(State::kObstacle);
        }
    }

    return s;
}

std::vector<std::vector<State>> ReadBoardFile(std::string file_name)
{
    std::vector<std::vector<State>> board{};
    std::ifstream file_input;
    file_input.open(file_name);

    if (file_input)
    {
        std::string line;

        while (std::getline(file_input, line))
        {
            std::vector<State> iLine = ParseLine(line);
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

std::string CellString(State state)
{
    switch (state)
    {
        case State::kObstacle: return "⛰️   ";   
        default: return "0   ";
    }
}

void PrintBoard(const std::vector<std::vector<State>> board)
{
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[i].size(); j++)
        {
            std::cout << CellString(board[i][j]);
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