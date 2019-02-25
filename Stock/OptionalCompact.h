#pragma once
#include "HttpCompact.h"
class COptionalCompact : public CHttpCompact
{
public:
	COptionalCompact();
	~COptionalCompact();
private:
	virtual void do_reqdata();
};

