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
帮助文档\n\
  #这是关于 Phycom.pym 的帮助文档,我们将在此列出所有命令并为您解释其作用及用法。\n\
  #以下文本格式: 命令 [返回值](参数列表)\n\
  #使用时,键入 命令+空格+参数列表(各参数以空格分隔)\n\
  #标*为未完成或开放指令\n\
  \n\
  #系统指令\n\
    preset   [void](void)             重置Phycom窗口\n\
    exit     [void](void)             退出Phycom程序\n\
    wincmd   [void](void)             切换到cmd模式\n\
    wincmd   [text](text)             执行cmd命令\n\
    help     [text](void)             获取帮助文档\n\
    *help     [text](cmd)              获取指定命令详细帮助文档\n\
  #变量指令\n\
    seekvar  [text](void)             查看所有变量\n\
    seekvar  [text](text)             查找指定变量\n\
    *setvar   [void](type,name)        创建空值临时变量\n\
    *setvar   [void](type,name,value)  创建有值临时变量\n\
    *setvarf  [void](type,name)        创建空值永久变量\n\
    *setvarf  [void](type,name,value)  创建有值永久变量\n\
    *assvar   [void](name,value)       变量赋值\n\
    *chavar   [void](name,which,what)  更改变量属性\n\
    *delvar   [void](name)             删除变量\n\
  #其他指令\n\
    about     [void](void)             访问作者Website\n\
    webs      [void](void)             访问收藏网站\n\
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

