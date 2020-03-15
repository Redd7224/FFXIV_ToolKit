#pragma once
#include<string>
#include<sstream>
#include<vector>

using namespace std;

class FileProcessor
{
public:
	bool ItWorked();

	string GetData();
	void SetData(string);

	string GetGear(int);

private:
	string data;
};
