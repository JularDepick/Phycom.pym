/* Phycom.pym
 * Copyright: 1724834368@qq.com
 */

#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;

string seek_all_avars() {
	string respond = "\n变量列表:\n";

	return ((respond.size() <= 12) ? (respond + "空\n") : (respond));
}

string seek_the_avar(string varname) {

	if (!check_varname(varname)) {
		return ("非法变量名 \'" + varname + "\' !\n");
	}

	if (!check_var(varname)) {
		return ("找不到变量 \'" + varname + "\' !\n");
	}

	string respond = ("找到变量!\n" + varname + "=");

	return ("找不到变量 \'" + varname + "\' !\n");
}

string com1000_seekvar(vector<string> paras) {
	string varname = paras % 0;

	if (varname.empty()) {
		return seek_all_avars();
	} else {
		return seek_the_avar(varname);
	}
}