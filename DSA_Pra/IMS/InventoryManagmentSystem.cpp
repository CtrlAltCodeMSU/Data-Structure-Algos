#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

struct InventoryItem
{
    int id;
    string name;
    int quantity;
    double price;
};

const int MAX_ITEMS = 100;
InventoryItem inventory[MAX_ITEMS];
int itemCount = 0;

void clearConsole();
void projectMembers();
void addItem();
void updateItem();
void deleteItem();
void viewItems();
void searchItem();
void displayMenu();
void saveInventoryToFile();
void loadInventoryFromFile();
int generateNewID();
namespace ANSI
{    
    const string RESET = "\033[0m";
    const string BOLD = "\033[1m";
    const string RED = "\033[31m";
    const string GREEN = "\033[32m";
    const string YELLOW = "\033[33m";
    const string SKYBLUE = "\033[96m";
    const string BLUE = "\033[34m";
}

int main(){ 
            clearConsole(); 
            projectMembers();           
            loadInventoryFromFile();

    int choice;
    do
    {
        displayMenu();
        cout << ANSI::RED << ANSI::BOLD<< "Please enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addItem();
            saveInventoryToFile();
            break;
        case 2:
            updateItem();
            saveInventoryToFile();
            break;
        case 3:
            deleteItem();
            saveInventoryToFile();
            break;
        case 4:
            viewItems();
            break;
        case 5:
            searchItem();
            break;
        case 6:
            cout << ANSI::GREEN << "Exiting..." << ANSI::RESET << endl;
            break;
        default:
            cout << ANSI::RED << "\t\t(Invalid choice. Please try again.)" << ANSI::RESET << endl;
        }
    } while (choice != 6);
    return 0;
}

void displayMenu()
{
    
    cout << "\n"
    << ANSI::BOLD << ANSI::GREEN << setw(15) << "Inventory Management System" << ANSI::RESET << "\n\n";
    cout << "1. " << ANSI::BOLD << ANSI::SKYBLUE << "Add Item" << ANSI::RESET << "\n";
    cout << "2. " << ANSI::BOLD << ANSI::SKYBLUE << "Update Item" << ANSI::RESET << "\n";
    cout << "3. " << ANSI::BOLD << ANSI::SKYBLUE << "Delete Item" << ANSI::RESET << "\n";
    cout << "4. " << ANSI::BOLD << ANSI::SKYBLUE << "View Items" << ANSI::RESET << "\n";
    cout << "5. " << ANSI::BOLD << ANSI::SKYBLUE << "Search Item" << ANSI::RESET << "\n";
    cout << "6. " << ANSI::BOLD << ANSI::SKYBLUE << "Exit" << ANSI::RESET << "\n";
    cout << ANSI::YELLOW << "==============================================================\n";
}

void addItem()
{
    if (itemCount < MAX_ITEMS)
    {
        InventoryItem newItem;

        newItem.id = generateNewID();

        cin.ignore();

        cout <<ANSI::GREEN<< "Enter item name: ";
        getline(cin, newItem.name);
        cout <<ANSI::GREEN<< "Enter quantity: ";
        cin >> newItem.quantity;

        cin.ignore();

        cout <<ANSI::GREEN<< "Enter price in Dollars $: ";
        cin >> newItem.price;

        cin.ignore();

        inventory[itemCount++] = newItem ;
        cout << ANSI::RED << "\t\t(Item added successfully!)" << ANSI::RESET << "\n";
    }
    else
    {
        cout << ANSI::RED << "Inventory is full!" << ANSI::RESET << "\n";
    }
}

void updateItem()
{
    int id;
    cout << "Enter item ID to update: ";
    cin >> id;
    bool found = false;

    for (int i = 0 ; i < itemCount; i++)
    {
        if (inventory[i].id == id)
        {
            found = true;
            cout << "Enter new name: ";
            cin.ignore();
            getline(cin, inventory[i].name);
            cout << "Enter new quantity: ";
            cin >> inventory[i].quantity;
            cout << "Enter new price: ";
            cin >> inventory[i].price;
            cout << ANSI::RED << "Item updated successfully!" << ANSI::RESET << "\n";
            break;
        }
    }

    if (!found)
    {
        cout << ANSI::RED << "Item not found!" << ANSI::RESET << "\n";
    }
}

void deleteItem()
{
    int id;
    cout << "Enter item ID to delete: ";
    cin >> id;
    bool found = false;

    for (int i = 0; i < itemCount; i++)
    {
        if (inventory[i].id == id)
        {
            found = true;
            for (int j = i; j < itemCount - 1; j++)
            {
                inventory[j] = inventory[j + 1];
            }
            itemCount--;
            cout << ANSI::RED << "Item deleted successfully!" << ANSI::RESET << "\n";
            break;
        }
    }
    if (!found)
    {
        cout << ANSI::RED << "Item not found!" << ANSI::RESET << "\n";
    }
}

