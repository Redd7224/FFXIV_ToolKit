#pragma once
#include<string>

class FileProcessor
{
public:
	bool ItWorked();

	std::string GetData();
	void SetData(std::string);

private:
	std::string data;
};
