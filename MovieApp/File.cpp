#include "pch.h"
#include "File.h"

bool File::SaveUser(User *user)
{
	string sUser = user->GetUserAll();

	std::fstream file;

	file.open("test.txt", std::ios_base::app);

	if (!file.is_open()) {
		return false;
	}

	file << sUser << std::endl;

	file.close();
	
	return true;
}