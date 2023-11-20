// Task1.h : включаемый файл для стандартных системных включаемых файлов
// или включаемые файлы для конкретного проекта.

#pragma once
#include "Line.h"
#include "Point.h"

Line scalpel(Point one, Point two);
void hemostat(Line line, Point one);
void suture(Line line, Point one, Point two);
void tweezers(Line line, Point one);
vector<Point> workPoints(Line line, int countPoints);

