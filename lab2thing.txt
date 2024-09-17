// Halimatou Diaby
//Lecture 2
//9/16/24



// Objective :
//Prompt the user to enter the following,
// and store the answers in appropriate variables: 
//The name of the cereal
//The number of calories per serving
//The number of ounces per serving 
 



#include <iostream>
#include <string> 

using namespace std;

int main () {
    string cerealName ;
    double calorieNum ;
    double ouncesPerServing ;
    double caloriesPERounce ;
    double Willing2Eat;
    double UcanHave;



    (caloriesPERounce = calorieNum/ouncesPerServing);   
    (UcanHave = Willing2Eat/caloriesPERounce); 


    cout <<  "What Is the name of Your cereal?\n";
    cin >> cerealName;


    cout << "Input the number of Calories (dont write the units) \n" ;
    cin >> calorieNum;






    cout << "Write the number of Ounces here (units not required )\n";
    cin >> ouncesPerServing;

 

    cout << "How many calories are you willing to eat? (please round to the nearest whole number im not tryna do allat)";
    cin >> Willing2Eat;


    cout << "One serving of " << " "<< cerealName  << " is " << " "<< calorieNum << " and has " << " "<< caloriesPERounce << " "<< " calories per serving."  <<endl;
    cout << "You can have " << UcanHave << "  Servings." ;





/*
What Is the name of Your cereal?
Zion
Input the number of Calories (dont write the units) 
12
Write the number of Ounces here (units not required )
6
How many calories are you willing to eat? (please round to the nearest whole number im not tryna do allat)2
One serving of  Zion is  12 and has  0.99994  calories per serving.
You can have 6.95191e-310  Servings.*/








    return 0;
}
  



