#include "pch.h"
#include "User.h"


User::User(string n, string p, int s) {
	this->SetUsername(n);
	this->SetPassword(p);
	this->SetStatus(s);
}

string User::GetUserAll() {
	string username = this->GetUsername();
	string password = this->GetPassword();
	string status = std::to_string(this->GetStatus());
	return username + " " + password + " " + status;
}

bool User::SaveUser(User *user) {
	string name = user->GetUsername();
	string pass = user->GetPassword();
	string status = std::to_string(user->GetStatus());
	
	std::fstream file;

	file.open("test.txt", std::ios_base::app);

	if (!file.is_open()) {
		return false;
	}

	file << name + " /" + pass + " /" + status << std::endl;

	file.close();

	return true;
}
/*
void User::LoadFile(string file) {
	std::ifstream input(file);

	if (input.is_open()) {
		std::string line;

		std::cout << std::endl;
		
		while (std::getline(input, line)) {
			std::cout << line << std::endl;
		}
		input.close();
	}
}
*/