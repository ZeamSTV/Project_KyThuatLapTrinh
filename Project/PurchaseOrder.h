#pragma once
#include "Patron.h"
#include "Book.h"
class PurchaseOrder
{
public:
	Patron patron;
	Book bookOrder;
	void displayOrder();

	bool operator==(const PurchaseOrder& other) const {
		return (this->patron.name == other.patron.name);
	}
};

