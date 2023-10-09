#include<iostream>
using namespace std;
bool time1(int hours,int days,int workers,int result1);
main()
{   int hours,days,workers,result1;
    cout<<"Enter the needed hours: ";
    cin>>hours;
    cout<<"Enter the days that the firm has: ";
    cin>>days;
    cout<<"Enter the number of all workers: ";
    cin>>workers;
    result1 = time1(hours,days,workers,result1);
    
   
    

}
bool time1(int hours,int days,int workers,int result1)
{
   float hrr = days*workers*10;
   hrr = hrr - (hrr*10/100); 

   if(hours>hrr)
   {
    float work = hours-hrr;
    cout<<"Not enough time! "<<work<<" hours needed.";
    return true;
    }
   if(hours<hrr)
   {
    float works = hrr-hours;
    cout<<"Yes!"<<works<<" hours left.";
    return false;
   }
   return 0.0;
}
