/* Phycom.pym
 * Copyright: 1724834368@qq.com
 */

#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;

class avar {
	public:
		avar() {
			type = "";
			name = "";
			value = "";
			solid = false;
		}
		avar(string t, string n) {
			type = t;
			name = n;
			solid = false;
		}
		avar(string t, string n, string v) {
			type = t;
			name = n;
			value = v;
			solid = false;
		}
		void ensolid() {
			solid = true;
		}
		string Type() {
			return type;
		}
		string Name() {
			return name;
		}
		string Value() {
			return value;
		}
		bool Solid() {
			return solid;
		}
	private:
		/*
		  type: int,float,char,text ;
		  name: (([a-zA-Z]|[_])+([a-zA-Z0-9]|[_])*) ;
		  value: Be right from type ;
		  solid: That whether save this var in external memory files ;
		*/
		string type;
		string name;
		string value;
		bool solid;
};

vector<avar> AVARS = {};