#include <iostream>
#include <string>
using namespace std;
int main()
{
    string word = "";
    int num;
    cin>> num;
    int m = num;
    int M = m/1000;
    m %= 1000;
    int D = m/500;
    m %= 500;
    int C = m/100;
    m %= 100;
    int L = m/50;
    m %= 50;
    int X = m/10;
    m %= 10;
    int V = m/5;
    m %= 5;
    int I = m;
        for (int i = 0; i < M; ++i){
        word += "M";
    }
    if ((D == 1)&&(C == 4)){
        word += "CM";
    }
    else {
        for (int i = 0; i < D; ++i){
            word += "D";
        }
    }
    if ((D == 1)&&(C == 4)){
        C = 0;
    }
    else if (C == 4){
        word += "CD";
    }
    else{
        for (int i=0; i < C; ++i){
            word += "C";
        }
    }
    if ((L == 1)&&(X == 4)){
        word += "XC";
    }
    else {
        for (int i = 0; i < L; ++i){
            word += "L";
        }
    }
    if ((L == 1)&&(X == 4)){
        X=0;
    }
    else if (X == 4){
        word += "XL";
    }
    else {
        for (int i = 0; i < X; ++i){
            word += "X";
        }
    }
    if ((V == 1)&&(I == 4)){
        word += "IX";
    }
    else {
        for (int i = 0; i < V; ++i){
            word += "V";
        }
    }
    if ((V == 1)&&(I == 4)){
        I = 0;
    }
    else if (I == 4){
        word += "IV";
    }
    else {
        for (int i = 0; i < I; ++i){
            word += "I";
        }
    }
    cout<< "Result: " << endl << num << " --> " << word;
    return 0;
}
