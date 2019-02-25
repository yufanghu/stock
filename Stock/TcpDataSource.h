#pragma once
#include "StockDataSource.h"

class CTcpDataSource : public CStockDataSource
{
public:
	CTcpDataSource();
	~CTcpDataSource();
private:
	virtual void do_getstocks() override;
};

