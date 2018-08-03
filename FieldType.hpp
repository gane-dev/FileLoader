#include "stdafx.h"
#include<iostream>
#include"DataType.hpp"
using namespace std;
class FieldType {
public:
	int fieldKey;
	int fieldLength;
	DataType dataType;
	string fieldName;

public:
	FieldType(int p_fieldKey, string p_fieldName, DataType p_dataType, int p_fieldLength) : fieldKey(p_fieldKey), fieldName(p_fieldName),
		dataType(p_dataType), fieldLength(p_fieldLength)
	{	}
	FieldType() {}
/*	int getFieldKey() {
		return fieldKey;
	}

	void setFieldKey(int p_fieldKey) {
		fieldKey = p_fieldKey;
	}

	string getFieldName() {
		return fieldName;
	}

	void setFieldName(string p_fieldName) {
		fieldName = p_fieldName;
	}

	string getDataType() {
		return dataType;
	}

	void setDataType(string p_dataType) {
		dataType = p_dataType;
	}

int getFieldLength() {
		return fieldLength;
	}

	void setFieldLength(int p_fieldLength) {
		fieldLength = fieldLength;
	}*/
};
