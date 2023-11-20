#pragma once
#include "Point.h"
#include <vector>
using namespace std;

struct Line {
	Point one;
	Point two;
	double aParam = 0.0;
	double bParam = 0.0;
};

Line initLine(Point one, Point two); // рассчет параметров a, b линейного уравнения y = ax + b
double lengthLine(Point one, Point two);// определение длины отрезка
bool inLine(Line line, Point point);// проверка точки на принадлежность отрезку Line
vector<Point> genPointInLine(Line line, int countPoint);
Point* getPointfromArr(vector<Point>& ptr, int idx);
void displayPoint(vector<Point>& ptr);

