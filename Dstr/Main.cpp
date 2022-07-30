#include <sstream>
#include <iostream>
#include <fstream>
#include <string>
#include "Order.h"
#include "Orderlist.h"
#include "Queue.h"
#include<windows.h>
using namespace::std;
int Order::count = 0;

int main() {
	Queue userqueue(100);//Queue is made of 100 users.
	int choice, opt, noItem;
	Order order;
	Orderlist list;
	string id, itId, itRec, brand, price, orderDel;

	list.insert("001", "111", "Motherboard", "Asus", "780$", 10);
	list.insert("002", "121", "Monitor", "Samsung", "344$", 100);
	list.insert("003", "123", "Motherboard", "Dell", "123.46$", 50);
	list.insert("004", "133", "CPU", "Intel", "24.60$", 25);
	list.insert("005", "145", "Printer", "HP", "569$", 46);

	cout << "1. Administrator\n2.Sale order executive \n Enter choice: ";
	cin >> choice;
	system("cls");

	if (choice == 1) {
		while (1) {
			string user, pass;
			cout << "Username: ";
			cin >> user;
			cout << "Password: ";
			cin >> pass;
			if (user == "admin" && pass == "admin123") {
				Sleep(1000);
				cout << "Log IN Successfull." << endl;
				Sleep(1000);
				system("cls");
				while (1) {
					cout << "1. Obtain purchase order records\n2. Modify/UpitemID order according to the priority" << endl;
					cout << "3. View purchase orders\n4.Sort purchase orders\n5.Search purchase order" << endl;
					cout << "6.View Sales Report\n7.View Summary Report\n8.Logout" << endl;
					cin >> choice;

					switch (choice)
					{
					case 1:
						system("cls");
						cout << "\n--------------------------------------------" << endl;
						cout << "\n..................>>>>>>" << endl;
						cout << "\nPurchase Order Records Obtained Succsefully..";
						system("pause");
						system("cls");
						break;
					case 2:
						cout << "1) edit" << endl;
						cout << "2) delete" << endl;
						cout << "3) add" << endl;

						list.sort();
						cin >> opt;
						switch (opt)
						{
						case 1:
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
							cout << "Enter No. of items :" << endl;
							cin >> noItem;
							list.edit(id, itId, itRec, brand, price, noItem);
							cout << "Edited Successfully.." << endl;
							cout << "--------------------------------------" << endl;
							system("pause");
							system("cls");
							break;
						case 2:
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
						case 3:
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
							cout << "Enter No. of items :" << endl;
							cin >> noItem;
							list.insert(id, itId, itRec, brand, price, noItem);
							cout << "Added Successfully.." << endl;
							cout << "--------------------------------------" << endl;
							system("pause");
							system("cls");
							break;
						}
					case 3:
						system("cls");
						list.displayFromHead();
						system("pause");
						system("cls");
						break;
					case 4:
						//merge sort here
						break;
					case 5:
						//expo search here
						break;
					case 6:
						system("cls");
						cout << "1) View in ascending Order based on No.Items" << endl;
						cout << "2) View in descending Order based on No.Items" << endl;
						list.sort();
						cin >> opt;
						if (opt == 1) {
							system("cls");
							list.displayFromHead();
							cout << "\n--------------------------------------------" << endl;
							system("pause");
							system("cls");
							break;
						}
						else if (opt == 2) {
							system("cls");
							list.displayFromTail();
							cout << "\n--------------------------------------------" << endl;
							system("pause");
							system("cls");
							break;
						}
					case 7:
						cout << "1) View in ascending Order based on No.Items" << endl;
						cout << "2) View in descending Order based on No.Items" << endl;
						list.sort();
						cin >> opt;
						if (opt == 1) {
							system("cls");
							list.displayHeadsummary();
							cout << "\n--------------------------------------------" << endl;
							system("pause");
							system("cls");
							break;
						}
						else if (opt == 2) {
							system("cls");
							list.displayTailsummary();
							cout << "\n--------------------------------------------" << endl;
							system("pause");
							system("cls");
							break;
						}
					case 8:
						return 0;
					default:
						break;
					}
				}
				return 0;
			}
			Sleep(2000);
			cout << "Invalid Username or Password!!" << endl;
			Sleep(1000);
			cout << "Please Try Again.." << endl;
			Sleep(1500);
			system("cls");
		}
	}
	else if (choice == 2) {
		while (1) {
			string user, pass;
			cout << "Username: ";
			cin >> user;
			cout << "Password: ";
			cin >> pass;
			if (user == "sales" && pass == "sale123") {
				Sleep(1000);
				cout << "Log IN Successfull." << endl;
				Sleep(1000);
				system("cls");
				while (1) {
					cout << "1. Obtain purchase order records\n2. Modify/UpitemID order according to the priority" << endl;
					cout << "\n3. View purchase orders\n4.Sort purchase orders\n5.Search purchase order" << endl;
					cout << "\n6.Logout" << endl;
					cin >> choice;
					switch (choice)
					{
					case 1:
						system("cls");
						cout << "\n--------------------------------------------" << endl;
						cout << "\n..................>>>>>>" << endl;
						cout << "\nPurchase Order Records Obtained Succsefully..";
						system("pause");
						system("cls");
						break;
					case 2:
						cout << "1) edit" << endl;
						cout << "2) delete" << endl;
						cout << "3) add" << endl;

						list.sort();
						cin >> opt;
						switch (opt)
						{
						case 1:
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
							cout << "Enter No. of items :" << endl;
							cin >> noItem;
							list.edit(id, itId, itRec, brand, price, noItem);
							cout << "Edited Successfully.." << endl;
							cout << "--------------------------------------" << endl;
							system("pause");
							system("cls");
							break;
						case 2:
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
						case 3:
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
							cout << "Enter No. of items :" << endl;
							cin >> noItem;
							list.insert(id, itId, itRec, brand, price, noItem);
							cout << "Added Successfully.." << endl;
							cout << "--------------------------------------" << endl;
							system("pause");
							system("cls");
							break;
						}
					case 3:
						system("cls");
						list.displayFromHead();
						system("pause");
						system("cls");
						break;
					case 4:
						// merge sort here
						break;
					case 5:
						// expo search here
						break;
					case 6:
						return 0;
					default:
						break;
					}
				}
				return 0;
			}
			Sleep(2000);
			cout << "Invalid Username or Password!!" << endl;
			Sleep(1000);
			cout << "Please Try Again.." << endl;
			Sleep(1500);
			system("cls");
		}
	}
	system("pause");
	return 0;
}