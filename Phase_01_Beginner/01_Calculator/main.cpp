#include <iostream>
using namespace std;
int main(){

    using num = double;
    num number1,number2,result;
    char operation;
    
    cout<<"--------------enter first number----------------------- "<<endl;
    cin>>number1;
    cout<<endl<<"--------------enter second number----------------------- "<<endl;
    cin>>number2;
    cout<<endl<<"--------------choose the operation-----------------------"<<endl;
    cout<<"\t +,-,*,/    :===>   \t"; 
    cin>> operation;
    cout<<endl<<"--------------------------------------------------------"<<endl;

    switch(operation){
        case '+':
            result= number1+number2;
            break;
        case '-':
            result= number1-number2;
            break;
        case '*':
            result= number1*number2;
            break;
        case '/':
            if(number2==0){
                cout<<"\tERROR :=> divided by ZERO";
                break;
            }else{
                result= number1/number2;
            }
            break;
        default:
            cout<<"\tInvalide Operator"<<endl<<"------------------------------------------------------"<<endl;
            return 1;
        
    }
    
    cout<<endl<<"\t "<<number1<<endl<<"\t"<<operation<<endl<<"\t "<<number2<<endl<<"------------------------------------------------------"<<endl<<"\tSolution :====> \t"<<result<<endl;
    cout<<"---------------------------END---------------------------"<<endl;
    return 0;
}