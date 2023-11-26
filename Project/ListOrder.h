#pragma once
#include "PurchaseOrder.h"
#include <list>
class ListOrder
{
public:
	static std::list<PurchaseOrder> listOrder;
	void createOrder();
	void searchOrder();
	void updateOrder();
	void deteleOrder();
	void showAll();
};

