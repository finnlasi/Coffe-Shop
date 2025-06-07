#include "coffee.h"
#include <vector>
using namespace std;
int main(){
    Coffee coffees[5];
    initializeCoffes(coffees);
    coffeList(coffees,5);
    
    vector<Coffee> cart;

    addToCart(cart, coffees,5);
    printCart(cart);
    
    return 0;
}