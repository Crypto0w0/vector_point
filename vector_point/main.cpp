#include <iostream>
#include <vector>
using namespace std;

class Point{
    int x;
    int y;
public:
    Point(){
        x = 0;
        y = 0;
    }
    Point (int x, int y){
        this->x = x;
        this->y = y;
    }
    int GetX() const{
        return x;
    }
    int GetY() const{
        return y;
    }
    friend ostream& operator<<(ostream& o, const Point& p){
        o << p.GetX() << ", " << p.GetY();
        return o;
    }
};

int main() {
    vector<Point> p;
    Point p1(0, 0);
    Point p2(1, 1);
    Point p3(2, 2);
    Point p4(3, 3);
    Point p5(4, 4);
    p.push_back(p1);
    p.push_back(p2);
    p.push_back(p3);
    p.push_back(p4);
    p.push_back(p5);
    for (int i = 0; i < p.size(); i++){
        cout << p[i] << endl;
    }
    
}
