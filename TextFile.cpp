#include "stdafx.h"
#include<fstream>
#include<string>
#include"TextFile.hpp"
#include <experimental/filesystem>
#include <filesystem>  
#include<string>
#include"FileType.hpp"
using namespace std::experimental::filesystem::v1;
using namespace std;

int TextFile::ProcessTextFile(const path &filePath,char delim) {
	std::ifstream i;
	i.open(filePath);
	while (!i.eof())
	{
		i.getline()
	}
	i >> j;
}