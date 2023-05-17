#include <iostream>
#include <string.h>
#include <string>
#include <math.h>

using namespace std;


int reverseInteger(int number){
    int result =0;
    string stringNumber = std::to_string(number);
    string reverseNumber;

    for (int i = stringNumber.length() - 1; i >= 0; i--)reverseNumber += stringNumber[i];

    try {
        int result = std::stoi(reverseNumber);
    }catch(exception){
        cout<<"Error --> out of range"<<endl;
        return 0;
    }

    if ((result>pow(2,31))||(result<pow(-2,31))){
        return 0;
    }
    return result;
}


int main(){

    int number;
    cin>>number;

    cout << reverseInteger(number)<<endl;



    return 0;
}