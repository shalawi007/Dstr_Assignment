#include <sstream>
#include <iostream>
#include <fstream>
#include <string>
#include "Order.h"
#include "Orderlist.h"

using namespace::std;

void saleOrderExecutiveMenu()
{
	int soeChoice, opt, noItem;
	Orderlist list;
	string id, itId, itRec, brand, price, orderDel;
	char back;
	cout << "1. Obtain purchase order records\n2. Modify/UpitemID order according to the priority\n3. View purchase orders\n4. Sort purchase orders\n5. Search purchase order\n6. Logout" << endl;
	cin >> soeChoice;
	if (soeChoice == 1)
	{
		do {
			system("cls");
			cout << "\n--------------------------------------------" << endl;
			cout << "\n..................>>>>>>" << endl;
			cout << "\nPurchase Order Records Obtained Succsefully..";
			system("pause");
			system("cls");
			cout << "\n> Press [B] to display main menu" << endl;
			cin >> back;
			cout << endl;
		} while (back == 'B' || back == 'b'); {
			cout << "\n--------------------------------------------" << endl;
			administratorMenu();
		}
	}
	else if (soeChoice == 2)
	{
		cout << "1) edit" << endl;
		cout << "2) delete" << endl;
		cout << "3) add" << endl;
		list.sort();
		cin >> opt;
		switch (opt) {
		case 1: {
			system("cls");
			cout << "--------------------------------------" << endl;
			cout << "Enter Order ID :" << endl;
			cin >> id;
			cout << "Enter Item ID :" << endl;
			cin >> itId;
			cout << "Enter Item Record :" << endl;
			cin >> itRec;
			cout << "Enter Item Brand :" << endl;
			cin >> brand;
			cout << "Enter Item price in ($):" << endl;
			cin >> price;
			list.edit(id, itId, itRec, brand, price, noItem);
			cout << "Edited Successfully.." << endl;
			cout << "--------------------------------------" << endl;
			system("pause");
			system("cls");
			break;
		}
		case 2: {
			system("cls");
			cout << "--------------------------------------" << endl;
			cout << "Enter the Order ID:";
			cin >> orderDel;
			list.deleteInBetween(orderDel);
			cout << "Deleted Successfully.." << endl;
			cout << "--------------------------------------" << endl;
			system("pause");
			system("cls");
			break;
		}
		case 3: {
			system("cls");
			cout << "--------------------------------------" << endl;
			cout << "Enter Order ID :" << endl;
			cin >> id;
			cout << "Enter Item ID :" << endl;
			cin >> itId;
			cout << "Enter Item Record :" << endl;
			cin >> itRec;
			cout << "Enter Item Brand :" << endl;
			cin >> brand;
			cout << "Enter Item price in ($):" << endl;
			cin >> price;
			list.insert(id, itId, itRec, brand, price, noItem);
			cout << "Added Successfully.." << endl;
			cout << "--------------------------------------" << endl;
			system("pause");
			system("cls");
			break;
		}
		}
	}
	else if (soeChoice == 3)
	{
		do {
			system("cls");
			list.displayFromHead();
			system("pause");
			system("cls");
			cout << "\n> Press [B] to display main menu" << endl;
			cin >> back;
			cout << endl;
		} while (back == 'B' || back == 'b'); {
			cout << "\n--------------------------------------------" << endl;
			administratorMenu();
		}
	}
	else if (soeChoice == 4)
	{
		/*sortOrder();*/
	}
	else if (soeChoice == 5)
	{
		/*searchOrder();*/
	}
	else if (soeChoice == 6)
	{
		main();
	}
}

