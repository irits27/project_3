#include "Shop.h"
#include <iostream>

int main() {
    Shop myShop;

    Overcoat coat1("Jacket", "male", 48, 150.0);
    Overcoat coat2("Coat", "female", 42, 200.0);
    Overcoat coat3("Parka", "child", 36, 120.0);

    myShop.addOvercoat(coat1);
    myShop.addOvercoat(coat2);
    myShop.addOvercoat(coat3);

    cout << "All coats in the shop:\n";
    myShop.showAll();

    cout << "\nSorted by price:\n";
    myShop.sortByPrice();
    myShop.showAll();

    cout << "\nSearch by type 'male':\n";
    myShop.searchByType("male");

    myShop.editSize(1, 44);
    cout << "\nAfter editing size of second coat:\n";
    myShop.showAll();

    myShop.removeOvercoat(0);
    cout << "\nAfter removing first coat:\n";
    myShop.showAll();

    return 0;
}
