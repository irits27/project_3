#ifndef SHOP_H
#define SHOP_H

#include "Overcoat.h"
#include <vector>
#include <algorithm>

class Shop {
private:
    vector<Overcoat> shop;

public:
    void addOvercoat(const Overcoat& overcoat) {
        shop.push_back(overcoat);
    }

    void removeOvercoat(int index) {
        if (index >= 0 && index < shop.size()) {
            shop.erase(shop.begin() + index);
        }
        else {
            cerr << "Index out of range!\n";
        }
    }

    void editSize(int index, int newSize) {
        if (index >= 0 && index < shop.size()) {
            shop[index].setSize(newSize);
        }
        else {
            cerr << "Index out of range!\n";
        }
    }

    void searchByType(const std::string& type) const {
        for (const auto& overcoat : shop) {
            if (overcoat.getType() == type) {
                cout << overcoat << "\n";
            }
        }
    }

    void sortByPrice() {
        sort(shop.begin(), shop.end(), [](const Overcoat& a, const Overcoat& b) {
            return a.getPrice() < b.getPrice();
            });
    }

    void showAll() const {
        for (const auto& overcoat : shop) {
            cout << overcoat << "\n";
        }
    }
};

#endif
