#include <iostream>
using namespace std;
class Point{
	int x=10;
	int y=20;
	public:
		void display(Point point){
			cout<<"x: "<<point.x<<endl<<"y: "<<point.y<<endl;
		}
		friend void swapFunc(Point point);
};

void swapFunc(Point point){
	int temp = point.x;
	point.x = point.y;
	point.y = temp;
}

int main(){
	Point point1;
	point1.display(point1);
	swapFunc(point1);
	point1.display(point1);
	return 0;
}