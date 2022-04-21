#include <iostream>

using namespace std;

class Rectangle {
public:
    double length;
    double width;
    void getInformation()
    {
        cin >> length;
        cin >> width;
    } 
    double getArea()
    {
        return length*width;
    }
    double getPerimeter()
    {
        return 2*(length+width);
    }
    void display()
    {
        cout << "Area: "<<getArea()<<endl;
        cout << "Perimeter: "<<getPerimeter()<<endl;
    }
};

int main() {
    Rectangle r1;
    r1.getInformation();
    r1.display();
    return 0;
}