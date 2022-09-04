#include"MaximumCommonFactorAndLeastCommonMultipleCalculator.h"
#include"DecimalNumberToBinaryNumber.h"
#include"CharToASCIICode.h"
#include"CircumferenceAndCircleAreaCalculator.h"
#include"About.h"
#include<iostream>
using namespace std;
int main() {
	//Vars.
	string choose;
	//Readme
	cout << "输入\"list\" 以查看我们提供的所有工具" << endl;
	cout << "输入 \"exit\" 即退出" << endl;
	cout << "输入 \"about\" 可以了解本软件的" << endl;
	cout << "如果已经了解了这些工具的名字，只需打出你所需要的工具名称即可使用对应功能。" << endl;
	//Give tools to users.
	while (true) {
		cout << "LightTools >> ";
		cin >> choose;
		if (choose == "list") {
			cout << "MaxCommonFactorFind" << endl;
			cout << "LeastCommonMultipleFind" << endl;
			cout << "DecNumberToBinNumber" << endl;
			cout << "ASCIICodeToChar" << endl;
			cout << "CharToASCIICode" << endl;
			cout << "CircumferenceAndCircleArea" << endl;
		}
		else if (choose == "MaxCommonFactorFind"||choose == "LeastCommonMultipleFind") {
		    Find_Max_Common_Factor_And_Least_Common_Multiple(choose);
		}
		else if (choose == "DecNumberToBinNumber") {
			Decimal_Number_To_Binary_Number();
		}
		else if (choose == "CharToASCIICode"||choose == "ASCIICodeToChar") {
			Char_To_ASCII_Code(choose);
		}
		else if (choose == "CircumferenceAndCircleArea") {
			Circumference_And_Circle_Area();
		}
		else if (choose == "exit") {
			break;
		}
		else if (choose == "about") {
			About();
		}
		else {
			cout << "你刚才输入了无效工具名称，命令。\n-Program_err_code-01:Unknown name or function." << endl;
		}
	}
}