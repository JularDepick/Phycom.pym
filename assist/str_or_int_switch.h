/* Phycom.pym
 * Copyright: 1724834368@qq.com
 */

#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;

long long int str_to_int(string s) {
	//string转int
	regex right("([0]|(-?[1-9]+[0-9]*))");
	if (!regex_match(s, right)) {
		//非法字符串
		return 0;
	}
	if (((s[0] == '-') && (s >= "-9223372036854775807")) || ((s[0] != '-') && (s >= "9223372036854775807"))) {
		//数值过大
		return 0;
	}

	bool post = 0;
	if (s[0] == '-') {
		post = 1;
		copy(s.begin() + 1, s.end(), s.begin());
		s.pop_back();
	}
	long long int num = 0;
	for (int i = 0; i < int(s.size()); i++) {
		num += (s[i] - 48);
		num *= 10;
	}
	return ((post ? (-num) : num) / 10);
}

string int_to_str(long long int num) {
	//int转string
	string s = "";
	bool post = 0;
	if (num < 0) {
		post = 1;
		num = -num;
	}
	for (; num > 0; num /= 10) {
		s.push_back(num % 10 + 48);
	}
	reverse(s.begin(), s.end());
	return (post ? ("-" + s) : s);
}
