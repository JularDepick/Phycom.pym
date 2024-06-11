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
		"百度",
		"https://wap.baidu.com/"
	},
	{
		"文心一言",
		"https://yiyan.baidu.com/"
	},
	{
		"CSDN",
		"https://www.csdn.net/"
	},
	{
		"菜鸟教程",
		"https://www.runoob.com/"
	},
	{
		"Github",
		"https://github.com/"
	},
	{
		"哔哩哔哩",
		"https://www.bilibili.com/"
	},
	{
		"金山词霸",
		"https://www.iciba.com/"
	},
	{
		"在线工具大全",
		"https://www.lddgo.net/"
	},
	{
		"在线图片拼接",
		"https://www.lddgo.net/image/stitching-image"
	},
	{
		"在线文档转换",
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
		"云·原神",
		"https://ys.mihoyo.com/cloud/"
	},
	{
		"云·星穹铁道",
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
		cout << "\n请输入索引直接打开相应网址(exit退出):\n" << endl;
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
			cout << "\n非法索引！" << endl;
			wait_hit();
			continue;
		}

		int idx = str_to_int(mad);

		if (idx <= 0 || idx > int(webs_strs.size())) {
			cout << "\n非法索引！" << endl;
			wait_hit();
			continue;
		}
		idx--;
		string content = "start " + webs_strs[idx].second;
		system(content.data());
		cout << "\n访问：" << webs_strs[idx].first << "  " << webs_strs[idx].second << endl << endl;

		wait_hit();
	}

	com0000_preset();
	string respond = "已跳出webs\n";
	return respond;
}