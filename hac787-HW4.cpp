// Homework  4: Triangle Class 
// Hailey Cassidy
// April 10th 2018 
#include <iostream>
#include <cmath>
using std:: cin;
using std:: cout;
using std:: endl;

class Triangle {
	private: 
		double s1,s2,s3,theta1,theta2;
		double rangle = 90;
	public: 
		Triangle(){
			s1 =1;
			s2 =1; s3= 1;
			theta1 = 1; theta2 =2;
		} 
		Triangle( double side1, double side2){
			s1 = side1; s2 = side2;
			s3 = sqrt(pow(s1, 2) + pow(s2, 2));
			theta1 = tan(s1/s2)* 180/ 3.141592;
			theta2 = 90 - theta1;
		}
		double get_s1 (){ return s1;}

                double get_s2 (){ return s2;}

                double get_s3 (){ return s3;}

                double get_rangle (){ return rangle;}

                double get_theta1 (){ return theta1;}

                double get_theta2 (){ return theta2;}
}; 

int main() {
	Triangle t1(3, 4);
	Triangle t2(5, 12); 

	cout << "Triangle 1: " <<endl;
	cout << "   side 1: " << t1.get_s1() << endl;
	cout << "   side 2: " << t1.get_s2() << endl;
	cout << "   hypotanuse: " << t1.get_s3() << endl;
	cout << "   right angle: " << t1.get_rangle() << endl;
	cout << "   theta 1: " << t1.get_theta1() << endl;
	cout << "   theta 2: " << t1.get_theta2() << endl;

	cout << "Triangle 2: " <<endl;
        cout << "   side 1: " << t2.get_s1() << endl;
        cout << "   side 2: " << t2.get_s2() << endl;
        cout << "   hypotanuse: " << t2.get_s3() << endl;
        cout << "   right angle: " << t2.get_rangle() << endl;
        cout << "   theta 1: " << t2.get_theta1() << endl;
        cout << "   theta 2: " << t2.get_theta2() << endl;

}
