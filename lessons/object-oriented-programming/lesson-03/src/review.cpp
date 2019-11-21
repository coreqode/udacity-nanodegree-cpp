#include <iostream>
#include <string>
#include <vector>
#include <cassert>

class Point
{
public:
    Point() {}
    Point(int a, int b) : a_(a), b_(b) {}
    ~Point() {}

private:
    int a_;
    int b_;
};

class Line
{
public:
    Line() {}
    Line(Point p1, Point p2): p1_(p1), p2_(p2) { this->numLines++; }
    ~Line() {}

    void countLines() { std::cout << "num of lines: " << numLines << std::endl; }

    static int numLines;

private:
    Point p1_, p2_;
};

int Line::numLines = 0;

int main()
{
    Point p1{0,0};
    Point p2{1,1};

    Line l1{p1,p2};

    l1.countLines();

    Point p3{2,2};
    Line l2{p1,p3};

    l1.countLines();

    return 0;
}