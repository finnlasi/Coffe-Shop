#include <iostream>
#include <vector>
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
    setCoffee(coffees[0], "Caffe Latte", 10.50);
    setCoffee(coffees[1], "Espresso", 7.00);
    setCoffee(coffees[2], "Cappuccino", 9.00);
    setCoffee(coffees[3], "Americano", 8.50);
}
void coffelist(Coffee coffees[], int size){
    for(int i = 0;i<4;i++){
        cout << i+1 << ". " << coffees[i].name<<"\t" << " - RM" << coffees[i].price << endl;
    }
    
}
void addToCart(vector<Coffee> &cart, Coffee coffees[], int size) {
    int index;
    cout << "Enter product index to add to cart(enter 0 to stop adding): ";
    cin >> index;

    do{
    if (index >= 1 && index <= size) {
        cart.push_back(coffees[index - 1]);
        cout << coffees[index - 1].name << " added to cart!\n";
    } else {
        cout << "Invalid index!\n";
    }
    }while(index != 0);
}

// Print cart contents
void printCart(const vector<Coffee> &cart) {
    cout << "\nYour Cart:\n";
    if (cart.empty()) {
        cout << "Cart is empty.\n";
    } else {
        for (int i = 0; i < cart.size(); i++) {
            cout << i + 1 << ". " << cart[i].name
                 << " - RM" << cart[i].price << endl;
        }
    }
}
int main(){
    Coffee coffees[4];
    initializecoffes(coffees);
    coffelist(coffees,4);
    
    vector<Coffee> cart;

    addToCart(cart, coffees,4);
    
    return 0;
}