#include "Header.h"
#include "Figure.h"

void test(Figure **figures, int size) {
	for (int i = 0; i < size; i++) {
		cout << figures[i]->perimeter() << endl;
		cout << figures[i]->draw() << endl;

		Triangle *temp = dynamic_cast<Triangle*>(figures[i]);
		if (temp) {
			temp->unique();
		}
	}
}

int main() {
	int sides[]{ 5, 3, 4 };
	const int size = 6;
	Figure **fs = new Figure * [size];


	fs[0] = new Figure(sides, 0);
	fs[1] = new Square(sides, 1);
	fs[2] = new Line(sides, 1);
	fs[3] = new Triangle(sides, 3);
	fs[4] = new Rectangle(sides, 2);
	fs[5] = new Square(sides, 1);
	fs[6] = new Square(sides, 1);

	test(fs, size);

	return 0;
}