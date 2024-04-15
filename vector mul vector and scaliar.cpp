#include <iostream>

class Vector2d {
    int x;
    int y;
public:
    Vector2d(int x_val = 0, int y_val = 0): x(x_val), y(y_val) {}
    
    Vector2d operator*(int scalar) const {
        Vector2d obj(this->x * scalar, this->y * scalar);
        return obj;
    }

    friend Vector2d operator*(int scalar, const Vector2d& vec) {
        return vec * scalar;
    }

    friend std::ostream& operator<<(std::ostream& os, const Vector2d& vec) {
        os << "(" << vec.x << ", " << vec.y << ")";
        return os;
    }
};

int main() {
    Vector2d ob1(3, 5);
    int scalar = 2;
    Vector2d result = ob1 * scalar;
    std::cout << "Result of vector multiplication: " << result << std::endl;

    Vector2d result2 = scalar * ob1;
    std::cout << "Result of scalar multiplication: " << result2 << std::endl;
    
    return 0;
}