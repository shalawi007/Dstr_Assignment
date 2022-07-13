#pragma once
#include "Order.h"
#include <iostream>
using namespace std;

struct OrderNode
{
	Order data;
	OrderNode* next;
	OrderNode* prev;
};

class OrderList
{
	OrderNode* head;
	OrderNode* tail;
public:
	OrderList();
	void insert(string id, string ref, string item, string amt, string pr, string em, string ph, string stat);
	void displayFromHead();
	void displayFromTail();
	void deleteInBetween(string val);
	void search(string d);
	void edit(string m, string d, string ts, string te, string r, string o, int p);
	~OrderList();

};