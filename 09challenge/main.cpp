#include <iostream>
using namespace std;

int main() {
    // Declare a variable to store the amount of money in the person's wallet (in Brazilian Real)
    float money_in_wallet;

    // Get the amount of money in the person's wallet (in Brazilian Real)
    cout << "Enter the amount of money in your wallet (in Brazilian Real): ";
    cin >> money_in_wallet;

    // Declare a variable to store the exchange rate
    float exchange_rate = 3.45;

    // Calculate the amount of money in dollars
    float money_in_dollars = money_in_wallet / exchange_rate;

    // Print the amount of money in dollars
    cout << "You can buy US$" << money_in_dollars << " with the money in your wallet." << endl;

    return 0;
}
