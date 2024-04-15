#include <iostream>

class vector2d {
    int x;
    int y;
public:
    vector2d(int x_val = 0, int y_val = 0) : x(x_val), y(y_val) {}

    vector2d operator/(int scalar) const {
        return vector2d(this->x / scalar, this->y / scalar);
    }
};

int main() {
    vector2d ob1(3, 5);
    int scalar = 2;
    vector2d ob3 = ob1 / scalar;
    std::cout << "Result of vector division by scalar: (" << ob3.x << ", " << ob3.y << ")" << std::endl;
    return 0;
}
