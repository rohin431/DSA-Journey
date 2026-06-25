#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int marks[5];   // assuming 5 subjects
    float percentage;
    int rollNo;
    string depart;

public:
    void inputData() {
        cout << "Enter student name: "<<endl;
        getline(cin,name);
        cout<<"Enter Student Roll number: "<<endl;
        cin>>rollNo;
        cout<<"Enter Department :"<<endl;
        getline(cin,depart);
        cout << "Enter marks for 5 subjects (out of 100):\n";
        int total = 0;
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
            total += marks[i];
        }
        percentage = (total / 500.0) * 100; // total marks out of 500
    }

    void displayResult() {
        cout << "\nStudent Name: " << name << endl;
        cout << "Percentage: " << percentage << "%" << endl;

        if (percentage >= 90)
            cout << "Result: Excellent (Grade A+)" << endl;
        else if (percentage >= 75)
            cout << "Result: Very Good (Grade A)" << endl;
        else if (percentage >= 60)
            cout << "Result: Good (Grade B)" << endl;
        else if (percentage >= 40)
            cout << "Result: Pass (Grade C)" << endl;
        else
            cout << "Result: Fail" << endl;
    }
};
class club: public Student{
public:
string clubs;
void clubPart(){
    cout<<"Enter the club, student is a member of: "<<endl;
    cin.ignore();
    getline(cin,clubs);
}
void dis(){
    cout<<"Club Name: "<<clubs<<endl;
}
};
int main(){
    club c;
    c.inputData();
    c.displayResult();
    c.clubPart();
    c.dis();
    return 0;
}