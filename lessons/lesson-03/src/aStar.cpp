#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

enum class State
{
    kEmpty,
    kObstacle
};

std::vector<State> ParseLine(std::string line)
{
    std::istringstream sLine(line);
    int n;
    char c;
    std::vector<State> row;

    while(sLine >> n >> c && c == ',')
    {
        if(n == 0)
        {
            row.push_back(State::kEmpty);
        }
        else
        {
            row.push_back(State::kObstacle);
        }
    }
    return row;
}

std::vector<std::vector<State>> ReadBoardFile(std::string path)
{
    std::ifstream myfile(path);
    std::vector<std::vector<State>> board{};

    if(myfile)
    {
        std::string line;
        while(std::getline(myfile,line))
        {
            std::vector<State> row = ParseLine(line);
            board.push_back(row);
        }
    }
    return board;
}

// TODO: Write the Search function stub her

std::string CellString(State cell)
{
    switch(cell)
    {
        case State::kObstacle: return "⛰️   ";
        default: return "0   ";
    }
}

void PrintBoard(const std::vector<std::vector<State>> board)
{
    for(std::size_t i = 0; i < board.size(); i++)
    {
        for(std::size_t j = 0; j < board[i].size(); j++)
        {
            std::cout << CellString(board[i][j]);
        }
        std::cout << "\n";
    }
}


int main()
{
    std::vector<int> init{0,0};
    std::vector<int> goal{4,5};

    auto board = ReadBoardFile("../src/board.txt");
    PrintBoard(board);

    return 0;
}