#pragma once
#include "HttpCompact.h"
class CSpecialCompact : public CHttpCompact
{
public:
	CSpecialCompact();
	~CSpecialCompact();
private:
	virtual void do_reqdata();
};

