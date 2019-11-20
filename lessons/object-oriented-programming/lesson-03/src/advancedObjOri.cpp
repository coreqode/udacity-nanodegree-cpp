#include <iostream>
#include <string>
using std::string;

class Vehicle
{
public:
  int wheels = 0;
  string color = "blue";

  void Print() const
  {
    std::cout << "This " << color << " vehicle has " << wheels << " wheels!\n";
  }
};

class Car : public Vehicle
{
public:
  bool sunroof = false;
};

class Bicycle : protected Vehicle
{
public:
  bool kickstand = true;
  void Sound(){
    Print();
  }
};

class Scooter : private Vehicle
{
public:
  bool electric = false;
  void Sound(){
    Vehicle::Print();
  }
};

int main()
{
  Car car;
  Bicycle bicycle;
  Scooter scooter;

  car.Print();
  bicycle.Sound();
  // scooter.Print();
};