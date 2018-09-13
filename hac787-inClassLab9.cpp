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
 			px = 1; py = 1;
 		}
 		Point( double x,double y ) 
		{
 			px = x; py = y;
 		};
		double getx() 
		{ 
			return px; 
		}; 
 		double gety() 
		{ 
			return py; 
		};
 		void setx(double new_x) 
		{ 
			px = new_x; 
		};
 		void sety(double new_y) 	
		{ 
			py = new_y; 		
		};
		void printout()
		{
			cout << "Point: " << px << ", " << py << endl; 
		}
};

class Line {
	private:
 		double px1,py1, px2, py2;
	public:
 		Line() 
		{
 			px1 = 0; py1 = 0; px2 = 1; py2 = 1; 
		}
 		Line( double x1,double y1, double x2, double y2 ) 		
		{
 			px1 = x1; py1 = y1; px2 = x2; py2 = y2;
 		};
		Line (Point p1, Point p2)
		{
			px1 = p1.getx();
			py1 = p1.gety();
			px2 = p2.getx();
                        py2 = p2.gety();
		} 
 		double length() 	
		{ 
			return sqrt((px1-px2)*(px1-px2) + (py1-py2)*(py1-py2)); 
		};
		void printout()
		{
			cout << "Point 1: " << px1 << ", " << py1 <<endl;
			cout << "Point 2: " << px2 << ", " << py2 <<endl; 
		}
		float distance()
		{
			return sqrt((px1-px2)*(px1-px2) + (py1-py2)*(py1-py2));
		}
		Point midpoint()
		{
			Point midpoint = Point((px1+ px2)/2, (py1 +py2)/2);
			return midpoint; 
		} 
};

int main()
{
	Point p1 = Point (1, 2);
	Point p2 = Point (3, 1.5);
	Line line = Line(p1, p2); 
	
	line.printout(); 
	cout << "Distance of the line: " << line.distance() << endl;
	cout << "Midpoint of the line: " << endl;
	line.midpoint().printout();  

}
