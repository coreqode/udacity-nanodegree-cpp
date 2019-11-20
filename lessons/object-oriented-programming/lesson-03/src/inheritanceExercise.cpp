#include <iostream>

// Define base class Animal
class Animal
{
public:
    std::string color_;
    std::string name_;
    int age_;
};

// Declare derived class Snake
class Snake : public Animal
{
public:
    float lenght_;

    void MakeSound() { std::cout << "Hisssss\n"; }; 
};

// Declare derived class Cat
class Cat : public Animal
{
public:
    float height_;

    void MakeSound() { std::cout << "Meow\n"; };
};

// Test in main()
int main()
{
    Snake snake;
    Cat cat;

    snake.MakeSound();
    cat.MakeSound();

    return 0;
}