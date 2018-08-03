#pragma once
#include "ConfigValues.hpp"

#include<nlohmann/json.hpp>
using json = nlohmann::json;
class GetPropertyValues
{
public:
	ConfigValues cfg;
	void from_json(const json& j, ConfigValues& p) {}
public:
	GetPropertyValues()
	{}
	~GetPropertyValues()
	{}
};