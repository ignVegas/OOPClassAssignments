#include <iostream>
#include <vector>
using namespace std;

class Shape {
public:
   
    virtual double calculateArea() const = 0;
    virtual ~Shape() {} 
};

class Square : public Shape {
private:
    double sideLength;

public:
	// con / side
    Square(double side) : sideLength(side) {}

    // override func
    double calculateArea() const override {
        return sideLength * sideLength;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    // con / lengh , width
    Rectangle(double len, double wid) : length(len), width(wid) {}

	// override func
    double calculateArea() const override {
        return length * width;
    }
};

int main() {
 
    vector<Shape*> shapes;
    shapes.push_back(new Square(5.0));          // sq side 5
	shapes.push_back(new Rectangle(4.0, 6.0));  // rect length 4 width 6

    for (const Shape* shape : shapes) {
        cout << "Area: " << shape->calculateArea() << endl;
    }

    for (Shape* shape : shapes) {
        delete shape;
    }

    return 0;
}
