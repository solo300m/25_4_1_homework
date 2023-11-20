#include "Header.h"

#include <iostream>
#include <locale.h>
using namespace std;



Line scalpel(Point one, Point two){
	setlocale(LC_ALL, "Russian");
	Line line = initLine(one, two);
	cout << "������ ������ ���������� " << endl;
	cout << "����������: ��������� ����� (" << line.one.X << " " << line.one.Y << ") �������� ����� (" << line.two.X << " " << line.two.Y << ") " << endl;
	cout << "����� ������� " << lengthLine(line.one, line.two) << " mm." << endl;
	return line;
}
vector<Point> workPoints(Line line, int countPoints) {
	setlocale(LC_ALL, "Russian");
	vector<Point> arr = genPointInLine(line, countPoints);
	vector<Point>& ptr = arr;
	cout << "������������� ����� ����� ��� ���������." << endl;
	displayPoint(arr);
	return arr;
}
void hemostat(Line line, Point one){
	setlocale(LC_ALL, "Russian");
	if (inLine(line, one)) {
		cout << "����� ��������� �� ����� �������." << endl;
		cout << "����� ���������� �� ����� � ������������: " << one.X << ":" << one.Y << endl;
	}
	else {
		cout << "����� �� ��������� �� ����� �������. ��������� ��������� ���������." << endl;
	}
}
void suture(Line line, Point one, Point two){
	setlocale(LC_ALL, "Russian");
	if ((one.X == line.one.X && one.Y == line.one.Y) && (two.X == line.two.X && two.Y == line.two.Y)) {
		cout << "������ ����� ����� �������: ������ - " << one.X << ":" << one.Y << ", ����� - " << two.X <<":" << two.Y << endl;
		cout << "�������� ���������!" << endl;
	}
	else {
		cout << "���������� ��� ��� �� ��������� � ������������ �������. ������� ���������." << endl;
	}
}
void tweezers(Line line, Point one){
	setlocale(LC_ALL, "Russian");
	if (inLine(line, one)) {
		cout << "����� ��������� �� ����� �������." << endl;
		cout << "�������� ����� ����� ������� � ������������: " << one.X << ":" << one.Y << endl;
	}
	else {
		cout << "����� �� ��������� �� ����� �������. ��������� ��������� ���������." << endl;
	}
}