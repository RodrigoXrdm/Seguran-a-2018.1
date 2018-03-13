#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <list>
#include <stdlib.h>

using namespace std;

int grade[5][5];
int auxAsc = 97;
list<string> pares;
string textoFinal;

bool posicionarGrade(char letra){
    for(int i = 0;i < 5;i++){
        for ( int j = 0;j < 5;){
            if(grade[i][j] != 0){
                j++;
            }else{
                grade[i][j] = letra;
                return true;
            }
        }
    }
}


void preencherGrade(string chave){
    int marcador[25];
    marcador[10] = 1;
    char aux;


    for(int i = 0;i < chave.length();i++){
        aux = chave[i];
        if(marcador[aux - auxAsc] != 1){
            marcador[aux - auxAsc] = 1;
            posicionarGrade(aux);
        }
    }
    for(int i = 97;i < 123;i++){
        if(marcador[i-auxAsc] != 1){
            posicionarGrade(i);
        }
    }
}
void preparaTexto(string texto){
    int tam = texto.length();
    for(int i = 0;i<tam;i++){
        if(texto[i] == ' '){
            texto.erase(i,1);
            tam = tam-1;
            i--;
        }else{
            if(texto[i] == texto[i+1]){
                if(texto[i] == 'w'){
                    texto = texto.substr(0,i+1) + 'z' + texto.substr(i+1,tam-1);
                    tam += 1;
                    i++;
                }else{
                    texto = texto.substr(0,i+1) + 'w' + texto.substr(i+1,tam-1);
                    tam += 1;
                    i++;
                }
            }else{
                i++;
            }
        }
    }
    if(tam % 2 != 0){
        if(texto[tam-1] == 'w'){
            texto = texto+'z';
        }else{
            texto=texto+'w';
        }
    }
    textoFinal = texto;
}

string trocarChar(char aux1, char aux2){
    int posL1,posC1;
    int posL2,posC2;
    string texto="aa";
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5;j++){
            if(grade[i][j] == aux1 || grade[i][j] == aux2){
                if(grade[i][j] == aux1){
                    posL1 = i;
                    posC1 =j;
                }else{
                    posL2 = i;
                    posC2 = j;
                }
            }
        }
    }
    if(posL1 == posL2){
        if(posC1 < 4){
            if(posC2 < 4){
                texto[0] = grade[posL1][posC1+1];
                texto[1] = grade[posL2][posC2+1];

            }else{
                texto[0] = (char)grade[posL1][posC1+1];
                texto[1] = (char)grade[posL2][0];
            }
        }else{
            texto[0] = (char)grade[posL1][0];
            texto[1] = (char)grade[posL2][posC2+1];
        }
    }else if(posC1 == posC2){
        if(posL1 < 4){
            if(posL2 < 4){
                texto[0] = (char)grade[posL1+1][posC1];
                texto[1] = (char)grade[posL2+2][posC2];
            }else{
                texto[0] = (char)grade[posL1+1][posC1];
                texto[1] = (char)grade[0][posC2];
            }
        }else{
            texto[0] = (char)grade[0][posC1];
            texto[1] = (char)grade[posL2+1][posC2];
        }
    }else{
        texto[0] = (char)grade[posL1][posC2];
        texto[1] = (char)grade[posL2][posC1];
    }

    return texto;
}

string trocarCharDescriptografar(char aux1,char aux2){
    int posL1,posC1;
    int posL2,posC2;
    string texto="aa";
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5;j++){
            if(grade[i][j] == aux1 || grade[i][j] == aux2){
                if(grade[i][j] == aux1){
                    posL1 = i;
                    posC1 =j;
                }else{
                    posL2 = i;
                    posC2 = j;
                }
            }
        }
    }
    if(posL1 == posL2){
        if(posC1 < 4){
            if(posC2 < 4){
                texto[0] = grade[posL1][posC1+1];
                texto[1] = grade[posL2][posC2+1];

            }else{
                texto[0] = (char)grade[posL1][posC1+1];
                texto[1] = (char)grade[posL2][0];
            }
        }else{
            texto[0] = (char)grade[posL1][0];
            texto[1] = (char)grade[posL2][posC2+1];
        }
    }else if(posC1 == posC2){
        if(posL1 < 4){
            if(posL2 < 4){
                texto[0] = (char)grade[posL1+1][posC1];
                texto[1] = (char)grade[posL2+2][posC2];
            }else{
                texto[0] = (char)grade[posL1+1][posC1];
                texto[1] = (char)grade[0][posC2];
            }
        }else{
            texto[0] = (char)grade[0][posC1];
            texto[1] = (char)grade[posL2+1][posC2];
        }
    }else{
        texto[0] = (char)grade[posL1][posC2];
        texto[1] = (char)grade[posL2][posC1];
    }

    return texto;
}

string criptografar(string texto){
    int tam = texto.length();
    string textoCriptografado;
    char aux1;
    char aux2;

    for(int i = 0; i < tam;i++){
        aux1 = texto[i];
        aux2 = texto[i+1];
        textoCriptografado += trocarChar(aux1,aux2);
        i++;
    }
    //cout << textoCriptografado << endl;
    return textoCriptografado;
}

string descriptografar(string texto){
    int tam = texto.length();
    string textoDescriptografado;
    char aux1;
    char aux2;

    for(int i = 0; i < tam;i++){
        aux1 = texto[i];
        aux2 = texto[i+1];
        textoDescriptografado+= trocarCharDescriptografar(aux1,aux2);
        i++;
    }
    //cout << textoCriptografado << endl;
    return textoCriptografado;
}
int main(){

    string chave;
    string textoSecreto;

    cin >> chave;
    getline(cin, textoSecreto);
    cout << endl;
    preencherGrade(chave);
    preparaTexto(textoSecreto);
    string textoCriptografado = criptografar(textoFinal);
    cout << textoCriptografado << endl;
}
