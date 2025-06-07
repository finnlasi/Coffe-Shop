#ifndef COFFEE_H
#define COFFEE_H

#include <string>
#include <vector>
using namespace std;

struct Coffee {
    string name;
    double price;
};

void welcome_message();
void setCoffee(Coffee &c, string n, double p);
void initializeCoffes(Coffee coffees[]);
void coffeList(Coffee coffees[], int size);
void addToCart(vector<Coffee> &cart, Coffee coffees[], int size);
void printCart(const vector<Coffee> &cart);

#endif
