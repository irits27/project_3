#ifndef OVERCOAT_H
#define OVERCOAT_H

#include <iostream>
#include <string>
using namespace std;

class Overcoat {
private:
    std::string name;
    std::string type;
    int size;
    double price;

public:
    Overcoat() : name(""), type("Unisex"), size(0), price(0.0) {}

    Overcoat(string name, string type, int size, double price)
        : name(name), type(type), size(size), price(price) {}

    void setName(const string& name) { this->name = name; }
    void setType(const string& type) { this->type = type; }
    void setSize(int size) { this->size = size; }
    void setPrice(double price) { this->price = price; }

    string getName() const { return name; }
    string getType() const { return type; }
    int getSize() const { return size; }
    double getPrice() const { return price; }

    bool operator==(const Overcoat& other) const {
        return this->type == other.type;
    }

    bool operator!=(const Overcoat& other) const {
        return this->type != other.type;
    }

    bool operator>(const Overcoat& other) const {
        return this->price > other.price;
    }

    bool operator>=(const Overcoat& other) const {
        return this->price >= other.price;
    }

    bool operator<(const Overcoat& other) const {
        return this->price < other.price;
    }

    bool operator<=(const Overcoat& other) const {
        return this->price <= other.price;
    }


    Overcoat& operator++() {
        ++size;
        return *this;
    }

    Overcoat& operator--() {
        --size;
        return *this;
    }

    Overcoat operator++(int) {
        Overcoat temp = *this;
        ++(*this);
        return temp;
    }

    Overcoat operator--(int) {
        Overcoat temp = *this;
        --(*this);
        return temp;
    }

    friend istream& operator>>(istream& in, Overcoat& overcoat) {
        cout << "Enter name: ";
        in >> overcoat.name;
        cout << "Enter type (male/female/child): ";
        in >> overcoat.type;
        cout << "Enter size: ";
        in >> overcoat.size;
        cout << "Enter price: ";
        in >> overcoat.price;
        return in;
    }

    friend ostream& operator<<(ostream& out, const Overcoat& overcoat) {
        out << "Name: " << overcoat.name << "\n"
            << "Type: " << overcoat.type << "\n"
            << "Size: " << overcoat.size << "\n"
            << "Price: " << overcoat.price << "\n";
        return out;
    }
};
#endif
