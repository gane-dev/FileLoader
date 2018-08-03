#pragma once
#include "stdafx.h"
#include <iostream>
#include <occi.h>
#include"GetPropertyValues.hpp"
using namespace oracle::occi;
using namespace std;
class occidml
{
private:
	Environment * env;
	Connection *conn;
	Statement *stmt;
	
	unsigned int maxConn = 5;
	unsigned int minConn = 3;
	unsigned int incrConn = 2;
	ConnectionPool *connPool;
	StatelessConnectionPool *scp;
public:
	occidml(string user, string passwd, string db)
	{

	}
	Statement* GetStatement(const string &statementStr) {}
	~occidml()
	{}
};