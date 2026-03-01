#include<iostream>
using namespace std;

template <class T>
T product(T a, T b){
    return a * b;
}

template <class T>
class rectangle{
public:
    T area(T a, T b);
};
template <class T>
T rectangle<T>::area(T a, T b){
    return a * b;
};


int main(){
    rectangle<int> rect1;
    rectangle<double> rect2;
    cout << "Area of rect1 is: " << rect1.area(5, 6) << endl;
    cout << "Area of rect2 is: " << rect2.area(2.5, 3.0) << endl;

    int a = 5, b = 6;
    double c =2.5, d = 3.5;
    cout << "product of a and b: " << product(a, b) << endl;
    cout << "product of c and d: " << product(c, d) << endl;
}