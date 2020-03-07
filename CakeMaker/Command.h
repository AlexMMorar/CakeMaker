#pragma once
#include <string>

class Command {

private:
	std::string date;
	std::string nameOfCookie;
	int id;

public:
	Command();
	Command(std::string date, std::string nameOfCookie, int id);
	std::string getDate();
	std::string getName();
	int getId();
};