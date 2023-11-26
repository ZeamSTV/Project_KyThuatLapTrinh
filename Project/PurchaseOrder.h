#pragma once
#include "Patron.h"
#include "Book.h"
class PurchaseOrder
{
public:
	Patron patron;
	Book bookOrder;
	void displayOrder();

};

