/* Phycom.pym
 * Copyright: 1724834368@qq.com
 */

#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;

string com0003_phycom(vector<string> paras) {
	string parameter = paras.at(1);
	string respond = "";
	if (parameter.empty()) {
		if (!access(".\\Phycom.exe", F_OK)) {
			system("start .\\Phycom.exe");
		} else {
			respond = "\'Phycom.exe\'���򲻴���!���Ƿ�˽�Դ۸���Phycom����Ŀ�ִ���ļ���?\n";
		}
		return respond;
	} else {
		;
	}

	return respond;
}