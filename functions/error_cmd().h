/* Phycom.pym
 * Copyright: 1724834368@qq.com
 */

#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;

const string error_cmd_str = " ָ��δ�����ƴд����!\n";

string error_cmd(string &str) {
	if (str.size()) {
		return ("\'" + str + "\'" + error_cmd_str);
	} else {
		return "";
	}
}