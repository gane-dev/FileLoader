#include "stdafx.h"
#include "FieldType.hpp"
#include "TableType.hpp"
#include "FileType.hpp"
#include <occi.h>
//#include <string>
//#include <string_view>
using namespace oracle::occi;
using namespace std;
#include <map>
class CommonObjects
{
private:
	static string archivePath;
	static string filePath;
	static string errorPath;
	static  string connectionstring;
	static   string qry_excel_master;
	static string qry_excel_option_master;
	static string qry_excel_short_master;
	static string qry_item;
	static string qry_usage;
	static string qry_opt_usage;
	static string qry_cust;
	static string qry_log;
	static string qry_control;
	static string qry_track;

	static  std::map<string, FieldType> map_excel_master;
	static  std::map<string, FieldType> map_excel_option_master;
	static  std::map<string, FieldType> map_excel_short_master;
	static  std::map<string, FieldType> map_item;
	static  std::map<string, FieldType> map_cust;
	static  std::map<string, FieldType> map_usage;

	static  std::map<string, FieldType> map_option_usage;
	static  std::map<string, int> dataTypes;

public:
	static const std::map<string, FieldType> FieldMappings(TableType type, FileType fileType) {	}
	static const string& TableQuery(TableType type, FileType fileType) {}
	static const map<string, int> GetDataType() {}
};