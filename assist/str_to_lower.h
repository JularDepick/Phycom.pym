/* Phycom.pym
 * Copyright: 1724834368@qq.com
 */

#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;

string str_to_lower(string &str) {
	string respond = "";

	for (int idx = 0; idx < int(str.size()); idx++) {
		if (str[idx] >= 65 && str[idx] <= 90) {
			respond.push_back(str[idx] + 32);
		} else {
			respond.push_back(str[idx]);
		}
	}

	return respond;
}