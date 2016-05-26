#pragma once
#include <iostream>
#include <string>

using namespace std;
class user
{
private:
	bool admin;
public:
	string name;

	user(void);
	user(string name);
	~user(void);
	void set_rignts(); // to set admin rights
	bool get_adm();
};

