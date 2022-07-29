#include "Orderlist.h"
Orderlist::Orderlist()
{
	head = nullptr;
	tail = nullptr;
}

void Orderlist::insert(string Id, string itId, string itR, string b, string p, int nIt)
{
	Order order(Id, itId, itR, b, p, nIt);
	Node* newNode;
	newNode = new Node;
	newNode->next = nullptr;
	newNode->prev = nullptr;
	newNode->data = order;

	if (head == nullptr)
	{
		head = newNode;
		tail = newNode;
	}
	else
	{
		tail->next = newNode;
		newNode->prev = tail;
		tail = newNode;
	}
}

void Orderlist::displayFromHead()
{
	Node* temp = head;
	if (head == nullptr)
	{
		cout << "NO Orders To show.." << endl;
	}
	else
	{
		while (true)
		{
			temp->data.showOrderInfo();
			cout << endl;
			temp = temp->next;

			if (temp == nullptr)
				break;

		}
	}
}

void Orderlist::displayFromTail()
{
	Node* temp = tail;
	if (head == nullptr)
	{
		cout << "NO Orders To show.." << endl;
	}
	else
	{
		while (true)
		{
			temp->data.showOrderInfo();
			cout << endl;
			temp = temp->prev;

			if (temp == nullptr)
				break;

		}
	}
}
void Orderlist::search(string d) //searching used here
{
	Node* temp = tail;
	if (head == nullptr)
	{
		cout << "NO Orders To search.." << endl;
	}
	else {
		while (true)
		{
			if (temp->data.itemID == d || temp->data.itemRecord == d || temp->data.Brand == d)
			{
				temp->data.showOrderInfo();

				break;
			}

			else
			{
				temp = temp->prev;
			}
		}
	}
}
void Orderlist::edit(string Id, string itId, string itR, string b, string p, int nIt)
{
	Node* temp = tail;

	while (true)
	{
		if (temp->data.orderID == Id)
		{

			temp->data.itemID = itId;
			temp->data.itemRecord = itR;
			temp->data.Brand = b;
			temp->data.price = p;
			temp->data.NoItems = nIt;
			break;
		}

		else
		{
			temp = temp->prev;
		}
	}

}
void Orderlist::sort() {
	Node* current = NULL, * index = NULL;
	Order temp;

	if (head == NULL) {
		cout << "NO Orders To show.." << endl;
	}
	else {
		for (current = head; current->next != NULL; current = current->next) {
			//Index will point to node next to current  
			for (index = current->next; index != NULL; index = index->next) {
				//comparing number of items if it greater than index  
				if (current->data.NoItems > index->data.NoItems) {
					temp = current->data;
					current->data = index->data;
					index->data = temp;
				}
			}
		}
	}
}
void Orderlist::deleteInBetween(string val)
{
	Node* temp = tail;
	Node* temp1 = head;
	if (head == nullptr)
	{
		cout << "NO Order To delete.." << endl;
	}
	else {
		while (true)
		{
			if (temp1->prev || temp1->next == nullptr)
			{
				temp1->prev->next = nullptr;

				delete temp1;
				break;
			}
			if (temp->prev || temp->next == nullptr)
			{
				temp->prev->next = nullptr;

				delete temp;
				break;
			}
			if (temp->data.orderID == val)
			{

				temp->prev->next = temp->next;
				temp->next->prev = temp->prev;
				delete temp;
				break;
			}

			else
			{
				temp = temp->prev;
			}
		}
	}
}
void Orderlist::displayHeadsummary()
{
	Node* temp = head;
	if (head == nullptr)
	{
		cout << "NO Orders To show.." << endl;
	}
	else
	{
		while (true)
		{
			temp->data.showSummary();
			cout << endl;
			temp = temp->next;

			if (temp == nullptr)
				break;

		}
	}
}
void Orderlist::displayTailsummary()
{
	Node* temp = tail;
	if (head == nullptr)
	{
		cout << "NO Orders To show.." << endl;
	}
	else
	{
		while (true)
		{
			temp->data.showSummary();
			cout << endl;
			temp = temp->prev;

			if (temp == nullptr)
				break;

		}
	}
}

Orderlist::~Orderlist()
{


}
