#pragma once

#include <map>
class CStockDataSource
{
public:
	CStockDataSource();
	virtual ~CStockDataSource();

	void get_stocks();

	virtual void reorder();
	
	void change_positon(int from, int to);
	
	void subquote(int from, int to);

	void unsubquote(int from, int to);  

private:
	virtual void do_getstocks() = 0;

private:
	 
};

