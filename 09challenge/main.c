    #include <stdio.h>

int main() {
    // Declare a variable to store the amount of money in the person's wallet (in Brazilian Real)
    float money_in_wallet;

    // Get the amount of money in the person's wallet (in Brazilian Real)
    printf("Enter the amount of money in your wallet (in Brazilian Real): ");
    scanf("%f", &money_in_wallet);

    // Declare a variable to store the exchange rate
    float exchange_rate = 3.45;

    // Calculate the amount of money in dollars
    float money_in_dollars = money_in_wallet / exchange_rate;

    // Print the amount of money in dollars
    printf("You can buy US$%.2f with the money in your wallet.\n", money_in_dollars);

    return 0;
}
