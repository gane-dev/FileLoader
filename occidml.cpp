#include "stdafx.h"

#include"occidml.hpp"
using namespace oracle::occi;
using namespace std;

occidml::occidml(string user, string passwd, string db)
{
	env = Environment::createEnvironment(Environment::DEFAULT);
	//conn = env->createConnection(user, passwd, db);
	/*connPool = env->createConnectionPool(
	user,
	passwd,
	db,
	minConn,
	maxConn,
	incrConn);*/
	scp =
		env->createStatelessConnectionPool(
			user, passwd, db, maxConn, minConn, incrConn,
			StatelessConnectionPool::HOMOGENEOUS);
	conn = scp->getConnection("");
	//scp->releaseConnection(conn, "");
	//scp->terminateConnection(conn);
}
Statement* occidml::GetStatement(const string &statementStr) {
	Statement * stmt = conn->createStatement(statementStr);
	return stmt;
}
occidml::~occidml()
{
	//env->terminateConnection(conn);
	scp->terminateConnection(conn);
	env->terminateStatelessConnectionPool(scp);
	Environment::terminateEnvironment(env);
}
