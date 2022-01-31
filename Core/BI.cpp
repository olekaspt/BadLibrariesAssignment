
#include "BI.h"
#include <string>
#include <iostream>

static BusinessIntelligence* theBusinessIntelligence = nullptr;

	BusinessIntelligence::BusinessIntelligence()
	{

	}

	void BusinessIntelligence::LogSomething(std::string something)
	{
		std::cout << "BusinessIntelligence LogSomething " << something <<  std::endl;
	}

	BusinessIntelligence* GetBusinessIntelligence()
	{
		return theBusinessIntelligence;
	}



