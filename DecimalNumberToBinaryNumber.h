#ifndef _DECIMALNUMBERTOBINARYNUMBER_H
#define _DECIMALNUMBERTOBINARYNUMBER_H
#endif
#include"UserConfig.h"
#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
using namespace std;
void Decimal_Number_To_Binary_Number() {
	//Vars.
	vector<int> number_bin;
	int number_bin_qty;
	int number_dec = 0;
	int res_0 = 0;
	int res_1 = 0;
	int remainder = 0;
	int fill_qty = 0;
	int byte_qty = 0;
	int left_qty = 0;
	int group_qty = 0;
	string config;
	string end;
	string like;
	//Input.
	cout << "十进制数转二进制数转换器-Notice：请阅读readme.txt以获取个人配置使用方法。 请输入一个十进制数";
	cin >> number_dec;
	//Get the binary number.
	res_0 = number_dec;
	res_1 = res_0;
	while (res_0 > 0) {
		remainder = res_0 % 2;
		number_bin.push_back(remainder);
		res_1 = res_0 / 2;
		res_0 = res_1;
	}
	//Output.
	config = Read("FillByte");
	if (config == "Y_FB") {
		number_bin_qty = number_bin.size();
		byte_qty = number_bin_qty / 8;
		if (number_bin_qty % 8 > 0) {
			byte_qty++;
		}
		byte_qty = byte_qty * 8;
		fill_qty = byte_qty - number_bin_qty;
		for (int fill_loop = 0; fill_loop < fill_qty; fill_loop++) {
			number_bin.push_back(0);
		}
		//Reverse the binary number.
		reverse(number_bin.begin(), number_bin.end());
		//Output.
		number_bin_qty = number_bin.size();
		cout << "[ " << number_dec << " ]" << "的二进制数为： ";
		cout << "[ ";
		for (int output = 0; output < number_bin_qty; output++) {
			if (output > 0 and output % 8 == 0) {
				cout << " ";
			}
			cout << number_bin[output];
		}
		cout << " ]";
		cout << endl;
		cout << "按b键返回……" << endl;
		cin >> end;
	}
	else if (config == "N_FB") {
		//Reverse the binary number.
		reverse(number_bin.begin(), number_bin.end());
		//Output.
		number_bin_qty = number_bin.size();
		left_qty = number_bin_qty % 8;
		cout << "[ " << number_dec << " ]" << "的二进制数为：";
		cout << "[ ";
		for (int output = 0; output < number_bin_qty; output++) {
			if ((number_bin_qty - output) % 8 == 0) {
				cout << " ";
			}
			cout << number_bin[output];
		}
		else if {
		cout << "严重错误：配置文件不准确或采用了无法读取的格式(ex:N-FB/n_FB等)\n-Program_err_code-02:Unknown Config Error";
		cout << "按b键返回……" << endl;
		cin >> end;
		}
	}
}