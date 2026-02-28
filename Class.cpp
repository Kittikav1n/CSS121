#include<iostream>
using namespace std;
class box{
public:
    double length;
    double breadth;
    double heigth;

    double getValume(void);
    void setLength(double len);
    void setBreadth(double bre);
    void setHeigth(double hei);

};

class line{
public:
    line();
    ~line();
private:
    double length;


};

line::line(void){
    cout << "Object is being created" << endl;
}
line::~line(void){
    cout << "Object is being deleted" << endl;
}

double box::getValume(void){
    return length * breadth * heigth;
}
void box::setLength(double len){
    length = len;
}
void box::setBreadth(double bre){
    breadth = bre;
}
void box::setHeigth(double hei){
    heigth = hei;
}

int main(){
    box box1;
    line line1;
    double volume = 0.0;
    box1.setLength(5.0);
    box1.setBreadth(6.0);
    box1.setHeigth(7.0);

    volume = box1.getValume();
    cout << "Volume is: " << volume << endl;
}