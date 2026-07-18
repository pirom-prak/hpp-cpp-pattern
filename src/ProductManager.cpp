#include <iostream>
#include "../include/ProductManager.hpp"

using namespace std;


void ProductManager::createProduct(int id, string title, string description, double price, int stock) {
    Product newProduct(id, title, description, price, stock);
    products.push_back(newProduct);
    cout << "Added successfully.\n";
}


void ProductManager::updateProduct(int id, string newTitle, string newDescription, double newPrice, int newStock) {
    for (int i = 0; i < products.size(); i++) {
        if (products[i].get_id() == id) { 
            products[i].set_title(newTitle);
            products[i].set_description(newDescription);
            products[i].set_price(newPrice);
            products[i].set_stock(newStock);
            cout << "Product updated.\n";
            return;
        }
    }
    cout << "Product not found.\n";
}


void ProductManager::getAllProducts() const {
    if (products.empty()) {
        cout << "List is empty!\n";
        return;
    }
    cout << "\n--- Product List ---\n";
    for (int i = 0; i < products.size(); i++) {
        cout << "ID: " << products[i].get_id() 
             << ", Title: " << products[i].get_title() 
             << ", Description: " << products[i].get_description() 
             << ", Price: $" << products[i].get_price() 
             << ", Stock: " << products[i].get_stock() << "\n";
    }
}


void ProductManager::searchProductByTitle(string title) const {
    bool found = false;
    for (int i = 0; i < products.size(); i++) {
        if (products[i].get_title() == title) {
            cout << "\nFound -> ID: " << products[i].get_id() 
                 << ", Title: " << products[i].get_title() 
                 << ", Price: $" << products[i].get_price() << "\n";
            found = true;
        }
    }
    if (!found) {
        cout << "Not found.\n";
    }
}


void ProductManager::deleteProductById(int id) {
    for (int i = 0; i < products.size(); i++) {
        if (products[i].get_id() == id) {
            products.erase(products.begin() + i); 
            cout << "Product deleted.\n";
            return;
        }
    }
    cout << "Cannot delete. ID not found.\n";
}