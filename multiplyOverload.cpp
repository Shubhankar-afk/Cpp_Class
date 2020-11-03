#include <iostream>
using namespace std;
class Point{
public:
	int x;
	int y;

	Point operator * (Point pt){
		Point newPoint;
		newPoint.x = x * pt.x;			
		newPoint.y = y * pt.y;
		return newPoint;
	}

};

int main(){

	Point pt1;
	pt1.x=10;
	pt1.y=20;
	Point pt2;
	pt2.x=10;
	pt2.y=20;
	Point pt3 = pt1 * pt2;
	cout<<"New x: "<<pt3.x<<"New y: "<<pt3.y;
	return 0;

}