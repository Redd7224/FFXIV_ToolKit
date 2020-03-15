#pragma once
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <list>

using namespace std;

class FileProcessor
{
public:
	bool ItWorked();

	string GetData();
	void SetData(string);
	void SetFile(string);

	void ProcessFile();

	list<string> GetGear();
	string GetGearAtIndex(int);

private:
	string data;
	string path;
};
