#pragma once

#include <iostream>
#include <sstream>
#include <windows.h>

using namespace std;

class Account {
private:

public:

protected:
	Actor* customer;
	Actor* adviser;
	double balance;
	double withdrawal;
	double deposit;
};