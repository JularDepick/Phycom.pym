/* Phycom.pym
 * Copyright: 1724834368@qq.com
 */

#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;

bool check_var(string &varname) {
	//变量查存
	for (int idx = 0; idx < AVARS.size(); idx++) {
		if (AVARS[idx].Name() == varname) {
			return 1;
		}
	}
	return 0;
}

bool check_varname(string prename) {
	//变量名合法性检查
	if (prename.size() > 1024) {
		//变量名过长
		return 0;
	}
	if (prename.empty()) {
		//空变量名
		return 0;
	}
	regex restr("(([a-zA-Z]|[_])+([a-zA-Z0-9]|[_])*)");
	return (regex_match(prename, restr));
}

bool check_vartype(string pretype) {
	if (pretype == "int") {
		return 1;
	}
	if (pretype == "bool") {
		return 1;
	}
	if (pretype == "float") {
		return 1;
	}
	if (pretype == "char") {
		return 1;
	}
	if (pretype == "text") {
		return 1;
	}
	return 0;
}

bool check_value(string vartype, string varvalue) {
	if (vartype == "int") {
		regex intreg("(([0])|([-]?[1-9]+[0-9]*))");
		return (regex_match(varvalue, intreg));
	}
	if (vartype == "bool") {
		return (varvalue == "yes" || varvalue == "no" || varvalue == "true" || varvalue == "false" || varvalue == "1"
		        || varvalue == "0");
	}
	if (vartype == "float") {
		regex floatreg("((([0])|([-]?[1-9]+[0-9]*))|([-]?[0][.][1-9]+)|([0][.][0-9]+)|([-]?[1-9]+[0-9]*[.][0-9]+))");
		return (regex_match(varvalue, floatreg));
	}
	if (vartype == "char") {
		return (varvalue.size() == 1 || (varvalue.size() == 2 && (varvalue[0] >= 128 || varvalue[0] < 0)));
	}
	if (vartype == "text") {
		return 1;
	}
	return 0;
}

void _upper_the_intvar(string varname) {
	//把指定int变量放到更大一级容器内
	//查存、寻找、进级
}