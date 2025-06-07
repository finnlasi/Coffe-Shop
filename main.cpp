#include <iostream>
#include <vector>
#include<iomanip>
using namespace std;
struct Coffee {
    string name;
    double price;
};
void welcome_message(){
    cout<<"Welcome to finn's coffe shop\n";
    
}
void setCoffee(Coffee &c, string n, double p) {
    c.name = n;
    c.price = p;
}
void initializecoffes(Coffee coffees[]){
    setCoffee(coffees[0], "Caffe Latte", 9.50);
    setCoffee(coffees[1], "Espresso", 7.00);
    setCoffee(coffees[2], "Cappuccino", 8.00);
    setCoffee(coffees[3], "Americano", 7.50);
    setCoffee(coffees[4], "Mocha", 8.50);
}
void coffelist(Coffee coffees[], int size){
    for(int i = 0;i<5;i++){
        cout << i+1 << ". " << coffees[i].name<<"\t" << " - RM " << coffees[i].price
        <<fixed<<setprecision(2)<< endl<< endl;
    }
    
}
void addToCart(vector<Coffee> &cart, Coffee coffees[], int size) {
    int index;
    do {
        cout << "Enter product index to add to cart (0 to stop): ";
        cin >> index;
        if (index == 0) {
            cout << "Stopping...\n";
            break;
        }
        if (index >= 1 && index <= size) {
            cart.push_back(coffees[index - 1]);
            cout << coffees[index - 1].name << " added to cart!\n";
        } else {
            cout << "Invalid index! Try again.\n";
        }
    } while (true);
}

// Print cart contents
void printCart(const vector<Coffee> &cart) {
    cout << "\nYour Cart:\n";
    float total=0;
    if (cart.empty()) {
        cout << "Cart is empty.\n";
    } else {
        for (int i = 0; i < cart.size(); i++) {
            cout << i + 1 << ". " << cart[i].name
                 << " - RM " << cart[i].price <<fixed<<setprecision(2)<< endl;
                 
                 total=total + cart[i].price;
        }
        cout<<"\nYour total is RM "<<total<<fixed<<setprecision(2)<< endl;

    }
}
int main(){
    Coffee coffees[5];
    initializecoffes(coffees);
    coffelist(coffees,5);
    
    vector<Coffee> cart;

    addToCart(cart, coffees,5);
    printCart(cart);
    
    return 0;
}