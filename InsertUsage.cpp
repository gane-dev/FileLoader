#include "stdafx.h"
#include"InsertUsage.hpp"
#include<vector>
using namespace std;
int InsertUsage::InsertRecord(vector<vector<string>>&& inputValues)
{

	int totalInputs = inputValues.size();
	long fileId;
	int recordsSize = inputValues.size();
	/*char dnames[][100] = { "Community Outreach", "University Recruiting" };
	ub2 dnameLen[2];

	for (int i = 0; i < 2; i++)
		dnameLen[i] = strlen(dnames[i] + 1);

	int ids[2] = { 7369, 7654 };
	ub2 idLen[2] = { sizeof(ids[0]), sizeof(ids[1]) };
	*/
	
	/*for (vector<vector<string>>::iterator it = inputValues.begin(); it != inputValues.end(); ++it)
	{

	}*/
	char beginDate[1000][20];
	ub2 beginDateLen[1000];
	char endDate[1000][20];
	ub2 endDateLen[1000];
	char distId[1000][7];
	ub2 distIdLen[1000];
	char custNumber[1000][40];
	ub2 custNumberLen[1000];
	char name[1000][50];
	ub2 nameLen[1000];
	char address[1000][50];
	ub2 addressLen[1000];
	char address2[1000][50];
	ub2 address2Len[1000];
	char city[1000][25];
	ub2 cityLen[1000];
	char state[1000][2];
	ub2 stateLen[1000];
	char zip[1000][10];
	ub2 zipLen[1000];
	char countryCD[1000][3];
	ub2 countryCDLen[1000];
	char distProdNum[1000][40];
	ub2 distProdNumLen[1000];
	char gtin[1000][14];
	ub2 gtinLen[1000];
	char manName[1000][50];
	ub2 manNameLen[1000];
	char manProdNum[1000][40];
	ub2 manProdNumLen[1000];
	char brandName[1000][50];
	ub2 brandNameLen[1000];
	char uomLiteral[1000][30];
	ub2 uomLiteralLen[1000];
	double cpQty[1000];
	ub2 cpQtyLen[1000];
	double unitOfIssue[1000];
	ub2 unitOfIssueLen[1000];
	char unitCode[1000][3];
	ub2 unitCodeLen[1000];
	char prodDesc[1000][50];
	ub2 prodDescLen[1000];
	double qty[1000];
	ub2 qtyLen[1000];
	char qtyIndicator[1000][3];
	ub2 qtyIndicatorLen[1000];
	double weightShipped[1000];
	ub2 weightShippedLen[1000];
	char weightIndicator[1000][3];
	ub2 weightIndicatorLen[1000];
	double sellDollars[1000];
	ub2 sellDollarsLen[1000];
	char currencyCode[1000][15]; 
	ub2 currencyCodeLen[1000];
	char invoiceNum[1000][30];
	ub2 invoiceNumLen[1000];
	char invoiceDate[1000][20];
	ub2 invoiceDateLen[1000];
	char poNum[1000][20];
	ub2 poNumLen[1000];
	char poDate[1000][20];
	ub2 poDateLen[1000];
	char status[1000][1];
	ub2 statusLen[1000];
	char masterFileId[1000][10];
	ub2 masterFileIdLen[1000];

	for (int i = 0; i < recordsSize; ++i)
	{
		status[i][0] = 'N';
		statusLen[i] = sizeof(status[i][0]);
		masterFileId[i][0] = 'M' + fileId;
		masterFileIdLen[i] = sizeof(masterFileId[i][0]);
	}


	std::string::size_type sz;
	int x = 0;
	for (auto const& value : inputValues)
	{
		int index=1;
		for (auto const& field : value)
		{
			switch (index)  {
			case 1:
			{
				field.copy(beginDate[x],field.size(),0U);
				beginDateLen[x] = sizeof(beginDate[x]);
				break;
			}
			case 2:
			{
				field.copy(endDate[x], field.size(), 0U);
				endDateLen[x] = sizeof(endDate[x]);
				break;
			}
			case 3:
			{
				field.copy(distId[x], field.size(), 0U);
				distIdLen[x] = sizeof(distId[x]);
				break;
			}
			case 4:
			{
				field.copy(custNumber[x], field.size(), 0U);
				custNumberLen[x] = sizeof(custNumber[x]);
				break;
			}
			case 5:
			{
				field.copy(name[x], field.size(), 0U);
				nameLen[x] = sizeof(name[x]);
				break;
			}
			case 6:
			{
				field.copy(address[x], field.size(), 0U);
				addressLen[x] = sizeof(address[x]);
				break;
			}
			case 7:
			{
				field.copy(address2[x], field.size(), 0U);
				address2Len[x] = sizeof(address2[x]);
				break;
			}
			case 8:
			{
				field.copy(city[x], field.size(), 0U);
				cityLen[x] = sizeof(city[x]);
				break;
			}
			case 9:
			{
				field.copy(state[x], field.size(), 0U);
				stateLen[x] = sizeof(state[x]);
				break;
			}
			case 10:
			{
				field.copy(zip[x], field.size(), 0U);
				zipLen[x] = sizeof(zip[x]);
				break;
			}
			case 11:
			{
				field.copy(countryCD[x], field.size(), 0U);
				countryCDLen[x] = sizeof(countryCD[x]);
				break;
			}
			case 12:
			{
				field.copy(distProdNum[x], field.size(), 0U);
				distProdNumLen[x] = sizeof(distProdNum[x]);
				break;
			}
			case 13:
			{
				field.copy(gtin[x], field.size(), 0U);
				gtinLen[x] = sizeof(gtin[x]);
				break;
			}
			case 14:
			{
				field.copy(manName[x], field.size(), 0U);
				manNameLen[x] = sizeof(manName[x]);
				break;
			}
			case 15:
			{
				field.copy(manProdNum[x], field.size(), 0U);
				manProdNumLen[x] = sizeof(manProdNum[x]);
				break;
			}
			case 16:
			{
				field.copy(brandName[x], field.size(), 0U);
				brandNameLen[x] = sizeof(brandName[x]);
				break;
			}
			case 17:
			{
				field.copy(uomLiteral[x], field.size(), 0U);
				uomLiteralLen[x] = sizeof(uomLiteral[x]);
				break;
			}
			case 18:
			{
				if (field.find_first_not_of("-0123456789.") == std::string::npos)
				{
					cpQty[x] = NAN;
				}
				else
				{
					cpQty[x] = stod(field, &sz);
				}
				cpQtyLen[x] = sizeof(cpQty[x]);
				break;
			}
			case 19:
			{
				if (field.find_first_not_of("-0123456789.") == std::string::npos)
				{
					unitOfIssue[x] = NAN;
				}
				else
				{
					unitOfIssue[x] = stod(field, &sz);
				}
				unitOfIssueLen[x] = sizeof(unitOfIssue[x]);
				break;
			}
			case 20:
			{
				field.copy(unitCode[x], field.size(), 0U);
				unitCodeLen[x] = sizeof(unitCode[x]);
				break;
			}
			case 21:
			{
				field.copy(prodDesc[x], field.size(), 0U);
				prodDescLen[x] = sizeof(prodDesc[x]);
				break;
			}
			case 22:
			{
				if (field.find_first_not_of("-0123456789.") == std::string::npos)
				{
					qty[x] = NAN;
				}
				else
				{
					qty[x] = stod(field, &sz);
				}
				qtyLen[x] = sizeof(qty[x]);
				break;
			}
			case 23:
			{
				field.copy(qtyIndicator[x], field.size(), 0U);
				qtyIndicatorLen[x] = sizeof(qtyIndicator[x]);
				break;
			}
			case 24:
			{
				if (field.find_first_not_of("-0123456789.") == std::string::npos)
				{
					weightShipped[x] = NAN;
				}
				else
				{
					weightShipped[x] = stod(field, &sz);
				}
				weightShippedLen[x] = sizeof(weightShipped[x]);
				break;
			}
			case 25:
			{
				field.copy(weightIndicator[x], field.size(), 0U);
				weightIndicatorLen[x] = sizeof(weightIndicator[x]);
				break;
			}
			case 26:
			{
				if (field.find_first_not_of("-0123456789.") == std::string::npos)
				{
					sellDollars[x] = NAN;
				}
				else
				{
					sellDollars[x] = stod(field, &sz);
				}
				sellDollarsLen[x] = sizeof(sellDollars[x]);
				break;
			}
			case 27:
			{
				field.copy(currencyCode[x], field.size(), 0U);
				currencyCodeLen[x] = sizeof(currencyCode[x]);
				break;
			}
			case 28:
			{
				field.copy(invoiceNum[x], field.size(), 0U);
				invoiceNumLen[x] = sizeof(invoiceNum[x]);
				break;
			}
			case 29:
			{
				field.copy(invoiceDate[x], field.size(), 0U);
				invoiceDateLen[x] = sizeof(invoiceDate[x]);
			
				break;
			}
			case 30:
			{
				field.copy(poNum[x], field.size(), 0U);
				poNumLen[x] = sizeof(poNum[x]);
				break;
			}
			case 31:
			{
				field.copy(poDate[x], field.size(), 0U);
				poDateLen[x] = sizeof(poDate[x]);
				break;
			}
			}

			index++;
		}

		x++;
	}
	stmt->setDataBuffer(1, beginDate, OCCI_SQLT_STR, recordsSize, beginDateLen);
	stmt->setDataBuffer(2, endDate, OCCI_SQLT_STR, recordsSize, endDateLen);
	stmt->setDataBuffer(3, distId, OCCI_SQLT_STR, recordsSize, distIdLen);
	stmt->setDataBuffer(4, custNumber, OCCI_SQLT_STR, recordsSize, custNumberLen);
	stmt->setDataBuffer(5, name, OCCI_SQLT_STR, recordsSize, nameLen);
	stmt->setDataBuffer(6, address, OCCI_SQLT_STR, recordsSize, addressLen);
	stmt->setDataBuffer(7, address2, OCCI_SQLT_STR, recordsSize, address2Len);
	stmt->setDataBuffer(8, city, OCCI_SQLT_STR, recordsSize, cityLen);

	stmt->setDataBuffer(9, state, OCCI_SQLT_STR, recordsSize, stateLen);
	stmt->setDataBuffer(10, zip, OCCI_SQLT_STR, recordsSize, zipLen);
	stmt->setDataBuffer(11, countryCD, OCCI_SQLT_STR, recordsSize, countryCDLen);
	stmt->setDataBuffer(12, distProdNum, OCCI_SQLT_STR, recordsSize, distProdNumLen);
	stmt->setDataBuffer(13, gtin, OCCI_SQLT_STR, recordsSize, gtinLen);
	stmt->setDataBuffer(14, manName, OCCI_SQLT_STR, recordsSize, manNameLen);
	stmt->setDataBuffer(15, manProdNum, OCCI_SQLT_STR, recordsSize, manProdNumLen);
	stmt->setDataBuffer(16, brandName, OCCI_SQLT_STR, recordsSize, brandNameLen);

	stmt->setDataBuffer(17, uomLiteral, OCCI_SQLT_STR, recordsSize, uomLiteralLen);
	stmt->setDataBuffer(18, cpQty, OCCI_SQLT_NUM, recordsSize, cpQtyLen);
	stmt->setDataBuffer(19, unitOfIssue, OCCI_SQLT_NUM, recordsSize, unitOfIssueLen);
	stmt->setDataBuffer(20, unitCode, OCCI_SQLT_STR, recordsSize, unitCodeLen);
	stmt->setDataBuffer(21, prodDesc, OCCI_SQLT_STR, recordsSize, prodDescLen);
	stmt->setDataBuffer(22, qty, OCCI_SQLT_NUM, recordsSize, qtyLen);
	stmt->setDataBuffer(23, qtyIndicator, OCCI_SQLT_STR, recordsSize, qtyIndicatorLen);
	stmt->setDataBuffer(24, weightShipped, OCCI_SQLT_NUM, recordsSize, weightShippedLen);

	stmt->setDataBuffer(25, weightIndicator, OCCI_SQLT_STR, recordsSize, weightIndicatorLen);
	stmt->setDataBuffer(26, sellDollars, OCCI_SQLT_NUM, recordsSize, sellDollarsLen);
	stmt->setDataBuffer(27, currencyCode, OCCI_SQLT_STR, recordsSize, currencyCodeLen);
	stmt->setDataBuffer(28, invoiceNum, OCCI_SQLT_STR, recordsSize, invoiceNumLen);
	stmt->setDataBuffer(29, invoiceDate, OCCI_SQLT_STR, recordsSize, invoiceDateLen);
	stmt->setDataBuffer(30, poNum, OCCI_SQLT_STR, recordsSize, poNumLen);
	stmt->setDataBuffer(31, poDate, OCCI_SQLT_STR, recordsSize, poDateLen);
	
	stmt->setDataBuffer(32, status, OCCI_SQLT_STR, recordsSize, statusLen);
	stmt->setDataBuffer(33, masterFileId,	 OCCI_SQLT_STR, recordsSize, masterFileIdLen);

	stmt->executeArrayUpdate(recordsSize);      // data for two rows is inserted. 
}
int InsertUsage::AddRow()
{

}