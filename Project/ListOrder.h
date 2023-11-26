#pragma once
#include "PurchaseOrder.h"
#include <vector>
class ListOrder
{
public:
	std::vector<PurchaseOrder> listOrder;
	void createOrder();
	void searchOrder();
	void updateOrder();
	void deteleOrder();
	void showAll();
};

