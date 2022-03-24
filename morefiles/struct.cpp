#include "structures.h"
#include <iostream>

void showobj(date D) {
	std::cout << D.day << "." << D.month << "." << D.year << std::endl;
}

void showobj(person P){
	std::cout << "name: " << P.name << std::endl;
	std::cout << "birthday: ";
	showobj(P.birthday);
	std::cout << "Position: " << P.position << std::endl;
	std::cout << "Salary: " << P.salary << std::endl;
}
