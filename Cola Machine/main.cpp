//
//  main.cpp
//  Cola Machine
//
//  Created by Jiakai Chen on 6/3/18.
//  Copyright © 2018 Jiakai Chen. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Enter Number Choosing your Drink!" << endl;
    cout << "1.Cococola"<< "   " << "2.Pepsi"<< "   " << "3.CanadaDry"<< "   " << "4.SevenUp"<< "   " << "5.Sprite" << endl;
    int number;
    cin >> number;
    switch (number) {
        case 1:
            cout << "Cococola Out!" <<endl;
            break;
        case 2:
            cout << "Pepsi Out!" <<endl;
            break;
        case 3:
            cout << "CanadaDry Out!" <<endl;
            break;
        case 4:
            cout << "SevenUp Out!" <<endl;
            break;
        case 5:
            cout << "Sprite Out!" <<endl;
            break;
            
        default:
            cout << "Error. choice was not valid, here is your money back." <<endl;
            break;
    }
    return 0;
}
