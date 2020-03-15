#pragma once

#include <gtest/gtest.h>
#include "..\Crafting\FileProcessor.h"

struct FileProcessorTest : testing::Test
{
	FileProcessor* fileProcessor;
	FileProcessorTest()
	{
		fileProcessor = new FileProcessor();
	}
};

TEST_F(FileProcessorTest, BooleanCheck)
{
	bool test = fileProcessor->ItWorked();
	ASSERT_TRUE(test);
}