#pragma once
#include<string>
#include <experimental/filesystem>
#include <filesystem>  
#include "TableType.hpp"
#include "FileType.hpp"
using namespace std;
using namespace std::experimental::filesystem::v1;
class TextFileReader
{
	const path& filePath;
	string delimiter;
	TableType tableType;
	FileType fileType;
public:
	TextFileReader(const path& p_filePath,TableType p_tableType, FileType p_fileType) :
		filePath(p_filePath), tableType(p_tableType),fileType(p_fileType)
	{}
	string& ProcessData()
	{}
};