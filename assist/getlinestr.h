/* Phycom.pym
 * Copyright: 1724834368@qq.com
 */

#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;

string getlinestr() {
	string respond = "";
	/*while (1) {
		if (_kbhit) {
			while (1) {
				char ch = getchar();
				if (ch == '\n' || ch == '\r') {
					return respond;
				}
				respond.push_back(ch);
			}
		}
	}*/
	while (1) {
		char ch = getchar();
		if (ch == '\r' || ch == '\n') {
			break;
		} else {
			respond.push_back(ch);
		}
	}
	return respond;
}