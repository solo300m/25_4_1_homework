#include "Point.h"
#include "Line.h"
#include <iostream>
#include <vector>
#include <cmath>


//Псевдоконструктор Line

Line initLine(Point one, Point two) {			// рассчет параметров a, b линейного уравнения y = ax + b
	Line line;
	line.one = one;
	line.two = two;
	if (line.two.X - line.one.X != 0) {
		line.aParam = (line.two.Y - line.one.Y) / (line.two.X - line.one.X);
	}
	line.bParam = line.one.Y - line.aParam * line.one.X;
	return line;
}

/*
Определение длины отрезка в плоскости
Длина отрезка в плоскости может быть определена с использованием формулы расстояния между
двумя точками в декартовой системе координат. Формула для вычисления длины отрезка между двумя точками
(x1, y1) и (x2, y2) имеет вид:
d = √((x2 — x1)2 + (y2 — y1)2)
где d — длина отрезка, √ — корень квадратный, и (x1, y1) и (x2, y2) — координаты двух точек.
*/

double lengthLine(Point one, Point two) {       // определение длины отрезка
	return sqrt(pow((two.X - one.X), 2) + pow((two.Y - one.Y), 2));
}

/*Дан луч, начинающийся в точке A(2, 3) и направлен в сторону точки B(5, 7). Нужно определить, лежит ли точка C(3, 5) на этом луче.
Найдем уравнение прямой, проходящей через точки A и B. Для этого можно воспользоваться формулой:
y = mx + b, где m — наклон прямой, а b — свободный член.
Наклон можно найти как разность координат узлов прямой, разделенную на разность их абсцисс:
m = (y2 — y1) / (x2 — x1). В нашем случае: m = (7 — 3) / (5 — 2) = 4 / 3.
Подставим значения A(2, 3) в уравнение прямой и проверим, выполняется ли оно:
3 = (4 / 3) * 2 + b, b = -2/3.
Подставим значения C(3, 5) в уравнение прямой и проверим, выполняется ли оно:
5 = (4 / 3) * 3 — 2 / 3, 5 = 4 — 2 / 3, 5 = 4 / 3.
Уравнение не выполняется, значит, точка C не лежит на луче AB.
*/

bool inLine(Line line, Point point) {           // проверка точки на принадлежность отрезку Line
	bool test = (point.Y == (line.aParam * point.X - line.bParam));
	return test;
}

vector<Point> genPointInLine(Line line, int countPoint) {    // генератор заданного количества точек расположенных на отрезке Line
	vector<Point> pArr;
	double stepX = abs(line.two.X - line.one.X) / countPoint;
	for (double x = line.one.X; x <= line.two.X; x += stepX) {
		double y = line.aParam * x + line.bParam;
		pArr.push_back(Point(x, y));
	}
	return pArr;
}
void displayPoint(vector<Point>& ptr) {
	cout << "Набор точек на линии разреза" << endl;
	for (Point p : ptr) {
		cout << "X: " << p.X <<" Y: " << p.Y << endl;
	}
}
Point* getPointfromArr(vector<Point>& ptr, int idx) {
	if (idx < ptr.size()) {
		return &ptr.at(idx);
	}
	else {
		return nullptr;
	}
}

