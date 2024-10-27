#include <iostream>

struct Rectangle {
	int width, height;

	constexpr Rectangle(int a, int b) : width(a), height(b) {}

	constexpr int getArea() const {
		return width * height;
	}
};

int main() {
	constexpr Rectangle A1(4, 5);
	constexpr int area1 = A1.getArea();
	std::cout << "Area of the first rectangle is " << area1 << std::endl;

	int width2, height2, area2;
	std::cout << "Enter the width of the second rectangle: ";
	std::cin >> width2;
	std::cout << "Enter the height of the second rectangle: ";
	std::cin >> height2;

	Rectangle A2(width2, height2);
	area2 = A2.getArea();
	std::cout << "Area of the second rectangle is " << area2 << std::endl;

	return 0;
}