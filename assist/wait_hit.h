/* Phycom.pym
 * Copyright: 1724834368@qq.com
 */

#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;

void wait_hit() {
	while (1) {
		if (_kbhit()) {
			break;
		}
	}
}
