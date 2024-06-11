/* Phycom.pym
 * Copyright: 1724834368@qq.com
 */

#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;

string com1002_setvar(vector<string> paras) {
	/*if (paras.empty()) {
		return "指令 \'setvar\' 缺少参数 \'type\' \'name\' \'value\'\n";
	}*/

	//get
	string vartype = paras % 0;
	vartype = str_to_lower(vartype);
	string varname = paras % 1;
	string varvalue = paras % 2;

	//match had
	if (vartype.empty() && varname.empty()) {
		return "指令 \'setvar\' 缺少参数 \'type\' \'name\'\n";
	} else if (varname.empty()) {
		return "指令 \'setvar\' 缺少参数 \'name\'\n";
	}

	//match right
	if (!check_vartype(vartype)) {
		return "指令 \'setvar\' 非法参数 \'type\'\n";
	}
	if (!check_varname(varname)) {
		return "指令 \'setvar\' 非法参数 \'name\'\n";
	}
	if (!check_value(vartype, varvalue) && varvalue.size()) {
		return "指令 \'setvar\' 非法参数 \'value\'\n";
	}
	return "";
}