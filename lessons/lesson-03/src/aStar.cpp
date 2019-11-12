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

int Heuristic(int x1, int y1, int x2, int y2)
{
    return std::abs(x2-x1)+ std::abs(y2-y1);
}

std::vector<std::vector<State>> Search(std::vector<std::vector<State>> board, std::vector<int> init,  std::vector<int> goal)
{
    std::vector<std::vector<State>> solution{};
    std::cout << "No path found" << "\n";
    return solution;
}

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
    auto solution = Search(board, init, goal);
    PrintBoard(solution);

    return 0;
}