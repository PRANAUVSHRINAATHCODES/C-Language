#include <stdio.h>

int main() 
{
    
    int numberOfShares;
    double purchasePrice, currentPrice, profit;

    
    printf("Enter the number of shares purchased: ");
    scanf("%d", &numberOfShares);

    printf("Enter the purchase price per share: ");
    scanf("%lf", &purchasePrice);

    printf("Enter the current price per share: ");
    scanf("%lf", &currentPrice);

   
    profit = (numberOfShares * currentPrice) - (numberOfShares * purchasePrice);

   
    printf("You have made a profit of $%.2f dollars since you bought %d shares of this stock.\n", profit, numberOfShares);

    return 0;
}

