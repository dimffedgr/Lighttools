#ifndef _USERCONFIG_H
#define _USERCONFIG_H
#endif
#include<iostream>
#include<fstream>
using namespace std;
string Write(string config_choose) {
	return "huihui";
}
string Read(string config_choose) {
	if (config_choose == "FillByte") {
		string config;
		ifstream ReadConfig("Config.ltuc");
		ReadConfig >> config;
		return config;
	}
}