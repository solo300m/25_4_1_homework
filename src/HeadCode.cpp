#include "Header.h"

#include <iostream>
#include <locale.h>
using namespace std;



Line scalpel(Point one, Point two){
	setlocale(LC_ALL, "Russian");
	Line line = initLine(one, two);
	cout << "Сделан надрез скальпилем " << endl;
	cout << "Координаты: начальная точка (" << line.one.X << " " << line.one.Y << ") конечная точка (" << line.two.X << " " << line.two.Y << ") " << endl;
	cout << "Длина разреза " << lengthLine(line.one, line.two) << " mm." << endl;
	return line;
}
vector<Point> workPoints(Line line, int countPoints) {
	setlocale(LC_ALL, "Russian");
	vector<Point> arr = genPointInLine(line, countPoints);
	vector<Point>& ptr = arr;
	cout << "Рекомендуемый набор точек для обработки." << endl;
	displayPoint(arr);
	return arr;
}
void hemostat(Line line, Point one){
	setlocale(LC_ALL, "Russian");
	if (inLine(line, one)) {
		cout << "Точка находится на линии разреза." << endl;
		cout << "Зажим установлен на точку с координатами: " << one.X << ":" << one.Y << endl;
	}
	else {
		cout << "Точка не находится на линии разреза. Требуется уточнение координат." << endl;
	}
}
void suture(Line line, Point one, Point two){
	setlocale(LC_ALL, "Russian");
	if ((one.X == line.one.X && one.Y == line.one.Y) && (two.X == line.two.X && two.Y == line.two.Y)) {
		cout << "Разрез зашит между точками: начало - " << one.X << ":" << one.Y << ", конец - " << two.X <<":" << two.Y << endl;
		cout << "Операция завершена!" << endl;
	}
	else {
		cout << "Координаты для шва не совпадают с координатами разреза. Внесите изменения." << endl;
	}
}
void tweezers(Line line, Point one){
	setlocale(LC_ALL, "Russian");
	if (inLine(line, one)) {
		cout << "Точка находится на линии разреза." << endl;
		cout << "Пинцетом сжата точка разреза с координатами: " << one.X << ":" << one.Y << endl;
	}
	else {
		cout << "Точка не находится на линии разреза. Требуется уточнение координат." << endl;
	}
}