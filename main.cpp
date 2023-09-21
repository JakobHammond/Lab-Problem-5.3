//
//  main.cpp
//  p5-3
//
//  Created by Jakob Hammond on 9/21/23.
//

#include <iostream>
using namespace std;

int main(void){
    int number;
    
    cout << "Please enter a number: ";
    cin >> number;
    
    
    do{
        cout << number % 2 << endl;
        number = number / 2;
        
    }while(number != 0);
    
}
