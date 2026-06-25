#include<iostream>
#include<cmath>
using namespace std;
class overload{
    public: 
    void area(double length,double breadth){
        cout<<"Area of Reactangle: "<<length*breadth<<endl;
    }
    void area(double radius){
        cout<<"Area of Circle: "<<M_PI*radius*radius<<endl;
    }
    void area(double height,int base){
        cout<<"Area of Triangle: "<<(height*base)/2<<endl;
    }
};
int main(){
    overload o;
    double length,breadth,radius,height;
    int base;
    cout<<"Enter length of Rectangle:";
    cin>>length;
    cout<<"Enter breadth of Rectangle:";
    cin>>breadth;
    cout<<"Enter radius of Circle:";
    cin>>radius;
    cout<<"Enter Height of Triangle:";
    cin>>height;
    cout<<"Enter Base of Triangle(Intergrer only):";
    cin>>base;
    o.area(length,breadth);
    o.area(radius);
    o.area(height,base);
}