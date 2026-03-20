# include <iostream>
#include <cstdlib> // Necessary for rand() and srand()
#include <ctime>   // Necessary for time()
using namespace std;
int main(){
    
    srand(time(0));// Adding time seed so numbers are different every time
    int numberStart , numberLast;
    int guessed_number,random_number;

    cout<<"-----------------------------Number Gasing Game---------------------------------"<<endl;
    cout<<"----------------------choose the number series for gassing -------------------------"<<endl<<"\t(first number is less than next number)"<<endl;
    cin>>numberStart>>numberLast;
    if(numberStart == numberLast || numberStart > numberLast){
        cout<<"Error your are not coosing the series corectly"<<endl;
    }else{
    cout<<"\t-----------------------------Start the number Gasing Game---------------------------------"<<endl;
    cout<<"\t-----------------------------Coose the number---------------------------------"<<endl;
    cin>>guessed_number;
    cout<<"\t--------------------------Result-----------------------"<<endl;
    random_number= rand() % numberLast - numberStart +1;
    if(guessed_number > numberLast || guessed_number < numberStart){
        cout<<"\t the number is out of range";
    
    }else{
        if(guessed_number==random_number){
            cout<<"Congratulation You Win";
        }else{
            cout<<"\tYou lose Wrong choice the correct\t Number was: "<<random_number<<endl;
        }
    }
    }
    cout<<"\t---------------------------------------------------------------";

    return 0;
}c