void viewItems()
{
    if (itemCount == 0)
    {
        cout << ANSI::YELLOW << "No items in the inventory." << ANSI::RESET << "\n";
    }
    else
    {
        cout << ANSI::SKYBLUE<< "______________________________________________________________\n";
        cout << "\n"
             << setw(8) << ANSI::BOLD << "ID" << setw(15) << "Name" << setw(20) << "Quantity" << setw(15) << "Price $" << ANSI::RESET << "\n";
        cout << ANSI::SKYBLUE << "______________________________________________________________\n";

        for (int i = 0; i < itemCount; i++)
        {    
            cout << "|" << setw(5) << inventory[i].id << setw(5) << "|"
                 << setw(15) << inventory[i].name << setw(3) << "|"
                 << setw(8) << inventory[i].quantity << setw(8) << "|"
                 << setw(12) << fixed << setprecision(2) << inventory[i].price << setw(5) << "|" <<  "\n";
        }
        cout << ANSI::SKYBLUE << "--------------------------------------------------------------\n";
    }
}

void searchItem()
{
    int id;
    cout << "Enter item ID to search: ";
    cin >> id;
    bool found = false;

    for (int i = 0; i < itemCount; i++)
    {
        if (inventory[i].id == id)
        {
            found = true;
            cout << "\n"
                 << ANSI::BOLD << "ID: " << ANSI::RESET << inventory[i].id
                 << ", " << ANSI::BOLD << "Name: " << ANSI::RESET << inventory[i].name
                 << ", " << ANSI::BOLD << "Quantity: " << ANSI::RESET << inventory[i].quantity
                 << ", " << ANSI::BOLD << "Price: $" << ANSI::RESET << fixed << setprecision(2) << inventory[i].price << "\n";
            break;
        }
    }

    if (!found)
    {
        cout << ANSI::RED << "Item not found!" << ANSI::RESET << "\n";
    }
}

void saveInventoryToFile()
{
    ofstream outFile("inventory.txt");

    if (!outFile)
    {
        cerr << ANSI::RED << "Error: Unable to open file for writing!" << ANSI::RESET << "\n";
        return;
    }

    for (int i = 0; i < itemCount; ++i)
    {
        outFile << inventory[i].id << ","
                << inventory[i].name << ","
                << inventory[i].quantity << ","
                << inventory[i].price << "\n";
    }

    outFile.close();
}

void loadInventoryFromFile()
{
    ifstream inFile("inventory.txt");

    if (!inFile)
    {
        cerr <<ANSI::BOLD <<ANSI::RED << "No inventory file found. Starting with an empty inventory." << ANSI::RESET << "\n";
        return;
    }

    itemCount = 0;
    while (inFile >> inventory[itemCount].id)
    {
        inFile.ignore(); // ignore the comma
        getline(inFile, inventory[itemCount].name, ',');
        inFile >> inventory[itemCount].quantity;
        inFile.ignore(); // ignore the comma
        inFile >> inventory[itemCount].price;
        inFile.ignore(); // ignore the newline

        itemCount++;
    }

    inFile.close();
}

int generateNewID()
{
    int maxID = 0;
    for (int i = 0; i < itemCount; i++)
    {
        if (inventory[i].id > maxID)
        {
            maxID = inventory[i].id;
        }
    }
    return maxID + 1;
}
void projectMembers(){
            cout << ANSI::BOLD<< ANSI::RED << "================== Inventory Management System ================\n";
            cout << endl;
            cout << ANSI::YELLOW<< "---------------------------------------------------------------" << endl;
            cout  << ANSI::BOLD << ANSI::YELLOW << "\t\t\tProject Members " << endl;
            cout <<ANSI::YELLOW<< "_______________________________________________________________" << endl;
            cout  << "|"<<setw(15)<< ANSI::BOLD << ANSI::YELLOW << "Muhammad Sana Ullah   (6435)" << setw(23) <<"|"<< endl;
            cout  << "|"<<setw(15)<< ANSI::BOLD << ANSI::YELLOW << "Muhammad Hasnat       (6412)" << setw(23) <<"|"<< endl;
            cout  << "|"<<setw(15)<< ANSI::BOLD << ANSI::YELLOW << "Muhammad Azeem        (6405)" << setw(23) <<"|"<< endl;
            cout  << "|"<<setw(15)<< ANSI::BOLD << ANSI::YELLOW << "Laiba Shahid          (6413)" << setw(23) <<"|"<< endl;
            cout << ANSI::YELLOW<< "---------------------------------------------------------------" << endl<<endl;
}
void clearConsole()
{
    #ifdef _WIN32
           system("cls");
    #endif
}