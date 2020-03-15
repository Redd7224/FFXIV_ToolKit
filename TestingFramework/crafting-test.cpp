#pragma once

#include <gtest/gtest.h>
#include <string>
#include "..\Crafting\FileProcessor.h"

using namespace std;

struct FileProcessorTest : testing::Test
{
	FileProcessor* fileProcessor;
	FileProcessorTest()
	{
		fileProcessor = new FileProcessor();
	}

	~FileProcessorTest()
	{
		delete fileProcessor;
	}
};

TEST_F(FileProcessorTest, BooleanCheck)
{
	ASSERT_TRUE(fileProcessor->ItWorked());
}

TEST_F(FileProcessorTest, WhenGivenData_DataIsRead)
{
	string craftingData = "Straw Hat";
	fileProcessor->SetData(craftingData);
	ASSERT_EQ(craftingData, fileProcessor->GetData());
}

TEST_F(FileProcessorTest, WhenGivenDataWithTwoItems_ItemsAreSeparated)
{
	string craftingData = "Straw Hat\nCap";
	fileProcessor->SetData(craftingData);

	string expectedResult[] = { "Straw Hat", "Cap" };

	ASSERT_EQ(expectedResult[0], fileProcessor->GetGear(0));
	ASSERT_EQ(expectedResult[1], fileProcessor->GetGear(1));
}