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
		return "ָ�� \'checkvar\' : ȱ�ٲ��� _varname !\n";
	} else {
		if (!check_varname(varname)) {
			return ("�Ƿ������� \'" + varname + "\' !\n");
		} else {
			return ("���� \'" + varname + "\' " + (check_var(varname) ? "��" : "δ") + "����!\n");
		}
	}
}
