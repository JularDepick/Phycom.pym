/* Phycom.pym
 * Copyright: 1724834368@qq.com
 */

#pragma once
#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
using namespace std;

//包含顺序不可乱!!!
#include "defines.h"
#include "constants.h"
#include "assist.h"
#include "avars.h"
#include "functions.h"

int main () {
	com0000_preset();

	while (1) {
		flush_stdin();
		cout << User_head;                        //用户头标
		string inputs = getlinestr();             //读取一行(遇到换行/回车/文件结束符结束)

		vector<string> analstr = analysis(inputs);//解析输入
		string ywcmd = analstr[0];                //抓取命令符
		string cmd = str_to_lower(ywcmd);         //命令转小写
		//抓取参数列表
		vector<string> Paras = {};

		for (int idx = 1; (idx < analstr.size()) && (analstr.size()); idx++) {

			Paras.push_back(str_to_lower(analstr[idx]));
		}

		string respond = "";			         //返回字符串


		//命令查找
		ruif (cmd == _com0000) {
			respond = com0000_preset();
		}
		elif(cmd == _com0001) {
			respond = com0001_wincmd(Paras);
		}
		elif(cmd == _com0002) {
			respond = com0002_help(Paras);
		}
		elif(cmd == _com0003) {
			respond = com0003_phycom(Paras);
		}
		elif(cmd == _com0zzz) {
			respond = com0zzz_exit();
			// "exit" need "break"
			return 0;
		}
		elif(cmd == _com1000) {
			respond = com1000_seekvar(Paras);
		}
		elif(cmd == _com1001) {
			respond = com1001_checkvar(Paras);
		}
		elif(cmd == _com1002) {
			respond = com1002_setvar(Paras);
		}
		elif(cmd == _comzzzy) {
			respond = comzzzy_webs();
		}
		elif(cmd == _comzzzz) {
			respond = comzzzz_about();
		}
		ruse {
			respond = error_cmd(ywcmd);
		}


		//输出返回字符串
		if (respond.size()) {
			cout << endl << Phycom_head << respond << endl;
		} else {
			cout << endl;
		}
	}

	return 0;
}