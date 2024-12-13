#include <iostream>
using namespace std;

int main()
{
    float prices[] = {200.75, 345.50, 775.75, 400.35, 1200.75};
    int quantity_sold_1, quantity_sold_2, quantity_sold_3, quantity_sold_4, quantity_sold_5;
    cout << "Enter quantity sold for Product 1: ";
    cin >> quantity_sold_1;

    cout << "Enter quantity sold for Product 2: ";
    cin >> quantity_sold_2;

    cout << "Enter quantity sold for Product 3: ";
    cin >> quantity_sold_3;

    cout << "Enter quantity sold for Product 4: ";
    cin >> quantity_sold_4;

    cout << "Enter quantity sold for Product 5: ";
    cin >> quantity_sold_5;

    float total_retail_value = 0.0;

    if (quantity_sold_1 > 0)
    {
        total_retail_value += prices[0] * quantity_sold_1;
    }

    if (quantity_sold_2 > 0)
    {
        total_retail_value += prices[1] * quantity_sold_2;
    }

    if (quantity_sold_3 > 0)
    {
        total_retail_value += prices[2] * quantity_sold_3;
    }

    if (quantity_sold_4 > 0)
    {
        total_retail_value += prices[3] * quantity_sold_4;
    }

    if (quantity_sold_5 > 0)
    {
        total_retail_value += prices[4] * quantity_sold_5;
    }


    cout << "Total retail value of products sold: BDT " << total_retail_value << endl;
    return 0;
}
