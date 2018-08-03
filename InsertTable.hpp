#pragma once
#include<string>
#include"TableType.hpp"
#include <occi.h>
#include<map>
#include<string>
#include "FieldType.hpp"
#include"FileType.hpp"
using namespace oracle::occi;
using namespace std;
class InsertTable
{
private:
	 string pattern = "" ;
	 const static int commitCount = 1000;
	 TableType tableType;
	 FileType fileType;
	 int AddCell(int key, string val) {}
	 map<string, FieldType> fieldMappings;

public:
	InsertTable(TableType p_type,FileType p_fileType) {}
	InsertTable() {}
	 int InsertRecord() {}
	 int InsertTable::AddRow(std::map<string, string> rec) {}
	 ~InsertTable() {}
};