#include<iostream>
#include<vector>

int main () 
{
    std::vector<float> price {2.5, 4.25, 3.0, 10.0};
    std::vector<int> items {1, 1, 0, 3};
    float totalPrice = 0;

    for(int i = 0;i < items.size();++i)
    {
        if(items[i] < price.size())
        {
            totalPrice += price[items[i]];
        }
        else
        {
            std::cout<<"Invalid value !!! item: "<< items[i] <<std::endl;
        }
    }

    std::cout<<"Total price: "<< totalPrice;
}