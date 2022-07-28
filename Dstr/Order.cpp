#include "Order.h"
Order::Order()
{
	orderID = " ";
	itemID = " ";
	itemRecord = " ";
	Brand = " ";
	price = " ";
	NoItems = 0;

}
Order::Order(string Id, string itId, string itR, string b, string p, int nIt)
{
	orderID = Id;
	itemID = itId;
	itemRecord = itR;
	Brand = b;
	price = p;
	NoItems = nIt;
	count++;
}
Order::Order(Order& obj)
{

	orderID = obj.orderID;

	itemID = obj.itemID;

	itemRecord = obj.itemRecord;

	Brand = obj.Brand;

	price = obj.price;

	NoItems = obj.NoItems;
}

void Order::showOrderInfo()
{
	cout << "Order Nr: " << orderID << endl;
	cout << "itemID: " << itemID << endl;
	cout << "Records:" << itemRecord << endl;
	cout << "Item Brand: " << Brand << endl;
	cout << "Price: " << price << endl;
	cout << "NoItems: " << NoItems << endl;
}
void Order::showSummary() {
	cout << "Order Nr: " << orderID << endl;
	cout << "Records:" << itemRecord << endl;
	cout << "Price: " << price << endl;
	cout << "NoItems: " << NoItems << endl;
}
Order::~Order()
{

}
