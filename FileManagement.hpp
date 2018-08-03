#pragma once
#include<iostream>
#include <experimental/filesystem>
#include <filesystem>  
#include<string>
#include"FileType.hpp"
using namespace std::experimental::filesystem::v1;
using namespace std;
class FileManagement
{
public:
	FileManagement(const string& p_filePath, const string& p_archivePath, const string& p_errorPath,const FileType& p_fileType) :filePath(p_filePath),
					archivePath(p_archivePath),errorPath(p_errorPath),fileType(p_fileType){}
	int ProcessFiles() {}
	void LoadFile(const directory_entry& dir) {}
private:

	int ArchiveFile(const path& filePath, const string& fileName,bool error) {}
	const string& filePath;
	const string& archivePath;
	const string& errorPath;
	const FileType& fileType;
};
