#include <iostream>

class vector2d{
    int x=0;
    int y=0;
    vector2d(int x_val=0, int y_val=0): x(x_val), y(y_val){
        dvector2d operator-(const value2d & rhs) const{
        vector2d obj(this->x-rhs.x, this->y-rhs.y)
        return obj;
    }
};
inr min (){
    vector2d.ob1{3,5};
    vector2d.ob2{2,6};
    vector2d.ob3 = ob1-ob2;
    std::cout<<"Result of vector: ("<<ob3.x<<", "<<ob3.y")"<<std::endl;
    return 0;
}
