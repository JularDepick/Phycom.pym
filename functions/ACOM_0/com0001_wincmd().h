/* Phycom.pym
 * Copyright: 1724834368@qq.com
 */

#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;

const string hadruncmd = " 已执行,已返回Phycom.pym\n";
const string hadincmd = "已切换到Windows原生cmd模式,使用过程中键入命令\"exitcmd\"即可退出cmd并返回Phycom.pym模式!";
const string hadoutcmd = "已切换到Phycom.pym模式,如需再次使用Windows原生cmd模式,可键入命令\"wincmd\"!\n";

string com0001_wincmd(vector<string> &vecmd) {
	system("color 07");
	cout << "\n - - - - - - - - - - - - \n";
	flush_stdin();
	if (vecmd.size() && (vecmd[0].size())) {
		string cstr = "";
		for (int idx = 0; idx < vecmd.size(); idx++) {
			cstr += (vecmd[idx] + " ");
		}
		cstr += "\n\r";
		cout << endl << Phycom_head << endl;
		system(cstr.data());
		cstr.pop_back();
		cstr.pop_back();
		cstr.pop_back();
		return ("Windows cmd命令 " + cstr + hadruncmd);
	} else {
		cout << endl << Phycom_head << hadincmd << endl << endl;
		while (1) {
			cout << User_head;
			string str = getlinestr();
			string cmd = analysis(str)[0];
			if (str_to_lower(cmd) == "exitcmd") {
				break;
			} else if (str_to_lower(cmd) == "exit") {
				system("exit");
				break;
			} else if (str_to_lower(cmd) == "cmd") {
				cout << ("\n" + Phycom_head + "禁止的操作 \'cmd\' ! \n\n");
			} else {
				if (cmd.size()) {
					if (str_to_lower(cmd) == "cls") {
						flush_stdout();
					}
					cout << endl << Phycom_head;
					system(str.data());
				}
				cout << endl;
			}
		}
		cout << "\n - - - - - - - - - - - - \n";
		system("color 0A");
		return hadoutcmd;
	}
}