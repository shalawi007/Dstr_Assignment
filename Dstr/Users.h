#pragma once
#include<iostream>
#include<string>
using namespace std;

class Users
{
public:
	string orderID;
	string name;
	string password;
	string Role;
	string phoneNo;
	string email;
public:
	Users();
	Users(string id, string n, string pas, string t, string ph, string em);
	void displayInfo();
};

