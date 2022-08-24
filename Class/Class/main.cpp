#include <iostream>
using namespace std;

class Employee {
  private:
    int salary=47000;

  public:
    void setSalary(int s) {
        salary = s;
    }
    int getSalary() {
      return salary;
    }
};

int main() {
  Employee myObj;
  myObj.setSalary(50000);
  cout << myObj.getSalary()<<"\n";
  return 0;
}
