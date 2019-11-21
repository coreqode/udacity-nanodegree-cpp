#include <iostream>
#include <string>
#include <algorithm>

class Animal
{
public:
    virtual std::string Talk() const = 0;
};

class Cat
{
public:
    std::string Talk() const { return "Meow"; }
};

class Lion : public Cat
{
public:
    std::string Talk() const { return "Roar"; }
};

int main()
{
    Cat cat;
    Lion lion;

    std::cout << cat.Talk() << std::endl;
    std::cout << lion.Talk() << std::endl;


    return 0;
}