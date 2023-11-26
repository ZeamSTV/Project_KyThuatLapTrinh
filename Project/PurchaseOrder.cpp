#include "PurchaseOrder.h"

void PurchaseOrder::displayOrder()
{
	cout << "Name: " << patron.name << "Book: " << bookOrder.getTitle() << endl;
}
