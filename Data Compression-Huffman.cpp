#include<iostream>
#include<fstream>>

#define TRUE 1
#define FALSE 0

using namespace std;


int main(){

    ifstream input;
    ofstream output;

    input.open("Project 6-Data Compression-Huffman.cpp");
    output.open("Huffman.txt");


    char characters;
    int frequency[128];

    for(int i=0; i<128; i++){
        frequency[i]=0;
    }

    while(input){
        input.get(characters);
        frequency[int(characters)]++;
        output<<characters;
    }

    int charSize;
    charSize=characters.size();

    int code[charSize];
    int left[charSize];
    int right[charSize];





return 0;
}
