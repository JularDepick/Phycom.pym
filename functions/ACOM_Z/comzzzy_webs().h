/* Phycom.pym
 * Copyright: 1724834368@qq.com
 */

#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;

vector<pair<string, string>> webs_strs = {
	{
		"�ٶ�",
		"https://wap.baidu.com/"
	},
	{
		"����һ��",
		"https://yiyan.baidu.com/"
	},
	{
		"CSDN",
		"https://www.csdn.net/"
	},
	{
		"����̳�",
		"https://www.runoob.com/"
	},
	{
		"Github",
		"https://github.com/"
	},
	{
		"��������",
		"https://www.bilibili.com/"
	},
	{
		"��ɽ�ʰ�",
		"https://www.iciba.com/"
	},
	{
		"���߹��ߴ�ȫ",
		"https://www.lddgo.net/"
	},
	{
		"����ͼƬƴ��",
		"https://www.lddgo.net/image/stitching-image"
	},
	{
		"�����ĵ�ת��",
		"https://convertio.co/zh/document-converter/"
	},
	{
		"Github:JularDepick",
		"https://github.com/JularDepick"
	},
	{
		"Yuameng",
		"https://jualedepick.github.io/Yuameng/"
	},
	{
		"XJYOJ",
		"http://112.253.31.18:8213/"
	},
	{
		"�ơ�ԭ��",
		"https://ys.mihoyo.com/cloud/"
	},
	{
		"�ơ��������",
		"https://sr.mihoyo.com/cloud/"
	}
};

string comzzzy_webs() {

	while (1) {
		Sleep(10);
		system("cls");
		cout << Phycom_head << "The Webs starred\n" << endl;
		for (int i = 0; i < int(webs_strs.size()); i++) {
			cout << i + 1 << '.' << webs_strs[i].first << endl;
			cout << "    " << webs_strs[i].second << endl;
		}
		cout << "\n����������ֱ�Ӵ���Ӧ��ַ(exit�˳�):\n" << endl;
		string mad;
		cin >> mad;
		mad = str_to_lower(mad);

		if (mad == "exit") {
			break;
		}

		if (!str_is_number(mad)) {
			system("cls");
			cout << Phycom_head << "The Webs starred\n" << endl;
			for (int i = 0; i < int(webs_strs.size()); i++) {
				cout << i + 1 << '.' << webs_strs[i].first << endl;
				cout << "    " << webs_strs[i].second << endl;
			}
			cout << "\n�Ƿ�������" << endl;
			wait_hit();
			continue;
		}

		int idx = str_to_int(mad);

		if (idx <= 0 || idx > int(webs_strs.size())) {
			cout << "\n�Ƿ�������" << endl;
			wait_hit();
			continue;
		}
		idx--;
		string content = "start " + webs_strs[idx].second;
		system(content.data());
		cout << "\n���ʣ�" << webs_strs[idx].first << "  " << webs_strs[idx].second << endl << endl;

		wait_hit();
	}

	com0000_preset();
	string respond = "������webs\n";
	return respond;
}