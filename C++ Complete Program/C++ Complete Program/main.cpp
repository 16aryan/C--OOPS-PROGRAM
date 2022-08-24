#include <iostream>
using namespace std;

class Rectangle{
private:
    int length;
    int breath;
public:
    Rectangle();
    Rectangle(int l ,int b);
    int area();
    int perimeter();
    int getlength();
    void setlength(int l);
    ~Rectangle();
};
Rectangle::Rectangle(int l , int b){
    length=l;
    breath=b;
}
Rectangle::area(){
    return length*breath;
}
Rectangle::perimeter(){
    return 2*(length+breath);
}
Rectangle::~Rectangle()
int main() {
    Rectangle r(10,5);
    cout << r.area();
    cout << r.perimeter();
    r.getlength(20);
    cout << getlength();
    return 0;
}
