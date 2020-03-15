#pragma once

#include <gtest/gtest.h>
#include <iostream>
#include "..\Crafting\FileProcessor.h"

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
	std::string craftingData = "Straw Hat";
	fileProcessor->SetData(craftingData);
	ASSERT_EQ(craftingData, fileProcessor->GetData());
}