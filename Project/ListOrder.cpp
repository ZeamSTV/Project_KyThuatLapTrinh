#include "ListOrder.h"
#include "PurchaseOrder.h"
#include "Library.h"
#include "BasicType.h"

void ListOrder::createOrder()
{
	PurchaseOrder order;
	cout << "Enter patron: ";
	cin >> order.patron.name;
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
	cout << "Enter patron:";
	string namepatron;
	for (PurchaseOrder order : listOrder) {
		if (order.patron.name == namepatron) {
			order.displayOrder();
		}
	}
}

void ListOrder::updateOrder()
{
	deteleOrder();
	createOrder();
}

void ListOrder::deteleOrder()
{
	cout << "Enter patron:";
	string namepatron;
	for (PurchaseOrder order : listOrder) {
		if (order.patron.name == namepatron) {
			listOrder.remove(order);
		}
	}
}

void ListOrder::showAll()
{
	for (PurchaseOrder order : listOrder) {
		order.displayOrder();
	}
}
