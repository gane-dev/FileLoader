#include "stdafx.h"
#include "FieldType.hpp"
#include "TableType.hpp"
#include "FileType.hpp"
#include <occi.h>
#include <map>
#include"CommonObjects.hpp"
using namespace oracle::occi;
using namespace std;


	 const std::map<string, FieldType> CommonObjects::FieldMappings(TableType type, FileType fileType) {
		switch (type) {

		case TableType::DIST_MASTER_STG1: {
			if (fileType == FileType::EXCEL) {
				if (map_excel_master.size() == 0) {
					//map_excel_master = new HashMap<String, FieldType&>();

					map_excel_master.try_emplace("A", FieldType(1, "Begin Usage Date", DataType::date, 20));
					map_excel_master.try_emplace("B", FieldType(2, "End Usage Date", DataType::date, 20));
					map_excel_master.try_emplace("C",  FieldType(3, "Distributor Warehouse ID", DataType::character, 7));

					map_excel_master.try_emplace("D",  FieldType(4, "Customer Number", DataType::character, 40));
					map_excel_master.try_emplace("E",  FieldType(5, "Name", DataType::character, 50));
					map_excel_master.try_emplace("F",  FieldType(6, "Address", DataType::character, 50));

					map_excel_master.try_emplace("G", FieldType(7, "Address2", DataType::character, 50));
					map_excel_master.try_emplace("H", FieldType(8, "City", DataType::character, 25));
					map_excel_master.try_emplace("I", FieldType(9, "State", DataType::character, 2));

					map_excel_master.try_emplace("J", FieldType(10, "Zip", DataType::character, 10));
					map_excel_master.try_emplace("K", FieldType(11, "CUST_COUNTRY_CD", DataType::character, 3));
					map_excel_master.try_emplace("L", FieldType(12, "Distributor Product Number", DataType::character, 40));

					map_excel_master.try_emplace("M", FieldType(13, "GTIN/UPC", DataType::character, 14));
					map_excel_master.try_emplace("N", FieldType(14, "Manufacturer Name", DataType::character, 50));
					map_excel_master.try_emplace("O", FieldType(15, "Man Product Num", DataType::character, 40));

					map_excel_master.try_emplace("P", FieldType(16, "Brand Name", DataType::character, 50));
					map_excel_master.try_emplace("Q", FieldType(17, "Unit of Measure Literal", DataType::character, 30));
					map_excel_master.try_emplace("R", FieldType(18, "Case Pack Qty", DataType::decimal, 0));

					map_excel_master.try_emplace("S", FieldType(19, "Unit of Issue", DataType::decimal, 0));
					map_excel_master.try_emplace("T", FieldType(20, "Unit of Measure Code", DataType::character, 3));
					map_excel_master.try_emplace("U", FieldType(21, "Product Description", DataType::character, 50));

					map_excel_master.try_emplace("V", FieldType(22, "Qty", DataType::decimal, 0));
					map_excel_master.try_emplace("W", FieldType(23, "Qty  Indicator", DataType::character, 3));
					map_excel_master.try_emplace("X", FieldType(24, "Weight Shipped", DataType::decimal, 0));

					map_excel_master.try_emplace("Y", FieldType(25, "Weight Shipped Indicator", DataType::character, 3));
					map_excel_master.try_emplace("Z", FieldType(26, "Total Sell Dollars", DataType::decimal, 0));
					map_excel_master.try_emplace("AA", FieldType(27, "Currency Code", DataType::character, 15));

					map_excel_master.try_emplace("AB", FieldType(28, "Invoice Num", DataType::character, 30));

					map_excel_master.try_emplace("AC", FieldType(29, "Invoice Date", DataType::date, 20));
					map_excel_master.try_emplace("AD", FieldType(30, "PO Num", DataType::character, 20));
					map_excel_master.try_emplace("AE", FieldType(31, "PO Date", DataType::date, 20));

				}
				return map_excel_master;

			}
			else if (fileType == FileType::EXCEL_OPTION) {
				if (map_excel_option_master.size() ==0) {
					//map_excel_option_master = new HashMap<String, FieldType&>();
					map_excel_option_master.try_emplace("A", FieldType(1, "Begin Usage Date", DataType::date, 20));
					map_excel_option_master.try_emplace("B", FieldType(2, "End Usage Date", DataType::date, 20));
					map_excel_option_master.try_emplace("C", FieldType(3, "Distributor Warehouse ID", DataType::character, 7));

					map_excel_option_master.try_emplace("D", FieldType(4, "Customer Number", DataType::character, 40));
					map_excel_option_master.try_emplace("E", FieldType(5, "Name", DataType::character, 50));
					map_excel_option_master.try_emplace("F", FieldType(6, "Address", DataType::character, 50));

					map_excel_option_master.try_emplace("G", FieldType(7, "Address2", DataType::character, 50));
					map_excel_option_master.try_emplace("H", FieldType(8, "City", DataType::character, 25));
					map_excel_option_master.try_emplace("I", FieldType(9, "State", DataType::character, 2));

					map_excel_option_master.try_emplace("J", FieldType(10, "Zip", DataType::character, 10));
					map_excel_option_master.try_emplace("K", FieldType(11, "Country Code", DataType::character, 10));
					map_excel_option_master.try_emplace("L", FieldType(12, "Distributor Product Number", DataType::character, 40));

					//map_excel_option_master.try_emplace("M", FieldType(13, "GTIN/UPC", DataType::character, 14));
					map_excel_option_master.try_emplace("N", FieldType(13, "Manufacturer Name", DataType::character, 50));
					map_excel_option_master.try_emplace("O", FieldType(14, "Man Product Num", DataType::character, 40));

					//map_excel_option_master.try_emplace("P1", FieldType(16, "Brand Name", DataType::character, 50));
					map_excel_option_master.try_emplace("Q", FieldType(15, "Unit of Measure Literal", DataType::character, 30));
					//map_excel_option_master.try_emplace("R1", FieldType(18, "Case Pack Qty", DataType::decimal, 0));

					//map_excel_option_master.try_emplace("S1", FieldType(19, "Unit of Issue", DataType::decimal, 0));
					//map_excel_option_master.try_emplace("T1", FieldType(20, "Unit of Measure Code", DataType::character, 3));
					map_excel_option_master.try_emplace("U", FieldType(16, "Product Description", DataType::character, 50));

					map_excel_option_master.try_emplace("V", FieldType(17, "Qty", DataType::decimal, 0));
					map_excel_option_master.try_emplace("W", FieldType(18, "Qty  Indicator", DataType::character, 3));
					//map_excel_option_master.try_emplace("X1", FieldType(24, "Weight Shipped", DataType::decimal, 0));

					//map_excel_option_master.try_emplace("Y1", FieldType(25, "Weight Shipped Indicator", DataType::character, 3));
					map_excel_option_master.try_emplace("Z", FieldType(19, "Total Sell Dollars", DataType::decimal, 0));
					map_excel_option_master.try_emplace("AA", FieldType(20, "Currency Code", DataType::character, 15));

					map_excel_option_master.try_emplace("AB", FieldType(21, "Invoice Num", DataType::character, 30));

					map_excel_option_master.try_emplace("AC", FieldType(22, "Invoice Date", DataType::date, 20));
					map_excel_option_master.try_emplace("AD", FieldType(23, "PO Num", DataType::character, 20));
					map_excel_option_master.try_emplace("AE", FieldType(24, "PO Date", DataType::date, 20));

				}
				return map_excel_option_master;
			}
			else if (fileType == FileType::EXCEL_SHORT) {
				if (map_excel_short_master.size() == 0) {
					//map_excel_short_master = new HashMap<String, FieldType&>();

					map_excel_short_master.try_emplace("A", FieldType(1, "Begin Usage Date", DataType::date, 20));
					map_excel_short_master.try_emplace("B", FieldType(2, "End Usage Date", DataType::date, 20));
					map_excel_short_master.try_emplace("C", FieldType(3, "Distributor Warehouse ID", DataType::character, 7));

					map_excel_short_master.try_emplace("D", FieldType(4, "Customer Number", DataType::character, 40));
					map_excel_short_master.try_emplace("E", FieldType(5, "Name", DataType::character, 50));

					map_excel_short_master.try_emplace("F", FieldType(6, "City", DataType::character, 25));
					map_excel_short_master.try_emplace("G", FieldType(7, "State", DataType::character, 2));


					map_excel_short_master.try_emplace("H", FieldType(8, "CUST_COUNTRY_CD", DataType::character, 3));
					map_excel_short_master.try_emplace("I", FieldType(9, "Distributor Product Number", DataType::character, 40));


					map_excel_short_master.try_emplace("J", FieldType(10, "Manufacturer Name", DataType::character, 50));
					map_excel_short_master.try_emplace("K", FieldType(11, "Man Product Num", DataType::character, 40));

					map_excel_short_master.try_emplace("L", FieldType(12, "Brand Name", DataType::character, 50));
					map_excel_short_master.try_emplace("M", FieldType(13, "Unit of Measure Literal", DataType::character, 30));



					map_excel_short_master.try_emplace("N", FieldType(14, "Unit of Measure Code", DataType::character, 3));
					map_excel_short_master.try_emplace("O", FieldType(15, "Product Description", DataType::character, 50));

					map_excel_short_master.try_emplace("P", FieldType(16, "Qty", DataType::decimal, 0));
					map_excel_short_master.try_emplace("Q", FieldType(17, "Qty  Indicator", DataType::character, 3));
					map_excel_short_master.try_emplace("R", FieldType(18, "Weight Shipped", DataType::decimal, 0));

					map_excel_short_master.try_emplace("S", FieldType(19, "Weight Shipped Indicator", DataType::character, 3));
					map_excel_short_master.try_emplace("T", FieldType(20, "Total Sell Dollars", DataType::decimal, 0));
					map_excel_short_master.try_emplace("U", FieldType(21, "Currency Code", DataType::character, 15));



				}
				return map_excel_short_master;

			}
		}
		case TableType::DIST_ITEM_STG1: {
			if (map_item.size() == 0) {
				//map_item = new HashMap<String, FieldType&>();
				map_item.try_emplace("1", FieldType(1, "Begin Usage Date", DataType::character, 20));
				map_item.try_emplace("2", FieldType(2, "End Usage Date", DataType::character, 20));
				map_item.try_emplace("3", FieldType(3, "Distributor Warehouse ID", DataType::character, 7));

				map_item.try_emplace("4", FieldType(4, "DIST_PROD_NUM", DataType::character, 40));
				map_item.try_emplace("5", FieldType(5, "MFR_NAME", DataType::character, 50));
				map_item.try_emplace("6", FieldType(6, "MFR_PROD_NUM", DataType::character, 50));

				map_item.try_emplace("7", FieldType(7, "BRAND_NAME", DataType::character, 50));
				map_item.try_emplace("8", FieldType(8, "DIST_GTIN_UPC", DataType::character, 25));
				map_item.try_emplace("9", FieldType(9, "CASE_PACK_LITERAL", DataType::character, 30));

				map_item.try_emplace("10", FieldType(10, "CASE_PACK_QTY", DataType::decimal, 0));
				map_item.try_emplace("11", FieldType(11, "UNIT_OF_ISSUE", DataType::decimal, 0));
				map_item.try_emplace("12", FieldType(12, "UNIT_OF_MEASURE_DESC", DataType::character, 3));

				map_item.try_emplace("13", FieldType(13, "DIST_PROD_DESC", DataType::character, 50));
				map_item.try_emplace("14", FieldType(14, "DIST_ALT_ITEM_ID", DataType::character, 15));

			}
			return map_item;
		}

		case TableType::DIST_CUST_STG1: {
			if (map_cust.size() == 0) {
				//map_cust = new HashMap<String, FieldType&>();
				map_cust.try_emplace("1", FieldType(1, "Begin Usage Date", DataType::character, 20));
				map_cust.try_emplace("2", FieldType(2, "End Usage Date", DataType::character, 20));
				map_cust.try_emplace("3", FieldType(3, "Distributor Warehouse ID", DataType::character, 7));

				map_cust.try_emplace("4", FieldType(4, "Customer Number", DataType::character, 40));
				map_cust.try_emplace("5", FieldType(5, "Name", DataType::character, 50));
				map_cust.try_emplace("6", FieldType(6, "Address", DataType::character, 50));

				map_cust.try_emplace("7", FieldType(7, "Address2", DataType::character, 50));
				map_cust.try_emplace("8", FieldType(8, "City", DataType::character, 25));
				map_cust.try_emplace("9", FieldType(9, "State", DataType::character, 2));

				map_cust.try_emplace("10", FieldType(10, "Zip", DataType::character, 10));
				map_cust.try_emplace("11", FieldType(11, "Country Code", DataType::character, 3));


			}
			return map_cust;
		}

		case TableType::DIST_USAGE_STG1:

		{
			if (fileType == FileType::TEXT_TAB_USAGE || fileType == FileType::TEXT_BANG_USAGE
				|| fileType == FileType::TEXT_PIPE_USAGE || fileType == FileType::TEXT_CAT_USAGE || fileType == FileType::TEXT_SYS_USAGE) {
				if (map_usage.size() == 0) {
					//map_usage = new HashMap<String, FieldType&>();
					map_usage.try_emplace("1", FieldType(1, "Begin Usage Date", DataType::character, 20));
					map_usage.try_emplace("2", FieldType(2, "End Usage Date", DataType::character, 20));
					map_usage.try_emplace("3", FieldType(3, "Distributor Warehouse ID", DataType::character, 7));

					map_usage.try_emplace("4", FieldType(4, "Customer Number", DataType::character, 40));
					map_usage.try_emplace("5", FieldType(5, "DIST_PROD_NUM", DataType::character, 40));
					map_usage.try_emplace("6", FieldType(6, "DIST_GTIN", DataType::character, 14));

					map_usage.try_emplace("7", FieldType(7, "TOTAL_USAGE_IN_UNITS", DataType::decimal, 0));
					map_usage.try_emplace("8", FieldType(8, "DIST_SIZE_INDICATOR", DataType::character, 3));
					map_usage.try_emplace("9", FieldType(9, "WEIGHT_SHIPPED", DataType::decimal, 0));

					//map_usage.try_emplace("10", FieldType(10, "WEIGHT_SHIPPED_INDICATOR", DataType::character, 3));
					map_usage.try_emplace("10", FieldType(10, "DIST_WEIGHT_SHIPPED_INDICATOR", DataType::character, 3));

					map_usage.try_emplace("11", FieldType(11, "TOTAL_DIST_SELL_DOLLARS", DataType::decimal, 0));
					map_usage.try_emplace("12", FieldType(12, "CURRENCY_TYPE", DataType::character, 15));

					map_usage.try_emplace("13", FieldType(13, "DIST_INVOICE_ID", DataType::character, 30));
					map_usage.try_emplace("14", FieldType(14, "DIST_INVOICE_DT", DataType::character, 20));
					map_usage.try_emplace("15", FieldType(15, "DIST_PO_ID", DataType::character, 20));
					map_usage.try_emplace("16", FieldType(16, "DIST_PO_DT", DataType::character, 20));


				}
				return map_usage;
			}
			else if (fileType == FileType::TEXT_OPTION_USAGE) {
				if (map_option_usage.size() == 0) {
					//map_option_usage = new HashMap<String, FieldType&>();
					map_option_usage.try_emplace("1", FieldType(1, "Begin Usage Date", DataType::character, 20));
					map_option_usage.try_emplace("2", FieldType(2, "End Usage Date", DataType::character, 20));
					map_option_usage.try_emplace("3", FieldType(3, "Distributor Warehouse ID", DataType::character, 7));

					map_option_usage.try_emplace("4", FieldType(4, "Customer Number", DataType::character, 40));
					map_option_usage.try_emplace("5", FieldType(5, "DIST_PROD_NUM", DataType::character, 40));
					map_option_usage.try_emplace("6", FieldType(6, "DIST_GTIN", DataType::character, 14));

					map_option_usage.try_emplace("7", FieldType(7, "TOTAL_USAGE_IN_UNITS", DataType::decimal, 0));
					map_option_usage.try_emplace("8", FieldType(8, "DIST_SIZE_INDICATOR", DataType::character, 3));
					map_option_usage.try_emplace("9", FieldType(9, "WEIGHT_SHIPPED", DataType::decimal, 0));

					map_option_usage.try_emplace("10", FieldType(10, "WEIGHT_SHIPPED_INDICATOR", DataType::character, 3));
					map_option_usage.try_emplace("11", FieldType(11, "DIST_WEIGHT_SHIPPED_INDICATOR", DataType::character, 3));

					map_option_usage.try_emplace("12", FieldType(12, "TOTAL_DIST_SELL_DOLLARS", DataType::decimal, 0));
					map_option_usage.try_emplace("13", FieldType(13, "CURRENCY_TYPE", DataType::character, 15));

					//                        map_usage.try_emplace("13", FieldType(14, "DIST_INVOICE_ID", DataType::character, 30));
					//                        map_usage.try_emplace("14", FieldType(15, "DIST_INVOICE_DT", DataType::character, 20));
					//                        map_usage.try_emplace("15", FieldType(16, "DIST_PO_ID", DataType::character, 20));
					//
					//                        map_usage.try_emplace("16", FieldType(17, "DIST_PO_DT", DataType::character, 20));
				}
				return map_option_usage;
			}
		}
		}
		//return nullptr;
	}
	 const string& CommonObjects::TableQuery(TableType type, FileType fileType) {

		switch (type) {

		case TableType::DIST_MASTER_STG1: {
			if (fileType == FileType::EXCEL) {
				qry_excel_master = "INSERT INTO DIST_MASTER_STG1 VALUES (:1,:2,:3,:4,:5,:6,:7,:8,:9,:10,:11,:12,:13,:14,:15,:16,:17,:18,:19,:20,:21,:22,:23,:24,:25,:26,:27,:28,:29,:30,:31,:32,:33)";
				return qry_excel_master;
				
			}
			else  if (fileType == FileType::EXCEL_OPTION) {
				qry_excel_option_master =  "INSERT INTO DIST_MASTER_STG1 VALUES (:1,:2,:3,:4,:5,:6,:7,:8,:9,:10,:11,:12,:13,:14,:15,:16,:17,:18,:19,:20,:21,:22,:23,:24,:25)" ;

				return qry_excel_option_master;
			}
			else if (fileType == FileType::EXCEL_SHORT) {
				qry_excel_short_master =  "INSERT INTO DIST_MASTER_STG1 VALUES (:1,:2,:3,:4,:5,:6,:7,:8,:9,:10,:11,:12,:13,:14,:15,:16,:17,:18,:19,:20,:21,:22,:23)" ;
				return qry_excel_short_master;
			}
		}

		case TableType::DIST_ITEM_STG1: {
			qry_item = "INSERT INTO DIST_ITEM_STG1 VALUES (:1,:2,:3,:4,:5,:6,:7,:8,:9,:10,:11,:12,:13,:14,:15,:16,:17)";
			return qry_item;
		}

		case TableType::DIST_CUST_STG1:

		{   
			qry_cust =  "INSERT INTO DIST_CUST_STG1 VALUES (:1,:2,:3,:4,:5,:6,:7,:8,:9,:10,:11,:12,:13,:14)" ;
		return  qry_cust;
		}
		case TableType::DIST_USAGE_STG1:

		{
			if (fileType == FileType::TEXT_TAB_USAGE || fileType == FileType::TEXT_BANG_USAGE
				|| fileType == FileType::TEXT_PIPE_USAGE || fileType == FileType::TEXT_CAT_USAGE || fileType == FileType::TEXT_SYS_USAGE) {
				qry_usage = "INSERT INTO DIST_USAGE_STG1 VALUES (:1,:2,:3,:4,:5,:6,:7,:8,:9,:10,:11,:12,:13,:14,:15,:16,:17,:18,:19)" ;
				return qry_usage;
			}
			else if (fileType == FileType::TEXT_OPTION_USAGE)
			{
				qry_opt_usage =  "INSERT INTO DIST_USAGE_STG1 VALUES (:1,:2,:3,:4,:5,:6,:7,:8,:9,:10,:11,:12,:13,:14,:15,:16)" ;
				return qry_opt_usage;
			}
			
		}
		case TableType::LD_LOADER_LOG:
		{
			qry_log =  "INSERT INTO LD_LOADER_LOG VALUES (:1,:2,:3,:4,:5,:6,:7,:8,:9,:10,:11,:12,:13)" ;
			return qry_log;
		}
		case TableType::DIST_CONTROL_TOTALS:
		{
			qry_control =  "INSERT INTO DIST_CONTROL_TOTALS VALUES (:1,:2,:3,:4,:5)" ;
			return  qry_control;
		}
		case TableType::LD_SRC_FILE_TRACK:
		{
			qry_track =  "INSERT INTO LD_SRC_FILE_TRACK VALUES (:1,:2,:3,:4,:5,:6,:7,:8,:9,:10,:11)" ;
			return  qry_track;
		}
		}
		return "";
	}

	 const map<string, int> CommonObjects::GetDataType()
	 {
		 if (dataTypes.size() == 0)
		 {
			
			 dataTypes.try_emplace(DataType::decimal, OCCI_SQLT_NUM);
			 dataTypes.try_emplace(DataType::character, OCCI_SQLCS_NCHAR);
			 dataTypes.try_emplace(DataType::date, OCCI_SQLCS_NCHAR);
			 return  dataTypes;
		 }
		 return  dataTypes;
	 }