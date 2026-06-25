#include <iostream>
using namespace std;
class Vehicle {
    protected:
    int num;
    int wheels;
    int speed;
public:
    virtual void display() {
       cout<<"Car Number:"<<num<<endl;
       cout<<"Number of Wheels:"<<wheels<<endl;
       cout<<"Top Speed:"<<speed<<endl;
   }
};
class Car : public Vehicle {
    protected:
    bool sun_roof;
public:
   void display() override {
    Vehicle::display();
       if(sun_roof)
       cout<<"Sun Roof: Yes!"<<endl;
       else
       cout<<"Sun Roof:No"<<endl;
   }
   void getData(){
       cout<<"Enter Plate-number of Car:"<<endl;
       cin>>num;
       cout<<"Number of wheels:"<<endl;
       cin>>wheels;
       cout<<"Top speed of the car:"<<endl;
       cin>>speed;
       int x;
       cout<<"Sun-Roof(1=Yes,0=No):"<<endl;
       cin>>x;
       sun_roof=(x==1);
   }
};
int main() {
   Car obj;
   obj.getData();
   obj.display();
}