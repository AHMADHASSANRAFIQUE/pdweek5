#include<iostream>
using namespace std;
float vehicleprice(char type,float price);
main()
{   float price;
    float result;
    char type;
    cout<<"Enter the vehicle type code (M, E, S, V, T): ";
    cin>>type;
    cout<<"Enter the price of vehicle: $";
    cin>>price;
    result = vehicleprice(type,price);
    cout<<"The final price of the vehicle of type "<<type<<" after adding the tax is $"<<result<<".";
}
float vehicleprice(char type,float price)
{
        if(type == 'M')
    {
        float lastprice = (price*0.06);
        lastprice = price + lastprice;
        return lastprice;
    }
       if(type == 'E')
    {
        float lastprice = (price*0.08);
        lastprice = price + lastprice;
        return lastprice;
    }
       if(type == 'S')
    {
        float lastprice = (price*0.1);
        lastprice = price + lastprice;
        return lastprice;
    }
       if(type == 'V')
    {
        float lastprice = (price*0.12);
        lastprice = price + lastprice;
        return lastprice;
    }
       if(type == 'T')
    {
        float lastprice = (price*0.15);
        lastprice = price + lastprice;
        return lastprice;
    }

}
