#pragma once
#include "Order.h"
#include <iostream>
#include<string>
using namespace std;

struct Node
{
	Order data;
	Node* next;
	Node* prev;
};

class Orderlist
{
	Node* head;
	Node* tail;
public:
	Orderlist();
	void insert(string Id, string itId, string itR, string b, string p, int nIt);
	void displayFromHead();
	void displayFromTail();
	void deleteInBetween(string val);
	void search(string d);
	void edit(string Id, string itId, string itR, string b, string p, int nIt);
	~Orderlist();

};