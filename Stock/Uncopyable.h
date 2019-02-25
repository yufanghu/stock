#pragma once
class CUncopyable
{
public:
	CUncopyable();
	~CUncopyable();
private:
	CUncopyable (const CUncopyable &);
	CUncopyable & operator=(const CUncopyable &);
};

