#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;


class Point {
	private:
       	  double px,py;

	public: 
	  Point() //default constructor
	  {
		px =1;
		py =1;
	  }
	  Point(int x, int y) //secondary constructor
	  {
		px = x;
		py = y; 
	  }
	  double getx() // return value of px
	  {
	  	return px; 
	  }
	  double gety() // return value of py
	  {
		return py;
	  }
	  void setx(double x) // set value of px 
	  {
		px = x;
	  }
	  void sety(double y) //set value of py 
          {
                py = y;
          }
	  void printPoints()
	  {
		cout << "Point: " << px << ", " << py << endl;
	  } 
};

class Line {
	private:
 		double px1, py1, px2, py2;
	public:
 		Line() {
			 px1 = 0; py1 = 0; px2 = 1; py2 = 1; 
		}
 		Line( double x1,double y1, double x2, double y2 ) {
 			px1 = x1; py1 = y1; px2 = x2; py2 = y2; 
		};
 		double length() { 
			return sqrt((px1-px2)*(px1-px2) + (py1-py2)*(py1-py2)); 
		};
 		Line scale(double factor) { 
			return Line(px1*factor, py1*factor, px2*factor, py2*factor); 
		};
};

int main() {
 	Point p1;

	Point p2 = Point(2,5);

	p1.printPoints(); //cout << "point 1: " << p1.getx() << ", " <<p1.gety() << endl;
	p2.printPoints(); //cout << "point 2: " << p2.getx() << ", " <<p2.gety() << endl;

	p2.setx(3.4);
	p2.sety(4.5);
	p2.printPoints(); //cout << "point 2: " << p2.getx() << ", " <<p2.gety() << endl;

	Line line1(1.,2., 8., 10.);
 	Line line2 = line1.scale(1.5);
 	cout << "line2 has length " << line2.length() << endl;
	cout << "line2 scaled by 2 " << line2.scale(2).length() << endl; 
}
