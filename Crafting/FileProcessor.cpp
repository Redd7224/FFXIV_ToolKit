#include "FileProcessor.h"
#include <list>

bool FileProcessor::ItWorked()
{
	return true;
}

string FileProcessor::GetData()
{
	return this->data;
}

void FileProcessor::SetData(string data)
{
	this->data = data;
}

string FileProcessor::GetGear(int index)
{
	stringstream unprocessedData(this->data);
	string pieceOfGear;

	list<string> listOfGear;
	while (getline(unprocessedData, pieceOfGear, '\n'))
		listOfGear.push_back(pieceOfGear);

	vector<string> processedGear;

	while (listOfGear.size() > 0)
	{
		string temp = listOfGear.front();
		processedGear.push_back(temp);
		listOfGear.pop_front();
	}

	return processedGear[index];
}
