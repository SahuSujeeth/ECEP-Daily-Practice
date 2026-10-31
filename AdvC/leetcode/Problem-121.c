#include <stdio.h>
int maxProfit(int* prices, int pricesSize) {
    // int smallest = prices[0];
    // int i;
    // int smallest_index = 0;
    // for(i=1;i<pricesSize;i++)
    // {
    //     if(smallest > prices[i])
    //     {
    //         smallest = prices[i];
    //         smallest_index = i;
    //     }
    // }
    // if(smallest == prices[pricesSize-1])
    //     return 0;
    // int largest = smallest;
    // for(int j = smallest_index; j < pricesSize; j++)
    // { 
    //     if(largest < prices[j])
    //         largest = prices[j];

    // }
    // return largest - smallest;
    int minPrice = prices[0];
    int best = 0;

    for (int i = 1; i < pricesSize; i++)
    {
        int profit = prices[i] - minPrice;       // profit if I sell today

        if (profit > best)                // is it better than the best so far?
            best = profit;

        if (prices[i] < minPrice)                // is today cheaper than minPrice?
            minPrice = prices[i];
    }
    return best;
    
}
int main ()
{
    int prices[] = {7,1,5,3,6,4};
    int priceSize = 6;
    int ans = maxProfit(prices,priceSize);
    printf("%d \n",ans);
    

    return 0;
}