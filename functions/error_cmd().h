/* Phycom.pym
 * Copyright: 1724834368@qq.com
 */

#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;

const string error_cmd_str = " 指令未定义或拼写错误!\n";

string error_cmd(string &str) {
	if (str.size()) {
		return ("\'" + str + "\'" + error_cmd_str);
	} else {
		return "";
	}
}