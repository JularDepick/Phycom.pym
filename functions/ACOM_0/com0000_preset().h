/* Phycom.pym
 * Copyright: 1724834368@qq.com
 */

#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;

const string com0000_presetstr =
    "\
<Phycom.pym>\n\
  -Version:    1.0.0\n\
  -Update:     2024/06/11\n\
  -Copyright:  1724834368@qq.com\n\
  -Website:    https://JularDepick.github.io/\n\
  -键入 \'help\' 以寻求帮助!\n\n\
";

string com0000_preset() {
	SetConsoleTitleA("Phycom.pym");
	/*
	HICON hIcon = LoadIcon(GetModuleHandle(NULL), MAKEINTRESOURCE(IDC_ICON));
	SendMessage(Winptr, WM_SETICON, ICON_BIG, (LPARAM)hIcon);
	SendMessage(Winptr, WM_SETICON, ICON_SMALL, (LPARAM)hIcon);
	*/

	//窗口大小及缓冲区修复
	system("mode con: cols=100 lines=30");
	SetConsoleScreenBufferSize(GetStdHandle(STD_OUTPUT_HANDLE), {100, 400});

	system("color 0A");
	system("cls");

	/* Read memory files */
	ifstream fin("vars.pycom", ios::in);
	if (fin.good()) {
		/* do it */
	}

	cout << com0000_presetstr;

	return "";
}