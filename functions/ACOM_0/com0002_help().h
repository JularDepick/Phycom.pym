/* Phycom.pym
 * Copyright: 1724834368@qq.com
 */

#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;

string help_text =
    "\n\
�����ĵ�\n\
  #���ǹ��� Phycom.pym �İ����ĵ�,���ǽ��ڴ��г��������Ϊ�����������ü��÷���\n\
  #�����ı���ʽ: ���� [����ֵ](�����б�)\n\
  #ʹ��ʱ,���� ����+�ո�+�����б�(�������Կո�ָ�)\n\
  #��*Ϊδ��ɻ򿪷�ָ��\n\
  \n\
  #ϵͳָ��\n\
    preset   [void](void)             ����Phycom����\n\
    exit     [void](void)             �˳�Phycom����\n\
    wincmd   [void](void)             �л���cmdģʽ\n\
    wincmd   [text](text)             ִ��cmd����\n\
    help     [text](void)             ��ȡ�����ĵ�\n\
    *help     [text](cmd)              ��ȡָ��������ϸ�����ĵ�\n\
  #����ָ��\n\
    seekvar  [text](void)             �鿴���б���\n\
    seekvar  [text](text)             ����ָ������\n\
    *setvar   [void](type,name)        ������ֵ��ʱ����\n\
    *setvar   [void](type,name,value)  ������ֵ��ʱ����\n\
    *setvarf  [void](type,name)        ������ֵ���ñ���\n\
    *setvarf  [void](type,name,value)  ������ֵ���ñ���\n\
    *assvar   [void](name,value)       ������ֵ\n\
    *chavar   [void](name,which,what)  ���ı�������\n\
    *delvar   [void](name)             ɾ������\n\
  #����ָ��\n\
    about     [void](void)             ��������Website\n\
    webs      [void](void)             �����ղ���վ\n\
    \n\
    ";

string com0002_help(vector<string> paras) {
	string parameter = paras % 0;

	if (parameter.empty()) {
		return help_text;
	} else {
		;
	}
	return NUSTR;
}

