#include <iostream>
#include <cmath>
#include <iomanip>

class CoordinateConverter {

private:
    double x, y;
    double r, theta;

public:

    CoordinateConverter() : x(0), y(0), r(0), theta(0) {}

    void CartesianToPolar(double x, double y, int precision) {
        this->x = x;
        this->y = y;
        r = sqrt(x * x + y * y);
        theta = atan2(y, x);

        std::cout << std::fixed << std::setprecision(precision);
        std::cout << "Polar coordinates: r = " << r << ", θ = " << theta << " rad" << std::endl;
    }

    void PolarToCartesian(double r, double theta, int precision) {
        this->r = r;
        this->theta = theta;
        x = r * cos(theta);
        y = r * sin(theta);

        std::cout << std::fixed << std::setprecision(precision);
        std::cout << "Cartesian coordinates: x = " << x << ", y = " << y << std::endl;
    }

    void getCartesian(int precision) {
        std::cout << std::fixed << std::setprecision(precision);
        std::cout << "Cartesian coordinates: x = " << x << ", y = " << y << std::endl;
    }

    void getPolar(int precision) {
        std::cout << std::fixed << std::setprecision(precision);
        std::cout << "Polar coordinates: r = " << r << ", θ = " << theta << " rad" << std::endl;
    }
};

int main() {

    CoordinateConverter converter;

    double x, y, r, theta;
    int DecimalPlaces;
    int mode;

    std::cout << "Choose mode: " << std::endl;
    std::cout << "1. Cartesian To Polar" << std::endl;
    std::cout << "2. Polar To Cartesian" << std::endl;
    std::cin >> mode;

    switch (mode) {
        case 1:
            std::cout << "Input X: ";
            std::cin >> x;
            std::cout << "Input Y: ";
            std::cin >> y;
            std::cout << "Input decimal places: ";
            std::cin >> DecimalPlaces;
            converter.CartesianToPolar(x, y, DecimalPlaces);
            break;

        case 2:
            std::cout << "Input r: ";
            std::cin >> r;
            std::cout << "Input θ (rad): ";
            std::cin >> theta;
            std::cout << "Input decimal places: ";
            std::cin >> DecimalPlaces;
            converter.PolarToCartesian(r, theta, DecimalPlaces);
            break;
    }

    return 0;
}
