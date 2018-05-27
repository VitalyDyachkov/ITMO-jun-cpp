#include <iostream>

using namespace std;

//int main()
//{
//    double x = 3.7;
//    int i = (int) (x);
//    i = (int) (x + 0.5);
//    cout << i << endl;
//    return 0;
//}


//int main()
//{
//    int x = 3;
//    double y = 5.5;
//    cout << &x << endl;
//    cout << &y << endl;

//    return 0;
//}


//int main()
//{
//    double x, y;
//    int *p;
//    double *dp;

//    x = 123.23;
//    p = (int *) &x;

//    y = *p;
//    cout << y << endl;

//    dp = &x;
//    y = *dp;
//    cout << y << endl;

//    return 0;
//}


//int main()
//{
//    int j, k;
//    int &i = j;
//    j = 10;

//    cout << j << " " << i << endl;

//    k = 121;
//    i = k;

//    cout << j << endl;

//    return 0;
//}


//void swap(int x, int y) {
//  int temp = x;
//  x = y;
//  y = temp;
//}


//int main() {
//  int a = 3;
//  int b = 7;
//  cout << a << ", " << b << endl;
//  swap(a, b);
//  cout << a << ", " << b << endl;
//  cout << endl;
//  return 0;
//}


//void swap(int &x, int &y) {
//    int temp = x;
//    x = y;
//    y = temp;
//}

//int main() {
//    int a = 3;
//    int b = 7;
//    cout << a << ", " << b << endl;
//    swap(a, b);
//    cout << a << ", " << b << endl;
//    return 0;
//}


//class Triangle {
//private:
//  double a;
//  double b;
//  double c;

//public:
// Triangle(double a_in, double b_in, double c_in) {
//     a = a_in;
//     b = b_in;
//     c = c_in;
// }


// void scale(double s) {
//    this->a *= s;
//    this->b *= s;
//    this->c *= s;
//  }
//};

//int main() {
//  Triangle t1(3, 4, 5);
//  t1.scale(2);
////  cout << t1.scale();

//  // Die triangle! DIE!
////  t1.a = -1;
//}



class Triangle {
private:
  double a;
  double b;
  double c;

public:
  double get_a() const {
    return a;
  }

  void set_a(double a_in) {
    a = a_in;
//    check_invariants();
  }
};
