#include "stdafx.h"
#include "StockList.h"
#include "StockDataSource.h"


CStockList::CStockList(const std::string & exchange, const std::string & market)
{
}


CStockList::~CStockList()
{
}

void CStockList::SetDataSource(std::shared_ptr<CStockDataSource> pDataSource)
{
	m_dataSourcePtr = pDataSource;
}

void CStockList::get_stocks()
{
	m_dataSourcePtr->get_stocks();
}
