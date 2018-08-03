#pragma once
#include"InsertTable.hpp"
#include"TableType.hpp"
class InsertUsage : InsertTable
{
public:
	InsertUsage():InsertTable(TableType::DIST_USAGE_STG1) {	}
	int InsertRecord() {}
	int AddRow() {}
	InsertUsage() {}
	~InsertUsage() {}
};