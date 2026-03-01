#include<iostream>
using namespace std;

template <class T>
T product(T a, T b){
    return a * b;
}

int main(){
    int a = 5, b = 6;
    double c =2.5, d = 3.5;
    cout << "product of a and b: " << product(a, b) << endl;
    cout << "product of c and d: " << product(c, d) << endl;
}