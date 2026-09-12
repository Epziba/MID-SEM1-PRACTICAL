#include <iostream>
using namespace std;
class product
{
public:
    int id;
    string name;
    float price;
    int quantity;
    void getData()
    {
        cout << " Enter ID: ";
        cin >> id;
        cout << " Enter product Name: ";
        cin >> name;
        cout << " Enter Price: ";
        cin >> price;
        cout << "Quantity: ";
        cin >> quantity;
    }
    void display()
    {
        cout << "\nEnter ID: " << id << endl;
        cout << "\nEnter product Name: " << name << endl;
        cout << "\nEnter Price: " << price << endl;
        cout << "\nQuantity: " << quantity << endl;
    }
};
int main()
{
    product p[40];
    int n = 0, choice;
    float revenue = 0;
    do
    {
        cout << "\n1. Add Product";
        cout << "\n2. Restock Product";
        cout << "\n3. Sell Product";
        cout << "\n4. Low Stock";
        cout << "\n5. Revenue";
        cout << "\n6. Display All";
        cout << "\n7. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;
        if(choice == 1)
        {
            p[n].getData();
            n++;
            cout << "Product added.";
        }
        if(choice == 2)
        {
            int id, q;
            cout << "ID: ";
            cin >> id;
            cout << "Quantity: ";
            cin >> q;
            for(int i = 0; i < n; i++)
                if(p[i].id == id)
                    p[i].quantity += q;
        }
        if(choice == 3)
        {
            int id, q;
            cout << "ID: ";
            cin >> id;
            cout << "Quantity: ";
            cin >> q;
            for(int i = 0; i < n; i++)
            {
                if(p[i].id == id)
                {
                    if(q <= p[i].quantity)
                    {
                        p[i].quantity -= q;
                        revenue += p[i].price * q;
                        cout << "Sold.";
                    }
                    else
                        cout << "Not enough stock";
                }
            }
        }
        if(choice == 4)
        {
            for(int i = 0; i < n; i++)
                if(p[i].quantity < 5)
                    p[i].display();
        }
        if(choice == 5)
            cout << "Total Revenue: " << revenue;
        if(choice == 6)
            for(int i = 0; i < n; i++)
                p[i].display();

    }
      while(choice != 7);
      cout << "\nExiting...";
return 0;
}
