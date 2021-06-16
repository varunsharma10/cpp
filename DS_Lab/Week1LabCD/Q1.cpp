#include <iostream>
#include <string>
using namespace std;
class invoice
{
    string item_number;
    string item_description;
    int quantity;
    int price;
    static int copy_count;

public:
    void set_item_number(string A)
    {
        item_number = A;
    }
    void set_item_description(string A)
    {
        item_description = A;
    }
    void set_quantity(int A)
    {
        quantity = A;
    }
    void set_price(int A)
    {
        price = A;
    }
    string get_item_number()
    {
        return item_number;
    }
    string get_item_description()
    {
        return item_description;
    }

    int get_quantity()
    {
        return quantity;
    }
    int get_price()
    {
        return price;
    }
    int get_invoice_amount();
    void print_copy_count();
    invoice()
    {
        item_number = "\0";
        item_description = "\0";
        quantity = 0;
        price = 0;
    }
    invoice(const invoice &A)
    {
        item_number = A.item_number;
        item_description = A.item_description;
        price = A.price;
        quantity = A.quantity;
        copy_count++;
    }
};
int invoice::copy_count = 0;
int invoice ::get_invoice_amount()
{
    return (price * quantity);
}
void invoice::print_copy_count()
{
    cout << " The count of objects crearted with copy constructor is: " << copy_count << endl;
}
void compare_invoice(invoice &A, invoice &B)
{
    if (A.get_quantity() > B.get_quantity())
        cout << " First invoice has greater quantity: " << A.get_quantity() << endl;
    else if (A.get_quantity() < B.get_quantity())
        cout << " Second invoice has greater quantity: " << B.get_quantity() << endl;
    else
        cout << "Both have same quantity: " << A.get_quantity() << endl;
}
int main()

{
    invoice A;
    A.set_item_description("Item 1");
    A.set_item_number("1");
    A.set_quantity(9);
    A.set_price(99);
    cout << "The sample Input is as follows: " << endl;
    cout << "Description: "
         << " " << A.get_item_description() << endl
         << "Item No.:"
         << " " << A.get_item_number() << endl
         << " Item Price : "
         << " " << A.get_price() << endl
         << " Item Quantity : "
         << " " << A.get_quantity() << endl;
    invoice B, *C;
    B = A;
    C = new invoice(A);
    B.set_quantity(10);
    cout << " The invoice amount of A: " << A.get_invoice_amount() << endl;
    cout << " The invoice amount of B: " << B.get_invoice_amount() << endl;
    cout << " Comparing invoice A and invoice B: ";
    compare_invoice(A, B);
    cout << " Comparing invoice A and invoice C: ";
    compare_invoice(A, *C);
    A.print_copy_count();
    delete C;
    return 0;
}