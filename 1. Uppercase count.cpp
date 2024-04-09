#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;

int upperchar(string str) {
    int count = 0,i;
    for ( i = 0; i < str.length(); i++) 
	{
        if (isupper(str[i]))
            count++;
    }
    return count;
}

int main() {
    string str;
    cout << "Enter a string : ";
    getline(cin, str); 
    int c = upperchar(str); 
    cout << "Number of uppercase characters in the string are: " << c ;
    return 0;
}

