#pragma once
#include "StockDataSource.h"
class CHttpDataSource : public CStockDataSource
{
public:
	CHttpDataSource();
	~CHttpDataSource();
private:
	virtual void do_getstocks() override;
};

