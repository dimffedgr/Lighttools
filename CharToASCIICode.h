#ifndef _CHARTOASCIICODE_H
#define _CHARTOASCIICODE_H
#endif
#include<iostream>
using namespace std;
int Char_To_ASCII_Code(string userchoose) {
	//Var.
	string end;
	if (userchoose == "CharToASCIICode") {
		//Var.
		int ascii_code_e;
		char the_char_e;
		//Input.
		cout << "输入您想要转换的字符-请不要输入汉字和其他奇奇怪怪的符号哦～ ";
		cin >> the_char_e;
		//Coversion.
		ascii_code_e = the_char_e;
		cout << "[ " << the_char_e << " ]" << "的ASCII Code" << ascii_code_e << endl;
		cout << "按b键返回" << endl;
		cin >> end;
		return ascii_code_e;
	}
	else if (userchoose == "ASCIICodeToChar") {
		//Var.
		int ascii_code_d;
		char the_char_d;
		//Input.
		cout << "输入您想要转换的 ASCII Code: ";
		cin >> ascii_code_d;
		//Coversion.
		the_char_d = ascii_code_d;
		cout << "[ " << ascii_code_d << " ]" << "的字符： [ " << the_char_d << " ]" endl;
		cout << "Press any key to continue..." << endl;
		cin >> end;
		return the_char_d;
	}
}