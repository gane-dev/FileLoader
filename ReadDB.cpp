#include "stdafx.h"
#include<occi.h>
#include<iostream>
#include<string>

using namespace oracle::occi;
using namespace std;

class ReadDB {
	

public: 
		int  getFileId(Connection* p_conn)
	{
	    Statement *stmt; 
		int result = -1;
		std::string sql = "SELECT LD_FILEID_SEQ.NEXTVAL FROM DUAL";
		ResultSet *rs;
		
			stmt = p_conn->createStatement();
			rs = stmt->executeQuery(sql);
			while (rs->next()){
				result = rs->getInt(1);
			}
			return  result;
		
		

	}
	string getSupplierId(string p_initials, Connection* p_conn)
	{
		Statement *stmt ;
		string result;
		ResultSet *rs;
		string sql = "select erm_supplier_id from avendra_supplier where supplier_id = '" + p_initials + "'";
			stmt = p_conn->createStatement();
			rs = stmt->executeQuery(sql);
			while (rs->next()) {
				result = rs->getString(1);
			}
			return  result;
		
	}
	~ReadDB()
	{

	}
};