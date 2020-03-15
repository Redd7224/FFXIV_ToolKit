#include "FileProcessor.h"

bool FileProcessor::ItWorked()
{
	return true;
}

std::string FileProcessor::GetData()
{
	return this->data;
}

void FileProcessor::SetData(std::string data)
{
	this->data = data;
}
