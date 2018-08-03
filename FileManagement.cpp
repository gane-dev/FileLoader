
#include "stdafx.h"
#include"FileManagement.hpp"
#include <experimental/filesystem>
#include <filesystem>  
#include<string>
#include"FileType.hpp"
using namespace std::experimental::filesystem::v1;
using namespace std;
using namespace std::chrono;

int FileManagement::ProcessFiles() {
	if (!exists(filePath))
	{
		for (auto& p : directory_iterator(filePath))
			LoadFile(p);
	}

}
void FileManagement::LoadFile(const directory_entry& dir) {
	ArchiveFile(dir.path(), dir.path().filename, false);
}
int FileManagement::ArchiveFile(const path& filePath, const string& fileName, bool error) {

	std::chrono::system_clock::time_point now = std::chrono::system_clock::now();

	string archiveFileName;
		if (fileType == FileType::EXCEL || fileType == FileType::EXCEL_OPTION || fileType == FileType::EXCEL_SHORT)
			archiveFileName = fileName.substr(0, fileName.find_last_of(".")) + to_string(now.time_since_epoch().count()) + ".xlsx";
		else
			archiveFileName = fileName.substr(0, fileName.find_last_of(".")) + to_string(now.time_since_epoch().count()) + ".txt";
		if (error)
			//error - move to error folder
			copy_file(filePath, errorPath + "/" + archiveFileName);
		else
			//empty - move to archive folder
			copy_file(filePath, archivePath + "/" + archiveFileName);
			
		remove(filePath);
		return  -0;
}