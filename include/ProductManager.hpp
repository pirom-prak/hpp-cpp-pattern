#pragma once
#include <vector>
#include <string>
#include "Product.hpp"

class ProductManager {
private:
    std::vector<Product> products; 

public:
    void createProduct(int id, std::string title, std::string description, double price, int stock);
    void updateProduct(int id, std::string newTitle, std::string newDescription, double newPrice, int newStock);
    
    void getAllProducts() const;
    void searchProductByTitle(std::string title) const;
    
    void deleteProductById(int id);
};