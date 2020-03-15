#include <iostream>
#include "..\Crafting\FileProcessor.h"

using namespace std;

int main()
{
	FileProcessor* fileProcessor = new FileProcessor();
	
	string filePath = "..\\..\\TestFiles\\CraftingItems.txt";
	fileProcessor->SetFile(filePath);
	fileProcessor->ProcessFile();

	for (int i = 0; i < fileProcessor->GetGear().size(); i++)
	{
		cout << fileProcessor->GetGearAtIndex(i) << endl;
	}

	system("pause");
	return 0;
}