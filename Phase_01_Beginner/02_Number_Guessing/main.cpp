# include <iostream>
#include <cstdlib> // Necessary for rand() and srand()
#include <ctime>   // Necessary for time()
using namespace std;
int main(){
    
    srand(time(0));// Adding time seed so numbers are different every time
    int numberStart , numberLast;
    int guessed_number,random_number;
    int range ;
   
   
    cout<<"-----------------------------Number Guessing Game---------------------------------"<<endl;
    cout<<"----------------------choose the number series for guessing----------------------"<<endl<<"\t(first number is less than next number)"<<endl;
    cin>>numberStart>>numberLast;
    
    range = numberLast - numberStart +1;
    random_number = rand() % range + numberStart;
    
    if(numberStart == numberLast || numberStart > numberLast){
        cout<<"Error your are not coosing the series corectly(minimum 1,, maimum = infinit)"<<endl;
    }else{
    cout<<"----------------------Start the number Guessing Game----------------------"<<endl;
    cout<<"-------------------------------Coose the number---------------------------"<<endl;
    cin>>guessed_number;
    if(guessed_number == 999){
        cout << "\t[MAGIC]---YOU UNLOCK THE MAGIC MODE"<<endl;
        cout<<" \tMAGIC Started! (You Typed '999' for MAGIC Spell) ---" << endl;
        cout<<"\t[Magic] Secret Number is: "<< random_number<<endl;
        cout<<"\tGuess the number"<<endl;
        cin>>guessed_number;
    }
    else if(guessed_number == 0){
        guessed_number = 1;
    }

    cout<<"--------------------------------Result------------------------------------"<<endl;

    if(guessed_number > numberLast || guessed_number < numberStart){
        cout<<"\t the number is out of range";
    
    }else{
        if(guessed_number==random_number){
            cout<<"\tCongratulation You Win"<<endl;
        }else{
            cout<<"\tYou lose Wrong choice the correct\t Number was: "<<random_number<<endl;
        }
    }
    }
    cout<<"----------------------------------------------------------------------------";

    return 0;
}