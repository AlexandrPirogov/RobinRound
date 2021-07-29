#pragma once
#include <string>
#include <vector>
#include "Task.h"

class Executer
{
public:
	std::string name;
	std::vector<Task> executors_tasks;

	Executer(std::string name) : name(name) {};
};

