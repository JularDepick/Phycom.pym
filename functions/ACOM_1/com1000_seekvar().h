/* Phycom.pym
 * Copyright: 1724834368@qq.com
 */

#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;

string seek_all_avars() {
	string respond = "\n�����б�:\n";

	return ((respond.size() <= 12) ? (respond + "��\n") : (respond));
}

string seek_the_avar(string varname) {

	if (!check_varname(varname)) {
		return ("�Ƿ������� \'" + varname + "\' !\n");
	}

	if (!check_var(varname)) {
		return ("�Ҳ������� \'" + varname + "\' !\n");
	}

	string respond = ("�ҵ�����!\n" + varname + "=");

	return ("�Ҳ������� \'" + varname + "\' !\n");
}

string com1000_seekvar(vector<string> paras) {
	string varname = paras % 0;

	if (varname.empty()) {
		return seek_all_avars();
	} else {
		return seek_the_avar(varname);
	}
}