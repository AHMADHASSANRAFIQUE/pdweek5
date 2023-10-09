#include<iostream>
using namespace std;

float pyramid(float length,float width,float height,string unit);
main(){
    float length,width,height;
    string unit;
    float result;
    cout<<"Enter the length of the pyramid (in meters): ";
    cin>> length;
    cout<<"Enter the width of the pyramid (in meters): ";
    cin>> width;
    cout<<"Enter the height of the pyramid (in meters): ";
    cin>> height;
    cout<<"Enter the desired output unit (milimeters, centimeters, meters, kilometers): ";
    cin>>unit;
    result = pyramid(length,width,height,unit);
    cout<<"The volume of the pyramid is: "<<result <<" cubic "<<unit;
}
float pyramid(float length,float width,float height,string unit)
{
    if(unit == "meters")
    {
        float volumeinmeters = (length*width*height)/3;
        return volumeinmeters;
    }
    if(unit == "kilometers")
    {
        float volumeinkilometers = (((length/1000)*(width/1000)*(height/1000))/3);
        return volumeinkilometers;
    }
    if(unit == "milimeters")
    {
        float volumeinmilimeters = (((length*1000)*(height*1000)*(width*1000))/3);
        return volumeinmilimeters;

    }
       if(unit == "centimeters")
    {
        float volumeincentimeters = (((length*100)*(height*100)*(width*100))/3);
        return volumeincentimeters;
    }
    return 0.0;

}