#pragma once
class Plant
{
public:
	Plant();
	~Plant();

	virtual void grow();

private:

	int growth_time;
};

