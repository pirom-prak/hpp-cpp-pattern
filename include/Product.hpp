#pragma once
#include <string>

class Product {
private:
    int id;
    std::string title;
    std::string description;
    double price;
    int stock;

public:
    Product() {
        id = 0;
        title = "";
        description = "";
        price = 0.0;
        stock = 0;
    }
    
    Product(int p_id, std::string p_title, std::string p_description, double p_price, int p_stock) {
        id = p_id;
        title = p_title;
        description = p_description;
        price = p_price;
        stock = p_stock;
    }
    void set_title(std::string t) { title = t; }
    void set_description(std::string d) { description = d; }
    void set_price(double p) { price = p; }
    void set_stock(int s) { stock = s; }
    int get_id() const { 
        return id; }
    std::string get_title() const { 
        return title; }
    std::string get_description() const {
         return description; }
    double get_price() const { 
        return price; }
    int get_stock() const {
         return stock; }
};

    

    
    
