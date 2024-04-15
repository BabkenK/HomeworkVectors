#include <iostream>

class Vector3D {
    int x;
    int y;
    int z;
public:
    Vector3D(int x_val = 0, int y_val = 0, int z_val = 0) : x(x_val), y(y_val), z(z_val) {}

    Vector3D operator+(const Vector3D& rhs) const {
        Vector3D obj(this->x + rhs.x, this->y + rhs.y, this->z + rhs.z);
    
      return obj
    }
};

int main() {
    Vector3D ob1(3, 5, 7);
    Vector3D ob2(2, 6, 8);
    Vector3D ob3 = ob1 + ob2;
    std::cout << "Result of vector addition: " << ob3 << std::endl;
    return 0;
}

