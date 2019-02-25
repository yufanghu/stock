#include "stdafx.h"
#include "StockFactory.h"


CStockFactory::CStockFactory()
{
}


CStockFactory::~CStockFactory()
{
}

std::shared_ptr<tagStock> CStockFactory::get(const tagStock & aStock)
{
	return std::make_shared<tagStock>();
}
