#include <iostream>
#include <string>
#include <algorithm>

class Animal
{
public:
    virtual std::string Talk() const = 0;
    // virtual std::string Talk2() const = 0;
};

class Cat : public Animal
{
public:
    std::string Talk() const override { return "Meow"; }
};

class Lion : public Cat
{
public:
    std::string Talk() const override { return "Roar"; }
};

int main()
{
    Cat cat;
    Lion lion;

    std::cout << cat.Talk() << std::endl;
    std::cout << lion.Talk() << std::endl;

    Animal* animal = new Cat();
    std::cout << animal->Talk() << std::endl;
    

    return 0;
}