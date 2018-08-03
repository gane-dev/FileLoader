#include "stdafx.h"
#include<nlohmann/json.hpp>
using json = nlohmann::json;
#include<string>
#include<fstream>
#include "ConfigValues.hpp"
#include"GetPropertyValues.hpp"
using namespace std;

GetPropertyValues::GetPropertyValues()
	{
		json j;
		std::ifstream i;
		i.open("config.json");
		i >> j;
		from_json(j, cfg);
	}
	void GetPropertyValues::from_json(const json& j, ConfigValues& p) {
		p.connectionString = j.at("connectionString").get<std::string>();
		p.user = j.at("user").get<std::string>();
		p.password = j.at("password").get<int>();
	}
	

