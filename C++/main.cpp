#include <iostream>

using namespace std;

class Stringa {

private:
    char *listaChar;

public:
    int size = 0;

    Stringa(char *stringa) {
        int i = 0;

        while ((listaChar[i++] != '\0'))
            listaChar = stringa;
        size = i;

    }

    void Stampa() {
        cout << this->listaChar << endl;
    }

    void Set(char *a) {
        this->listaChar = a;


    }

    Stringa ReverseString() {
        char *b = (char *) malloc(sizeof(this->listaChar));

        for (int i = 0; i < size; i++) {
            b[i] = listaChar[size-i-1];
        }
        return Stringa(b);
    }

    int Cerca(char c){
        for(int i = 0; i < size; i++){
            if(this->listaChar[i] == c){
                return i;

            }

        }
        return -1;

    }
    int Conta(char c){
        int sum = 0;
        for(int i = 0; i < size; i++){
            if(this->listaChar[i] == c){
                sum++;

            }

        }
        return sum;

    }

    //toUpper
    //toLower
    //toFlip
    //palindroma
    //operator



};

int main() {

    Stringa str1("ciao");
    str1.Stampa();
    return 0;
}