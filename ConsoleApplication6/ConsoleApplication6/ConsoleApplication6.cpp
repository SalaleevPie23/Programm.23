#include <iostream>
#include <string>
using namespace std;

class Shape {
protected:
    string color;

public:
    virtual void draw() {
        cout << "Рисуем фигуру цвета: " << color << endl;
    }
};

class Circle : public Shape {
private:
    int x, y;
    int radius;

public:
    Circle(int x, int y, int radius, const string& color) : x(x), y(y), radius(radius) {
        this->color = color;
    }

    void draw() override {
        std::cout << "Рисуем круг с координатами (" << x << ", " << y << "), радиусом " << radius << " и цветом " << color << std::endl;
    }
};

class Rectangle : public Shape {
private:
    int x1, y1;
    int x2, y2;

public:
    Rectangle(int x1, int y1, int x2, int y2, const string& color) : x1(x1), y1(y1), x2(x2), y2(y2) {
        this->color = color;
    }

    void draw() override {
        cout << "Рисуем прямоугольник с координатами (" << x1 << ", " << y1 << "), (" << x2 << ", " << y2 << ") и цветом " << color << std::endl;
    }
};

int main() {
    Shape* shapes[3];
    shapes[0] = new Circle(1, 2, 5, "красный");
    shapes[1] = new Rectangle(3, 4, 7, 8, "синий");
    shapes[2] = new Circle(10, 10, 3, "зеленый");

    for (int i = 0; i < 3; i++) {
        shapes[i]->draw();
    }

    for (int i = 0; i < 3; i++) {
        delete shapes[i];
    }

    return 0;
}
