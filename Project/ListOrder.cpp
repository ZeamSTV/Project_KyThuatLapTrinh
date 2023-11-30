#include "ListOrder.h"
#include "PurchaseOrder.h"
#include "Library.h"
#include "BasicType.h"

void ListOrder::createOrder()
{
	PurchaseOrder order;
	cout << "Enter patronID: ";
	cin >> order.patron.patronID;
	cout << "Enter ID Book:";
	string titleBook;
	cin >> titleBook;
	Library lib;
	for (Book book : lib.books) {
		if (titleBook == book.title) {
			if (book.getStatus() == BookStatus::Borrowed) {
				book.setStatus(BookStatus::Booked);
				order.bookOrder = book;
				listOrder.push_back(order);
				return;
			}
		}
	}

	cout << "Not found this book";
}

void ListOrder::searchOrder()
{
	cout << "Enter patronID:";
	int patronID;
	cin >> patronID;
	for (PurchaseOrder order : listOrder) {
		if (order.patron.patronID == patronID) {
			order.displayOrder();
			return;
		}
	}
	cout << "Not Found Patron \n";
}

void ListOrder::updateOrder()
{
	deteleOrder();
	createOrder();
}

void ListOrder::deteleOrder()
{
	cout << "Enter patronID:";
	int patronID;
	cin >> patronID;
	for (PurchaseOrder order : listOrder) {
		if (order.patron.patronID == patronID) {
			auto it = std::find(listOrder.begin(), listOrder.end(), order);
			listOrder.erase(it);
		}
	}

}

void ListOrder::showAll()
{
	for (PurchaseOrder order : listOrder) {
		order.displayOrder();
	}
}

void ListOrder::displayMenu()
{
	int choose = 100;
	do {
		cout << "-------Menu Purchase Order Book--------" << endl;
		cout << "----1:Show All Order Book" << endl;
		cout << "----2:Create Order Book" << endl;
		cout << "----3:Search Order Book" << endl;
		cout << "----4:Delete Order Book" << endl;
		cout << "----5:Update Order Book" << endl;
		cout << "----0: Quit" << endl;
		cout << "Please choose Feature" << endl;
		cin >> choose;

		switch (choose)
		{
		case 1: showAll();
			break;
		case 2: createOrder();
			break;
		case 3: searchOrder();
			break;
		case 4: deteleOrder();
			break;
		case 5: updateOrder();
			break;
		default: cout << "Invalid choice. Please try again" << endl;
			break;
		}
	} while (choose != 0);
}
