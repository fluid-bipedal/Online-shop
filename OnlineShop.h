#ifndef ONLINESHOP_H
#define ONLINESHOP_H

#include "Product.h"
#include "ShoppingCart.h"

class OnlineShop {
public:
    void run();

private:
    std::vector<Product> products;
    ShoppingCart shoppingCart;

    void displayProducts() const;
    void processOrder();
};

#endif // ONLINESHOP_H
