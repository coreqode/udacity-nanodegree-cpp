#include <iostream>
#include <sstream>
#include <string>

int main(){

    std::string a("1 2 3");
    std::istringstream my_stream(a);

    int n;

    while(my_stream >> n)
    {
        std::cout << n << " ";
    }
    std::cout << "\n";
    std::cout << "No stream...";
    std::cout << "\n";
}