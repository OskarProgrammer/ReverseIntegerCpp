#include <iostream>
#include <string.h>
#include <string>


using namespace std;


int reverseInteger(int number){

    string stringNumber = std::to_string(number);
    string reverseNumber;

    for (int i = stringNumber.length() - 1; i >= 0; i--)reverseNumber += stringNumber[i];

    int result = std::stoi(reverseNumber);

    return result;
}


int main(){

    int number;
    cin>>number;

    cout << reverseInteger(number)<<endl;



    return 0;
}