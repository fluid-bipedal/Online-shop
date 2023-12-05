#include "ShoppingCart.h"
#include <iostream>

void ShoppingCart::addProduct(const Product& product) {
    products.push_back(product);
}

void ShoppingCart::removeProduct(int productId) {
    // Implement removal logic based on productId
}

void ShoppingCart::displayCart() const {
    // Implement logic to display the contents of the shopping cart
}

double ShoppingCart::calculateTotal() const {
    // Implement logic to calculate the total price of items in the cart
    return 0.0;
}
