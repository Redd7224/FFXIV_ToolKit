#pragma once
#include<string>
#include<sstream>
#include<vector>
#include <list>

using namespace std;

class FileProcessor
{
public:
	bool ItWorked();

	string GetData();
	void SetData(string);

	list<string> GetGear();
	string GetGearAtIndex(int);

private:
	string data;
};
