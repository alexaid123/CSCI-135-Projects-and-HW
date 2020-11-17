#include <iostream>

class Rectangle {       
  public:           
	Rectangle(double width, double height);
	double get_perimeter();
	double get_area();
	void resize(double factor);
	
	private:
		double width;
		double height;
		double perimeter;
		double area;
};

Rectangle::Rectangle(double w, double h)
{
	width = w;
	height = h;
}	

double Rectangle::get_perimeter()
{
	perimeter = (2 * width) + (2 * height);
	return perimeter;
}

double Rectangle::get_area()
{
	area = height * width;
	return area;
}

void Rectangle::resize(double factor)
{
	height = height * factor;
	width = width * factor;
}

int main()
{
	Rectangle a = {12, 10};
	std::cout << a.get_area() << "\n";
}