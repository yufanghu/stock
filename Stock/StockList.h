#pragma once

#include <string>
#include <memory>

class CStockDataSource;

class CStockList
{
public:
	CStockList(const std::string & exchange, const std::string & market);
	~CStockList();

	void SetDataSource(std::shared_ptr<CStockDataSource> pDataSource);

	void get_stocks();
	
private:
	std::shared_ptr<CStockDataSource> m_dataSourcePtr;
};



