/* Phycom.pym
 * Copyright: 1724834368@qq.com
 */

#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;

bool str_is_number(string &s) {
	for (char ch : s) {
		if (ch <= '0' || '9' <= ch) {
			return 0;
		}
	}
	return 1;
}
