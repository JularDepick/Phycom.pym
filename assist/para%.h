/* Phycom.pym
 * Copyright: 1724834368@qq.com
 */

#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;

string operator%(vector<string> &sv, int pos) {
	if (sv.size() >= pos + 1) {
		return (sv[pos]);
	} else {
		return "";
	}
}
