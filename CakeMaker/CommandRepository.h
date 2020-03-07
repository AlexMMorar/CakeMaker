#pragma once

#include<string>
#include"Command.h"


class CommandRepository {
private:
	std::string pathToSave;
	Command* commandsHistory;
	int nrOfTakenCommands;
	static const int maximumNrOfCommands = 100;

	bool saveToFile();
	bool checkNumberOfCommands();
	void resetCounter();
public:

	CommandRepository();
	CommandRepository(std::string path);
	bool saveCommand(std::string name, int id);
	
};