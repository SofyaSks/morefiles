#pragma once
#include <string>
#include <iostream>


struct date {
	int day;
	int month;
	int year;
};

struct person {
	std::string name;
	date birthday;
	std::string position = "programer";
	int salary = 50000;
};

void showobj(date D);
void showobj(person P);