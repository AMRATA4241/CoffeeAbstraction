#include <iostream>
#include<string.h>
using namespace std;
 
class coffeeIngredients
{
  private: 
    string water="0.5 cup";
    string milk="0.5 cup";
    string suger="2 spoon";
    string cpowder="0.5 spoon";
  
    
 public:  
    void brewCoffee()
    {
       cout<<"Enjoy Your Coffee.!!";
        
    }
};   
int main()
{
    coffeeIngredients cup;
    
    cup.brewCoffee();
}



