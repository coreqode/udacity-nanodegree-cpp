#include <iostream>
#include <vector>
#include <algorithm>

class Foo
{
public:
    Foo(int value) : value_(value) {}
    ~Foo() {}

    int value_;
};

void Print(const std::vector<Foo*> v)
{
    for (auto foo : v)
    {
        std::cout << foo->value_ << " ";
    }
    std::cout << "\n";
}

bool compare(const Foo* f1, const Foo* f2){
    return f1->value_ > f2->value_;
}

int main()
{
    Foo f1(10);
    Foo f2(20);

    std::vector<Foo*> myVector;
    myVector.push_back(&f1);
    myVector.push_back(&f2);

    Print(myVector);
    std::sort(myVector.begin(), myVector.end(), compare);
    Print(myVector);

    return 0;
}