#include <iostream>
//#include <string>
#include <vector>

using namespace std;

class Shape { // abstract base class
private:
    // attributes
public:
    virtual void draw() =0; // pure virtual functions
    virtual void rotate() =0;
    virtual ~Shape() {};
};

class OpenShape : public Shape { // abstract class
public:
    virtual ~OpenShape() {};
};

class ClosedShape : public Shape { // abstract class
public:
    virtual ~ClosedShape() {};
};

class Line : public OpenShape { // concrete class
public:
    virtual void draw() override {
        cout << "Drawing a line" << endl;
    }
    virtual void rotate() override {
        cout << "Rotating a line" << endl;
    }
    virtual ~Line() {};
};

class Circle : public ClosedShape {
public:
    virtual void draw() override {
        cout << "Drawing a circle" << endl;
    }
    virtual void rotate() override {
        cout << "Rotating a circle" << endl;
    }
    virtual ~Circle() {};
};

class Square : public ClosedShape {
public:
    virtual void draw() override {
        cout << "Drawing a square" << endl;
    }
    virtual void rotate() override {
        cout << "Rotating a square" << endl;
    }
    virtual ~Square() {};
};

void screen_refresh(const vector<Shape *> &shapes){
    cout << "Refreshing..." << endl;
    for (const auto p:shapes)
        p->draw();
}


int main()
{
//    Shape s;
//    Shape *p = new Shape;

//    Circle c;
//    c.draw();

//    Shape *ptr = new Circle{};
//    ptr->draw();
//    ptr->rotate();
//    delete ptr;
    
    Shape *p1 = new Circle{};
    Shape *p2 = new Line{};
    Shape *p3 = new Square{};
    
    vector<Shape*> shapes {p1,p2,p3};
    screen_refresh(shapes);
    
    delete p1;
    delete p2;
    delete p3;
    
	cout <<  endl;
	return 0;
}
