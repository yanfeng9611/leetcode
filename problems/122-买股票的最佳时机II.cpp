# include<stdio.h>
int maxProfit(int* prices, int pricesSize) {
    if(pricesSize == 0 || pricesSize == 1){
        return 0;
    }
    else if(pricesSize == 2){
        if(prices[0] < prices[1]){
            return prices[1] - prices[0];
        }
    }
    int max = 0,min = 0;
    int price = 0;
    for(int i = 1;i < pricesSize - 1;i++){
        if(prices[i-1] <= prices[i] && prices[i] >= prices[i+1]){
            max = i;
        }
        else if(prices[i-1] >= prices[i] && prices[i] <= prices[i+1]){
            min = i;
        }
        if(i == pricesSize-2 && prices[i] <= prices[i+1]){
            max = i+1;
        }
        if(max > min){
            price += prices[max] - prices[min];
            min = max = i;
        }
    }
    return price;
}
int main(){
	int prices[] = {7,1,5,3,6,4};
	int pricesSize = 6;
	int price = 0;
	price = maxProfit(prices, pricesSize);
	printf("%d",price);
	return 0;
} 
