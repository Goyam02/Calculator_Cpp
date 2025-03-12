#include<iostream>
using namespace std;

void DisplayMenu() {
    cout<<"Basic Calculator"<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cout<<"5. Exit"<<endl;
    cout<<"Enter your choice: ";
}

void calculator(){
    while(1){
        DisplayMenu();
        int choice;
        cin>>choice;;
        if(choice == 5){
            cout<<"Exiting..."<<endl;
            break;
        }

        double num1,num2;
        cout<<"Enter number 1: ";
        cin>>num1;
        cout<<"Enter number 2: ";
        cin>>num2;

        switch(choice){
            case 1:
                cout<<"Result: "<<num1+num2<<endl;
                break;
            case 2:
                cout<<"Result: "<<num1-num2<<endl;
                break;
            case 3:
                cout<<"Result: "<<num1*num2<<endl;
                break;
            case 4:
                if(num2 == 0){
                    cout<<"Cannot divide by zero"<<endl;
                }
                else{
                cout<<"Result: "<<num1/num2<<endl;
                }
                break;
            default:
                cout<<"Invalid choice"<<endl;
        }
    }
}

int main(){
    calculator();
    return 0;
}
