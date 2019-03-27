#pragma once

#include <iostream>
#include <string> 
#include <fstream>

using namespace std;

class User {
public:
	string GetUsername() { return username; }
	string GetPassword() { return password; }
	int GetStatus() { return status; }

	void SetUsername(string name) { username = name; }
	void SetPassword(string pass) { password = pass; }
	void SetStatus(int stat) { status = stat; }

	User( string name, string pass, int stat );

	string GetUserAll();

	bool SaveUser( User *user );

private:
	string username;
	string password;
	int status; // 1 Admin, 2 User
};
