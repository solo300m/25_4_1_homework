// Task1.cpp: ���������� ����� ����� ��� ����������.
//

#include "Header.h"

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	Point p1, p2;
	Line line;
	vector<Point> wPoints;
	int countPoints = 3;
	cout << "������� ����� ������ ��������� ����� �������:" << endl;
	cin >> p1.X >> p1.Y;
	cout << "������� ����� ������ �������� ����� �������:" << endl;
	cin >> p2.X >> p2.Y;

	/*p1.X = 3.0;
	p1.Y = 5.0;
	p2.X = 9.0;
	p2.Y = 15.0;*/
	line = scalpel(p1, p2);
	cout << "����� ��������������� ������� �����: " << lengthLine(line.one, line.two)<<" mm. " << endl;
	cout << "������� ���������� ����� ���������/��� ";
	cin >> countPoints;
	wPoints = workPoints(line, countPoints);
	for (Point p : wPoints) {
		tweezers(line, p);
		hemostat(line, p);
	}
	suture(line, line.one, line.two);

	return 0;
}
