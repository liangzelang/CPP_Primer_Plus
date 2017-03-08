#include "tebten.h"
#include <iostream>
using namespace std;

//下面这种方法也可以
/*TableTennisPlayer::TableTennisPlayer(const string & fn , const string & ln , bool ht)
{
	firstname = fn;
	lastname = ln;
	hasTable = ht;
}*/

// 成员出事化列表 推荐使用
TableTennisPlayer::TableTennisPlayer(const string & fn, const string & ln, bool ht) : firstname(fn), lastname(ln), hasTable(ht)
{
	
}

TableTennisPlayer::~TableTennisPlayer()
{
	
}

void TableTennisPlayer::Name() const  //不改变这个类
{
	std::cout << lastname << ", " << firstname << endl;
}