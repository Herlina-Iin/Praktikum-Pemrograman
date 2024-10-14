#include <iostream>
#include<vector>
#include<string>
using namespace std;

vector<int>reverseVector(const vector<int>&input){
    vector<int>reverse;

    for (int i=input.size()-1;i>=0;i--){
        reverse.push_back(input[i]);
    }
    return reverse;
}

int main() {
//Problem 1: FizzBuzz with vectors
    vector<string>hasil;
    for(int i=1;i<=100;i++){
        if(i%3==0&&i%5==0){
            hasil.push_back("FizzBuzz");
        } else if(i%3==0){
            hasil.push_back("Fizz");
        } else if(i%5==0){
            hasil.push_back("Buzz");
        } else{
            hasil.push_back(to_string(i));
        }
    }
    for(const string& str:hasil){
        cout<<str<<endl;
    }
    cout<<endl;
    
//Problem 2: reverse an array
    vector<int>vectorOriginal={1, 2, 3, 4, 5};
    cout<<"Vektor Original: ";
    for(const int& num:vectorOriginal){
        cout<<num<<" ";
    }
    cout<<endl;

    vector<int>reversed=reverseVector
        (vectorOriginal);
    cout<<"Vektor terbalik: ";
    for(const int& num:reversed){
        cout<<num<<" ";
    }
    cout<<endl;
    
    return 0;
}
