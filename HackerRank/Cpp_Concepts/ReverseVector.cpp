//https://www.hackerrank.com/challenges/arrays-introduction/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm> // use reverse here
using namespace std;

int length;
vector<int> myVector;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    cin >> length;
    myVector.resize(length);
    
    for(int i = 0; i < length; i++){
        cin >> myVector[i];
    }
    
    reverse(myVector.begin(), myVector.end());
    
    for(int i = 0; i < length; i++){
        printf("%i ", myVector[i]);
    }    

    return 0;
}
