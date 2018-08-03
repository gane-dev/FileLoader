#include<string>
#include <experimental/filesystem>
#include <filesystem>  
#include"TextFileReader.hpp"
#include<string>
#include<fstream>
#include<vector>
#include<boost/algorithm/string.hpp>
#include<map>
#include <boost/foreach.hpp>
#include"InsertTable.hpp"
#include"InsertUsage.hpp"
#include"FileType.hpp"
using namespace boost;
using namespace std;
using namespace std::experimental::filesystem::v1;
TextFileReader::TextFileReader(const path& p_filePath, TableType p_tableType, FileType p_fileType) :
	filePath(p_filePath), tableType(p_tableType), fileType(p_fileType)
{
	switch (fileType)
	{
	case FileType::TEXT_BANG_CUSTOMER:
	{
		delimiter = '!';
		break;
	}
	case FileType::TEXT_PIPE_CUSTOMER:
	{
		delimiter = '|';
		break;
	}
	default:
	{
		delimiter = ',';
	}
	}
}
string &TextFileReader::ProcessData()
{
	std::ifstream file(filePath);
	std::string line = "";
	std::vector<string>dataList;
	map<int, string> result;
	unique_ptr<InsertTable> insertRecords;
	switch (tableType)
	{
	case TableType::DIST_USAGE_STG1:
		{
		insertRecords = make_unique<InsertTable>(new InsertUsage(fileType));
		break;
		}
	}
	while (getline(file,line))
	{
		vector<string> vec;
		split(vec, line, is_any_of(delimiter));
		int keyIndex = 1;
		BOOST_FOREACH(string token, vec)
		{
			result[keyIndex] = token;
			keyIndex++;
		}
		int result = insertRecords->AddRow();
	}
	file.close();
} 
