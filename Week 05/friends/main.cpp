#include <iostream>
#include <vector>

class Car {
    int x = 0;
    int y = 0;

   public:
    friend void moveOnce(Car& car);
    friend class Driver;
    friend int main();
};

void moveOnce(Car& car) {
    car.x += 1;
}

class Driver {
public:
    Car car;

    void driveCar() {
        car.x += 1;
    }
};

int main() {
    Car car;
    moveOnce(car);

    std::cout << car.x;

    Driver driver;
    driver.driveCar();
}
