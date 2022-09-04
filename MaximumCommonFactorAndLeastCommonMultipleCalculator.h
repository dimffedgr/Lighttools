#ifndef _MAXIMUMCOMMONFACTORANDLEASTCOMMONMULTIPLECALCULATOR_H
#define _MAXIMUMCOMMONFACTORANDLEASTCOMMONMULTIPLECALCULATOR_H
#endif
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int Find_Max_Common_Factor_And_Least_Common_Multiple(string userchoose) {
	//Vars.
	vector<int> numbers;
	vector<int> factors;
	vector<int> common_factors;
	vector<int> factors_sorted;
	vector<int> remainders;
	int numbers_qty = 0;
	int remainders_qty = 0;
	int factors_qty = 0;
	int number = 0;
	int remainder_0 = 0;
	int remainder_1 = 0;
	int number_get;
	int res_0;
	int count_0 = 0;
	int max_common_factor = 0;
	int least_common_multiple = 0;
	string end;
	//Input.
	cout << "请输入您所需要计算的数字个数： ";
	cin >> numbers_qty;
	numbers_qty++;
	for (int input = 1; input < numbers_qty; input++) {
		cout << "Your number " << input << ": ";
		cin >> number;
		numbers.push_back(number);
	}
	if {
		numbers_qty == 0
		cont <<"执行被阻止：请不要输入0.否则后果无法预料。\n-Program_err_code-03:Do not input 0";
	}
	//Get every number.
	numbers_qty--;
	for (int get = 0; get < numbers_qty; get++) {
		number_get = numbers[get];
		//Find factors.
		res_0 = number_get + 1;
		for (int find_factor = 1; find_factor < res_0; find_factor++) {
			remainder_0 = number_get % find_factor;
			if (remainder_0 == 0) {
				factors.push_back(find_factor);
			}
		}
	}
	//Sort the factors.
	sort(factors.begin(), factors.end());
	//Var.
	factors_qty = factors.size();
	//Find maximum common factor.
	for (int common_factor_loop_0 = 0; common_factor_loop_0 < factors_qty; common_factor_loop_0++) {
		int common_factor_check_0 = factors[common_factor_loop_0];
		count_0 = 0;
		for (int common_factor_loop_1 = 0; common_factor_loop_1 < factors_qty; common_factor_loop_1++) {
			int common_factor_check_1 = factors[common_factor_loop_1];
			if (common_factor_check_0 == common_factor_check_1) {
				count_0++;
				if (count_0 == numbers_qty) {
					common_factors.push_back(common_factor_check_1);
				}
			}
		}
	}
	//Get max common factors.
	max_common_factor = common_factors.back();
	if (userchoose == "MaxCommonFactorFind") {
		//Output.
		cout << "[ ";
		for (int output = 0; output < numbers_qty; output++) {
			cout << numbers[output];
			if (numbers[output] != numbers.back()) {
				cout << ", ";
			}
		}
		cout << " ]" << "的最大公因数为: " << max_common_factor << endl;
		cout << "按b键返回。" << endl;
		cin >> end;
		return max_common_factor;
	}
	else if (userchoose == "LeastCommonMultipleFind") {
		for (int remainder_loop = 0; remainder_loop < numbers_qty; remainder_loop++) {
			remainder_1 = numbers[remainder_loop] / max_common_factor;
			remainders.push_back(remainder_1);
		}
		remainders_qty = remainders.size();
		least_common_multiple = max_common_factor;
		for (int least_common_factor_loop = 0; least_common_factor_loop < remainders_qty; least_common_factor_loop++) {
			least_common_multiple = least_common_multiple * remainders[least_common_factor_loop];
		}
		//Output.
		cout << "[ ";
		for (int output = 0; output < numbers_qty; output++) {
			cout << numbers[output];
			if (numbers[output] != numbers.back()) {
				cout << ", ";
			}
		}
		cout << " ]" << "的最小公倍数： " << least_common_multiple << endl;
		cout << "按b键返回。" << endl;
		cin >> end;
		return least_common_multiple;
	}
}