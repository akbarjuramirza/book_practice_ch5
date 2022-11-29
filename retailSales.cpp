#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
    size_t num_product;
    cout << "enter the number of products: ";
    cin >> num_product;
    double retail_price;
    
    double total_price = 0;
    vector<double> price;
    for(size_t i = 1; i <= num_product; i++) {
        cout << "enter the retail price of " << i << " product: ";
        cin >> retail_price;
        price.push_back(retail_price);
        total_price += retail_price;
    }
    //print
    cout << "products" << setw(20) << "Retail prices" << endl;
    for(size_t j = 1; j <= price.size(); j++) {
        cout << setw(8) << j << setw(18) << price[j-1] << "$" << endl;
    }
    cout << "\nTotal retail price is: " << total_price << "$" << endl;
    

    return 0;
}
