/* Phycom.pym
 * Copyright: 1724834368@qq.com
 */

#pragma once
#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
using namespace std;

//����˳�򲻿���!!!
#include "defines.h"
#include "constants.h"
#include "assist.h"
#include "avars.h"
#include "functions.h"

int main () {
	com0000_preset();

	while (1) {
		flush_stdin();
		cout << User_head;                        //�û�ͷ��
		string inputs = getlinestr();             //��ȡһ��(��������/�س�/�ļ�����������)

		vector<string> analstr = analysis(inputs);//��������
		string ywcmd = analstr[0];                //ץȡ�����
		string cmd = str_to_lower(ywcmd);         //����תСд
		//ץȡ�����б�
		vector<string> Paras = {};

		for (int idx = 1; (idx < analstr.size()) && (analstr.size()); idx++) {

			Paras.push_back(str_to_lower(analstr[idx]));
		}

		string respond = "";			         //�����ַ���


		//�������
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


		//��������ַ���
		if (respond.size()) {
			cout << endl << Phycom_head << respond << endl;
		} else {
			cout << endl;
		}
	}

	return 0;
}