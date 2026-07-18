#include <iostream>
#include <string>
#include "ProductManager.hpp"

using namespace std;

int main() {
    ProductManager manager;
    int choice;

    
    int id, stock;
    string title, description;
    double price;

    do {
        cout << "\n================ MENU ================\n";
        cout << "1. Add Product\n";
        cout << "2. View All Products\n";
        cout << "3. Update Product\n";
        cout << "4. Search Product by Title\n";
        cout << "5. Delete Product by ID\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\n--- Add Product ---\n";
                cout << "Enter ID: "; cin >> id;
                cin.ignore(); 
                cout << "Enter Title: "; getline(cin, title);
                cout << "Enter Description: "; getline(cin, description);
                cout << "Enter Price: "; cin >> price;
                cout << "Enter Stock: "; cin >> stock;
                
                manager.createProduct(id, title, description, price, stock);
                break;

            case 2:
                manager.getAllProducts();
                break;

            case 3:
                cout << "\n--- Update Product ---\n";
                cout << "Enter ID to update: "; cin >> id;
                cin.ignore();
                cout << "Enter New Title: "; getline(cin, title);
                cout << "Enter New Description: "; getline(cin, description);
                cout << "Enter New Price: "; cin >> price;
                cout << "Enter New Stock: "; cin >> stock;
                
                manager.updateProduct(id, title, description, price, stock);
                break;

            case 4:
                cout << "\n--- Search Product ---\n";
                cin.ignore();
                cout << "Enter Title to search: "; getline(cin, title);
                
                manager.searchProductByTitle(title);
                break;

            case 5:
                cout << "\n--- Delete Product ---\n";
                cout << "Enter ID to delete: "; cin >> id;
                
                manager.deleteProductById(id);
                break;

            case 6:
                cout << "Exiting program. Goodbye!\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
                break;
        }
    } while (choice != 6);

    return 0;
}