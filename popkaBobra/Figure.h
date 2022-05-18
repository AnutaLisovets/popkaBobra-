#pragma once
#include "Header.h"
class Figure
{
protected:
	int *sides;
	int size;

public:
	Figure() {
		sides = new int[0];
		size = 0;
	}

	Figure(int *sides, int size) {
		this->sides = sides;
		this->size = size;
	}

	virtual int perimeter() {
		int sum = 0;
		for (int i = 0; i < size; i++) {
			sum += sides[i];
		}
		return sum;
	}

	virtual string draw() {
		return "Figure is drowing now...";
	}
};

class Triangle :public Figure {
public:
	Triangle() {

	}
	Triangle(int *sides, int size) :Figure(sides, size) {

	}
	int perimeter() override {
		int sum = 0;
		for (int i = 0; i < size; i++) {
			sum += sides[i];
		}
		return sum;
	}
	string draw() override {
		return "Triangle is drowing now...";
	}

};
class Square :public Figure {
public:
	Square() {

	}
	Square(int *sides, int size) :Figure(sides, size) {

	}
	int perimeter() override {
		int sum = sides[0] * 4;
		return sum;
	}
	string draw() override {
		return "Square is drowing now...";
	}

};
class Line :public Figure {
public:
	Line() {

	}
	Line(int *sides, int size) :Figure(sides, size) {

	}
	string draw() override {
		return "Line is drowing now...";
	}
};
class Rectangle :public Figure {
public:
	Rectangle() {

	}
	Rectangle(int *sides, int size) :Figure(sides, size) {

	}
	int perimeter() override {
		int sum = Figure::perimeter() * 2;
		return sum;
	}
	string draw() override {
		return "Rectangle is drowing now...";
	}
};