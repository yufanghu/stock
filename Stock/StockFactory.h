#pragma once
#include "Uncopyable.h"
#include <string>
#include <map>
#include <memory>

class CStockQuote;

struct tagStock{
	std::string market;
	std::string symbol;
	std::string exchange;
};

class CStockFactory : public CUncopyable
{
public:
	CStockFactory();
	~CStockFactory();

	std::shared_ptr<tagStock> get(const tagStock & aStock);
private:
	std::map<tagStock, std::shared_ptr<CStockQuote>> m_stocks;
};

