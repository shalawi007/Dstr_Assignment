#pragma once
#include<iostream>
#include<string>
using namespace std;

class Users
{
public:
	[] string username;
	[] string name;
	[] string password;
	[] string Role;
public:
	Users();
	Users(string id, string n, string pas, string t, string ph, string em);
	void displayInfo();
};

