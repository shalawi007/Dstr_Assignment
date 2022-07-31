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
void Orderlist::search(string d) //iterative searching used here ps: need some adjusment 
{
	Node* temp = tail;
	if (head == nullptr)
	{
		cout << "NO Orders To search.." << endl;
	}
	else {
		while (true)
		{
			if (temp->data.orderID == d || temp->data.itemRecord == d || temp->data.Brand == d)
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
void Orderlist::sort() { //Quick sort using recursive implemntation
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
			else if (temp->prev || temp->next == nullptr)
			{
				temp->prev->next = nullptr;

				delete temp;
				break;
			}
			else if (temp->data.orderID == val)
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


Orderlist::~Orderlist() {
}

////quick sort algorithm
//// combining the two halves into sorted data
//void Orderlist::Merge(int* array[], int left, int right, int mid) {
//	//Right to mid+1 and left to mid have previously been arranged.
//	int i, j, k, temp[right - left + 1];
//	i = left;
//	k = 0;
//	j = mid + 1;
//
//	// Creating temp[] by merging two elements.
//	while (i <= mid && j <= right) {
//		if (array[i] < array[j]) {
//			temp[k] = array[i];
//			k++;
//			i++;
//		}
//		else {
//			temp[k] = array[j];
//			k++;
//			j++;
//		}
//	}
//
//	// Filling temp[] with all the lingering values between i and mid.
//	while (i <= mid) {
//		temp[k] = array[i];
//		k++;
//		i++;
//	}
//
//	// Adding all the remaining values, starting with j, into temp[].
//	while (j <= right) {
//		temp[k] = array[j];
//		k++;
//		j++;
//	}
//
//	// Sorting the data in temp[] and assign it to array[].
//	for (i = left; i <= right; i++) {
//		array[i] = temp[i - left];
//	}
//}
//
//// A split array function.
//void Orderlist::MergeSort(int* array[], int left, int right) {
//	int mid;
//	if (left < right) {
//		mid = (left + right) / 2;
//		// Spliting the data into two equal halves.
//		MergeSort(array[], left, mid);
//		MergeSort(array[], mid + 1, right);
//
//		// Merging them to get sorted output.
//		Merge(array[], left, right, mid);
//	}
//}
//
////	int main() {
////		int n, i;
////		cout << "\nEnter the number of data element to be sorted: ";
////		cin >> n;
////
////		int arr[n];
////		for (i = 0; i < n; i++) {
////			cout << "Enter element " << i + 1 << ": ";
////			cin >> arr[i];
////		}
////
////		MergeSort(arr, 0, n - 1);
////
////		// Printing the final sorted data.
////		cout << "\nSorted Data ";
////		for (i = 0; i < n; i++)
////			cout << "->" << arr[i];
////
////		return 0;
////	}
////}
//
////Orderlist::Expsearch() {
////
////}