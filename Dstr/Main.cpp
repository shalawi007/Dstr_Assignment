#include <sstream>
#include <iostream>
#include <fstream>
#include <string>
#include "Order.h"
#include "Orderlist.h"
#include "Report.h"

using namespace::std;
void itemDisplay()
{
	int itemId[5]
		= { 001, 002, 003, 004, 005 };

	string itemRecords[5]
		= { "CPU", "Mouse", "Laptop", "Printer", "Fax Machine" };

	int itemCost[5]
		= { 100, 200, 150, 0, 200 };

	string itemBrand[5]
		= { "Dell", "Apple", "HP", "Samsung", "LG" };

	for (int i = 0; i < 5; i++)
	{
		cout << itemId[i] << ",";
		cout << itemRecords[i] << ",";
		cout << itemCost[i] << ",";
		cout << itemBrand[i] << endl;
	}
}

void saleOrderExecutiveMenu()
{
	int soeChoice;
	cout << "1. Obtain purchase order records\n2. Modify/UpitemID order according to the priority\n3. View purchase orders\n4. Sort purchase orders\n5. Search purchase order\n6. Logout" << endl;
	cin >> soeChoice;
	if (soeChoice == 1)
	{
		obtainPurchaseOrder();
	}
	else if (soeChoice == 2)
	{
		upitemIDOrder();
	}
	else if (soeChoice == 3)
	{
		itemDisplay();
	}
	else if (soeChoice == 4)
	{
		sortOrder();
	}
	else if (soeChoice == 5)
	{
		searchOrder();
	}
	else if (soeChoice == 6)
	{
		logOut();
	}
}

void administratorMenu()
{
	int aChoice;
	Report report;
	Orderlist list;
	
	
	cout << "1. Obtain purchase order records\n2. Modify/UpitemID order according to the priority\n3. View purchase orders\n4. Sort purchase orders\n5. Search purchase order\n6. View Sales Report\n7. View Summary Report\n8. Logout" << endl;
	cin >> aChoice;
	if (aChoice == 1)
	{
		orderlist.insert("001","111","Motherboard","Asus","100$",10);
	}
	else if (aChoice == 2)
	{
			int choice;
			string ID;
			cout << "1) edit" << endl;
			cout << "2) delete" << endl;
			cout << "3) add" << endl;
			cin >> choice;
			switch(choice){
				case 1: {
					cout << "Enter Order ID :" << endl;
					cin >> ID;
					list.edit(ID, );
					list.
					break;
				}
			}
		
	}
	else if (aChoice == 3)
	{
		itemDisplay();
	}
	else if (aChoice == 4)
	{
		sortOrder();
	}
	else if (aChoice == 5)
	{
		searchOrder();
	}
	else if (aChoice == 6)
	{
		report.displayFromHead();
	}
	else if (aChoice == 7)
	{
		report.displayHeadsummary();
	}
	else if (aChoice == 8)
	{
		logOut();
	}
}

int main()
{
	int choice;
	Order order;
	Report report;
	cout << "1. Sale order executive\n2. Administrator\n Enter choice: ";
	cin >> choice;
	if (choice == 1)
	{
		string soeUsername, soePassword;
		cout << "Enter ID: ";
		cin >> soeUsername;
		if (soeUsername == "SOE123")
		{
			cout << "Enter password: ";
			cin >> soePassword;
			if (soePassword == "soe123")
			{
				saleOrderExecutiveMenu();
			}
			else if (soePassword != "soe123")
			{
				cout << "Password is incorrect!" << endl;
				cout << "Enter password again: ";
				cin >> soePassword;
				if (soePassword == "soe123")
				{
					saleOrderExecutiveMenu();
				}
				else
				{
					cout << "Password is incorrect!";
					main();
				}
			}
		}
		else if (soeUsername != "soe123")
		{
			cout << "Username is incorrect!" << endl;
			cout << "Enter username again: ";
			cin >> soeUsername;
			if (soeUsername == "SOE123")
			{
				cout << "Enter password: ";
				cin >> soePassword;
				if (soePassword == "soe123")
				{
					saleOrderExecutiveMenu();
				}
				else if (soePassword != "soe123")
				{
					cout << "Password is incorrect!" << endl;
					cout << "Enter password again: " << endl;
					cin >> soePassword;
					if (soePassword == "soe123")
					{
						saleOrderExecutiveMenu();
					}
					else
					{
						cout << "Password is incorrect!" << endl;
						main();
					}
				}
			}
		}
		else
		{
			cout << "Username is incorrect!" << endl;
			main();
		}
	}

	else if (choice == 2)
	{
		string aUsername, aPassword;
		cout << "Enter ID: ";
		cin >> aUsername;
		if (aUsername == "SOE123")
		{
			cout << "Enter password: ";
			cin >> aPassword;
			if (aPassword == "soe123")
			{
				saleOrderExecutiveMenu();
			}
			else if (aPassword != "soe123")
			{
				cout << "Password is incorrect!" << endl;
				cout << "Enter password again: ";
				cin >> aPassword;
				if (aPassword == "soe123")
				{
					saleOrderExecutiveMenu();
				}
				else
				{
					cout << "Password is incorrect!" << endl;
					main();
				}
			}
		}
		else if (aUsername != "soe123")
		{
			cout << "Username is incorrect!" << endl;
			cout << "Enter username again: ";
			cin >> aUsername;
			if (aUsername == "SOE123")
			{
				cout << "Enter password: ";
				cin >> aPassword;
				if (aPassword == "soe123")
				{
					saleOrderExecutiveMenu();
				}
				else if (aPassword != "soe123")
				{
					cout << "Password is incorrect!" << endl;
					cout << "Enter password again: ";
					cin >> aPassword;
					if (aPassword == "soe123")
					{
						saleOrderExecutiveMenu();
					}
					else
					{
						cout << "Password is incorrect!" << endl;
						main();
					}
				}
			}
		}
		else
		{
			cout << "Username is incorrect!" << endl;
			main();
		}
	}
}
