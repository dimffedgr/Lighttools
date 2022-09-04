#ifndef _CIRCUMFRERNCEANDCIRCLEAREACALCULATOR_H
#define _CIRCUMFRERNCEANDCIRCLEAREACALCULATOR_H
#endif
#include<iostream>
using namespace std;
void Circumference_And_Circle_Area() {
	//Var.
	double radius = 0;
	double circumference = 0;
	double circle_area = 0;
	string end;
	//Input.
	cout << "球体周长计算器-请输入您要计算的球体半径： ";
	//Get circumference.
	circumference = radius * 3.1415;
	//Get circle area.
	circle_area = (radius * radius) * 3.1415;
	//Output.The circumference of this circle is about:
	cout << " " << circumference << endl;
	cout << "这个圆的周长大约是: " << circle_area << endl;
	cout << "请按B键返回……" << endl;
	cin >> end;
}
