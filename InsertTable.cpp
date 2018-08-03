#include "stdafx.h"
#include"InsertTable.hpp"
#include"TableType.hpp"
#include<map>
#include<string>
#include "FieldType.hpp"
#include"FileType.hpp"
#include"CommonObjects.hpp"
#include<boost/algorithm/string.hpp>
InsertTable::InsertTable(TableType p_type,FileType p_fileType) : tableType(p_type),fileType(p_fileType) {
	fieldMappings = CommonObjects::FieldMappings(tableType, fileType);
}
InsertTable::InsertTable() {}
InsertTable::~InsertTable() {}
int InsertTable::InsertRecord()
{

}
int InsertTable::AddRow(std::map<string,string> rec)
{

}
int InsertTable::AddCell(string key, string val)
{
	FieldType field;
	map<string, FieldType>::iterator iter = fieldMappings.find(key);

	if (iter != fieldMappings.end()) {
		field = iter->second;
		boost::trim_right(val);
		if (!val.empty()) {
			switch (field.dataType) {
			case DataType::character: {
				insertStatement.setString(field.getFieldKey(), val.substring(0, val.length() > field.getFieldLength() ? field.getFieldLength() : val.length()));
				break;
			}
			case DataType::decimal: {
				val = val.replaceAll(patt, "");
				if (!val.isEmpty())
					insertStatement.setDouble(field.getFieldKey(), Double.parseDouble(val));
				else
					insertStatement.setObject(field.getFieldKey(), null, typeMapping.get(field.getDataType()));
				break;
			}
			case DataType::date:
			{
				if (tableType == TableType.DIST_MASTER_STG1) {
					if (val.indexOf("/") < 0) {
						double dateVal = Double.parseDouble(val);
						//  if (dateVal < 59)  dateVal -= 1; //Excel/Lotus 2/29/1900 bug
						insertStatement.setString(field.getFieldKey(), new SimpleDateFormat("MM/dd/yyyy").format(DateUtil.getJavaDate(dateVal)));
					}
				}
				break;
			}
			}
		}
		else
			insertStatement.setObject(field.getFieldKey(), null, typeMapping.get(field.getDataType()));
	}
}