#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include <vector>
#include "Product.h"

class ShoppingCart {
public:
    void addProduct(const Product& product);
    void removeProduct(int productId);
    void displayCart() const;
    double calculateTotal() const;

private:
    std::vector<Product> products;
};

#endif // SHOPPINGCART_H
