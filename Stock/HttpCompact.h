#pragma once
class CHttpCompact
{
public:
	CHttpCompact();
	virtual ~CHttpCompact();

	void ReqData();
private:
	virtual void do_reqdata() = 0;
};



