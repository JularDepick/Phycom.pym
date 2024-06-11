/* Phycom.pym
 * Copyright: 1724834368@qq.com
 */

#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;

/*
string alycmd(string &str) {
	string respond = "";
	for (int idx = 0; idx < int(str.size()); idx++) {
		if (str[idx] == ' ') {
			break;
		}
		respond.push_back(str[idx]);
	}
	return respond;
}

string alypara1(string &str) {
	string respond = "";
	return respond;
}

string alypara2(string &str) {
	string respond = "";
	return respond;
}

string alypara3(string &str) {
	string respond = "";
	return respond;
}*/

vector<string> analysis(string &str) {
	vector<string> respond = {};

	int idx = 0;
	for (; idx < int(str.size());) {
		for (; idx < int(str.size()); idx++) {
			//去除前导空格
			if (str[idx] != ' ') {
				break;
			}
		}

		string solid = "";
		for (; (idx < int(str.size())) && (str[idx] != ' '); idx++) {
			//抓取实体部分
			solid.push_back(str[idx]);
		}

		respond.push_back(solid);
	}

	respond.push_back("");   //避免空指令

	return respond;
}