#include "iostream"
using namespace std;
class Circle {
  int x;
  int y;
  float radius;
  const double PI = 3.141593;

public:
  Circle() : x(0), y(0), radius(5) {}

  Circle(int x, int y, float radius) : x(x), y(y), radius(radius) {
    this->x = (x >= -50 && x <= 50) ? x : 0;
    this->y = (y >= -50 && y <= 50) ? y : 0;
    this->radius = (radius >= 1 && radius <= 10) ? radius : 5;
  }
  Circle(int x, int y) : x(x), y(y), radius(5) {
    this->x = (x >= -50 && x <= 50) ? x : 0;
    this->y = (y >= -50 && y <= 50) ? y : 0;
  }
  Circle(int x, float radius) : x(x), y(0), radius(radius) {
    this->x = (x >= -50 && x <= 50) ? x : 0;
    this->radius = (radius >= 1 && radius <= 10) ? radius : 5;
  }
  Circle(Circle &c1) : x(c1.x), y(c1.y), radius(c1.radius) {}

  void setx(int x) { this->x = x; }
  void sety(int y) { this->y = y; }
  int getx() const { return x; }
  int gety() const { return y; }
  void setradius(float radius) { this->radius = radius; }
  float getradius() const { return radius; }

  void setCircle(int x, int y, float radius) {
    setx(x);
    sety(y);
    setradius(radius);
  }
  void getCircle() {
    cout << "Enter x-axis : ";
    cin >> x;
    cout << "Enter y-axis : ";
    cin >> y;
    cout << "Enter radius : ";
    cin >> radius;
    setx(x);
    sety(y);
    setradius(radius);
  }
  void putCircle() const {
    cout << "x-axis : " << x << "   y-axis : " << y << "   radius : " << radius
         << endl;
  }
  float getArea() const { return PI * radius * radius; }
  float getDiameter() const { return 2 * radius; }
  float getCircumference() const { return 2 * radius * PI; }
  Circle addcircle(const Circle &obj1, const Circle &obj2) const {
    Circle temp;
    temp.x = obj1.x + obj2.x;
    temp.y = obj1.y + obj2.y;
    temp.radius = obj1.radius + obj2.radius;
    return temp;
  }
  bool isEqual(const Circle &a, const Circle &b) const {
    return (a.x == b.x && a.y == b.y && a.radius == b.radius);
  }
  int search(const Circle *obj, const int size) const {
    for (int i = 0; i < size; i++) {
      if (this->x == obj[i].x && this->y == obj[i].y &&
          this->radius == obj[i].radius)
        return i;
    }
    return -1;
  }
  void updateObjects(Circle *obj, const int size) const {
    for (int i = 0; i < size; i++) {
      if (this->x == obj[i].x && this->y == obj[i].y) {
        obj[i].radius = this->radius;
      }
    }
  }
  ~Circle() { cout << "Destructor Executed" << endl; }
};
int main() {
  Circle c1(10, 10, 6);
  Circle *p = new Circle[5];
  for (int i = 0; i < 5; i++) {
    p[i].getCircle();
  }
  for (int i = 0; i < 5; i++) {
    p[i].putCircle();
  }

  cout << "Equal and Unequal Circles " << endl;
  for (int i = 0; i < 5; i++) {
    cout << c1.isEqual(c1, p[i]) << endl;
  }
  cout << c1.search(p, 5) << endl;
  c1.updateObjects(p, 5);
  for (int i = 0; i < 5; i++) {
    p[i].putCircle();
  }
  delete[] p;
  return 0;
}