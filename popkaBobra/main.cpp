#include "Header.h"
#include "Figure.h"

void test(Figure *figure) {
	cout << figure->perimeter() << endl;
	cout << figure->draw() << endl;
}

int main() {

	int sides[]{ 5 };
	Square *square = new Square(sides, 4);
	test(square);

	Line *line = new Line(sides, 1);
	test(line);

	return 0;
}