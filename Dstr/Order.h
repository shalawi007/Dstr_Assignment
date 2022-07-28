#pragma once
#include<iostream>
#include<string>
using namespace std;
class Order
{
public:
	string orderID;
	string itemID;
	string itemRecord;
	string Brand;
	string price;
	int NoItems;

public:
	static int count;
	Order();
	Order(string Id, string itId, string itR, string b, string p,  int nIt);
	Order(Order& obj);
	void showOrderInfo();
	void showSummary();
	~Order();
};