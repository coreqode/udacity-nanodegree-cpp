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
  static int count;
  bool sunroof = false;

  Car(){
   this->count++;
  }

  void CountCars() {
    std::cout << "Numbers of cars: " << this->count << std::endl;
  }
};

int Car::count = 0;

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
  car.CountCars();
  bicycle.Sound();
  // scooter.Print();

  Car car2;
  Car car3;

  car3.CountCars();
};