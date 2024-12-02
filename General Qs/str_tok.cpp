#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char str[] = "brown fox jumps over the lazy dog";

    //obtain first token
    char *token = strtok(str, " "); // word before the ' ' will be returned in token

    while(token != NULL) {
        cout << token << endl;
        token = strtok(NULL, " "); // NULL is passed to get the next token
    }

    return 0;
}