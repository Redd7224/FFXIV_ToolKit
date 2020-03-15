#include "FileProcessor.h"

list<string> CreateListOfGear(string data);

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

void FileProcessor::SetFile(string filePath)
{
	this->path = filePath;
}

void FileProcessor::ProcessFile()
{
	ifstream inFile;
	inFile.open(this->path);

	if (inFile.is_open())
	{
		while (inFile)
		{
			string line;
			getline(inFile, line);
			this->data.append(line + '\n');
		}
	}
	CreateListOfGear(this->data);
}

list<string> FileProcessor::GetGear()
{
	return CreateListOfGear(this->data);
}

string FileProcessor::GetGearAtIndex(int index)
{
	list<string> listOfGear = CreateListOfGear(this->data);

	vector<string> processedGear;
	while (listOfGear.size() > 0)
	{
		string temp = listOfGear.front();
		processedGear.push_back(temp);
		listOfGear.pop_front();
	}

	return processedGear[index];
}

list<string> CreateListOfGear(string data)
{
	stringstream unprocessedData(data);
	string pieceOfGear;

	list<string> gearList;
	while (getline(unprocessedData, pieceOfGear, '\n'))
		gearList.push_back(pieceOfGear);

	return gearList;
}
