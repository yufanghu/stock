#pragma once

#include "HttpCompact.h"
class CFutureCompact : public CHttpCompact
{
public:
	CFutureCompact();
	~CFutureCompact();
private:
	virtual void do_reqdata();
};