void administratorMenu()
{
	int aChoice, opt, noItem;
	Orderlist list;
	string id, itId, itRec, brand, price, orderDel;
	char back;

	cout << "1. Obtain purchase order records\n2. Modify/UpitemID order according to the priority" << endl;
	cout << "3. View purchase orders\n4.Sort purchase orders\n5.Search purchase order\n6.View Sales Report\n7.View Summary Report\n8.Logout" << endl;
	cin >> aChoice;
	if (aChoice == 1)
	{
		do {
			system("cls");
			cout << "\n--------------------------------------------" << endl;
			cout << "\n..................>>>>>>" << endl;
			cout << "\nPurchase Order Records Obtained Succsefully..";
			system("pause");
			system("cls");
			cout << "\n> Press [B] to display main menu" << endl;
			cin >> back;
			cout << endl;
		} while (back == 'B' || back == 'b'); {
			cout << "\n--------------------------------------------" << endl;
			administratorMenu();
		}
	}
	else if (aChoice == 2)
	{
		cout << "1) edit" << endl;
		cout << "2) delete" << endl;
		cout << "3) add" << endl;
		list.sort();
		cin >> opt;
		switch (opt) {
		case 1: {
			system("cls");
			cout << "--------------------------------------" << endl;
			cout << "Enter Order ID :" << endl;
			cin >> id;
			cout << "Enter Item ID :" << endl;
			cin >> itId;
			cout << "Enter Item Record :" << endl;
			cin >> itRec;
			cout << "Enter Item Brand :" << endl;
			cin >> brand;
			cout << "Enter Item price in ($):" << endl;
			cin >> price;
			list.edit(id, itId, itRec, brand, price, noItem);
			cout << "Edited Successfully.." << endl;
			cout << "--------------------------------------" << endl;
			system("pause");
			system("cls");
			break;
		}
		case 2: {
			system("cls");
			cout << "--------------------------------------" << endl;
			cout << "Enter the Order ID:";
			cin >> orderDel;
			list.deleteInBetween(orderDel);
			cout << "Deleted Successfully.." << endl;
			cout << "--------------------------------------" << endl;
			system("pause");
			system("cls");
			break;
		}
		case 3: {
			system("cls");
			cout << "--------------------------------------" << endl;
			cout << "Enter Order ID :" << endl;
			cin >> id;
			cout << "Enter Item ID :" << endl;
			cin >> itId;
			cout << "Enter Item Record :" << endl;
			cin >> itRec;
			cout << "Enter Item Brand :" << endl;
			cin >> brand;
			cout << "Enter Item price in ($):" << endl;
			cin >> price;
			list.insert(id, itId, itRec, brand, price, noItem);
			cout << "Added Successfully.." << endl;
			cout << "--------------------------------------" << endl;
			system("pause");
			system("cls");
			break;
		}
		}

	}
	else if (aChoice == 3)
	{
		do {
			system("cls");
			list.displayFromHead();
			system("pause");
			system("cls");
			cout << "\n> Press [B] to display main menu" << endl;
			cin >> back;
			cout << endl;
		} while (back == 'B' || back == 'b'); {
			cout << "\n--------------------------------------------" << endl;
			administratorMenu();
		}
	}
	else if (aChoice == 4)
	{
		/*sortOrder();*/
	}
	else if (aChoice == 5)
	{
		/*searchOrder();*/
	}
	else if (aChoice == 6)// need to add status as extra parameter in Report
	{
		cout << "1) View in ascending Order" << endl;
		cout << "2) View in descending Order" << endl;
		list.sort();
		cin >> opt;
		switch (opt) {
		case 1: {
			do {
				system("cls");
				list.displayFromHead();
				system("pause");
				system("cls");
				cout << "\n> Press [B] to display main menu" << endl;
				cin >> back;
				cout << endl;
			} while (back == 'B' || back == 'b'); {
				cout << "\n--------------------------------------------" << endl;
				administratorMenu();
				break;
			}
		}
		case 2: {
			do {
				system("cls");
				list.displayFromTail();
				system("pause");
				system("cls");
				cout << "\n> Press [B] to display main menu" << endl;
				cin >> back;
				cout << endl;
			} while (back == 'B' || back == 'b'); {
				cout << "\n--------------------------------------------" << endl;
				administratorMenu();
				break;
			}
		}
		}

	}
	else if (aChoice == 7)
	{
	cout << "1) View in ascending Order" << endl;
	cout << "2) View in descending Order" << endl;
	list.sort();
	cin >> opt;
	switch (opt) {
	case 1: {
		do {
			system("cls");
			list.displayHeadsummary();
			system("pause");
			system("cls");
			cout << "\n> Press [B] to display main menu" << endl;
			cin >> back;
			cout << endl;
		} while (back == 'B' || back == 'b'); {
			cout << "\n--------------------------------------------" << endl;
			administratorMenu();
			break;
		}
	}
	case 2: {
		do {
			system("cls");
			list.displayTailsummary();
			system("pause");
			system("cls");
			cout << "\n> Press [B] to display main menu" << endl;
			cin >> back;
			cout << endl;
		} while (back == 'B' || back == 'b'); {
			cout << "\n--------------------------------------------" << endl;
			administratorMenu();
			break;
		}
	}
	}
	}
	else if (aChoice == 8)
	{
		main();
	}
}

int main()
{
	int choice;
	Order order;
	Orderlist list;

	list.insert("001", "111", "Motherboard", "Asus", "780$", 10);
	list.insert("002", "121", "Monitor", "Samsung", "344$", 100);
	list.insert("003", "123", "Motherboard", "Dell", "123.46$", 50);
	list.insert("004", "133", "CPU", "Intel", "24.60$", 25);
	list.insert("005", "145", "Printer", "HP", "569$", 46);
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
		if (aUsername == "admin")
		{
			cout << "Enter password: ";
			cin >> aPassword;
			if (aPassword == "soe123")
			{
				administratorMenu();
			}
			else if (aPassword != "soe123")
			{
				cout << "Password is incorrect!" << endl;
				cout << "Enter password again: ";
				cin >> aPassword;
				if (aPassword == "soe123")
				{
					administratorMenu();
				}
				else
				{
					cout << "Password is incorrect!" << endl;
					main();
				}
			}
		}
		else if (aUsername != "admin")
		{
			cout << "Username is incorrect!" << endl;
			cout << "Enter username again: ";
			cin >> aUsername;
			if (aUsername == "admin")
			{
				cout << "Enter password: ";
				cin >> aPassword;
				if (aPassword == "soe123")
				{
					administratorMenu();
				}
				else if (aPassword != "soe123")
				{
					cout << "Password is incorrect!" << endl;
					cout << "Enter password again: ";
					cin >> aPassword;
					if (aPassword == "soe123")
					{
						administratorMenu();
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
	return 0;
}
