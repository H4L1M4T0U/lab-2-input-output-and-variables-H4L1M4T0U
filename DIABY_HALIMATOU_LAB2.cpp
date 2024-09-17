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
    int calorieNum ;
    double ouncesPerServing ;
    int caloriesPERounce ;
    int Willing2Eat;



    cout <<  "What Is the name of Your cereal?\n";
    cin >> cerealName;


    cout << "Input the number of Calories (dont write the units) \n" ;
    cin >> calorieNum;


    cout << "How many calories are you willing to eat? (please round to the nearest whole number im not tryna do allat)";
    cin >> Willing2Eat;



    cout << "Write the number of Ounces here (units not required )\n";
    cin >> ouncesPerServing;


 (caloriesPERounce = calorieNum/ouncesPerServing);

    cout << "One serving of " << " "<< cerealName  << " is " << " "<< calorieNum << " and has " << " "<< caloriesPERounce << " "<< " calories per serving."  <<endl;














    return 0;
}
  



