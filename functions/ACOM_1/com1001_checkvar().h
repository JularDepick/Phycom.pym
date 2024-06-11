/* Phycom.pym
 * Copyright: 1724834368@qq.com
 */

#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;

string com1001_checkvar(vector<string> paras) {
	string varname = paras % 0;
	if (varname.empty()) {
		return "指令 \'checkvar\' : 缺少参数 _varname !\n";
	} else {
		if (!check_varname(varname)) {
			return ("非法变量名 \'" + varname + "\' !\n");
		} else {
			return ("变量 \'" + varname + "\' " + (check_var(varname) ? "已" : "未") + "定义!\n");
		}
	}
}
