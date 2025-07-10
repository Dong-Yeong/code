#include <iostream>
using namespace std;

class Shape {
protected:
    double dim1, dim2; 

public:
    void get_data() {
        cout << "Enter dimension 1: ";
        cin >> dim1;
        cout << "Enter dimension 2: ";
        cin >> dim2;
    }
    virtual void display_area() {
        cout << "Area calculation not implemented for base class Shape." << endl;
    }
};

class Triangle : public Shape {
public:
    void display_area() override {
        double area = 0.5 * dim1 * dim2; // Area of triangle formula
        cout << "Area of Triangle: " << area << endl;
    }
};

class Rectangle : public Shape {
public:
    void display_area() override {
        double area = dim1 * dim2; // Area of rectangle formula
        cout << "Area of Rectangle: " << area << endl;
    }
};

int main() {
    int choice;
    Shape* ptr;

    cout << "Enter 1 for Triangle, 2 for Rectangle: ";
    cin >> choice;

    if (choice == 1) {
        Triangle t;
        ptr = &t;
        t.get_data(); 
    }
    else if (choice == 2) {
        Rectangle r;
        ptr = &r;
        r.get_data(); 
    }
    else {
        cout << "Invalid choice." << endl;
        return 1;
    }

    ptr->display_area();

    return 0;
}
