/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

 int i, soma=0;

 char texto[300];

 fgets(texto,300,stdin);

 for(i=0; texto[i]!='\n' ; i++){

  if(((texto[i]!=' ')&&(texto[i]!=',')&&(texto[i]!='.')&&(texto[i]!='!')&&(texto[i]!='-')) && ((texto[i+1]==' ')||(texto[i+1]==',')||(texto[i+1]=='.')||(texto[i+1]=='-')||(texto[i]=='!'))){ soma++; }

  if(((texto[i-1]>=48)&&(texto[i-1]<=57))&&((texto[i]=='.')||(texto[i]==','))&&((texto[i+1]>=48)&&(texto[i+1]<=57))) { soma--;}

}

if((texto[i-1]!=' ')&&(texto[i-1]!='.')&&(texto[i-1]!=',')&&(texto[i-1]!='!')){soma = soma+1;}

printf("%d\n", soma);
   
  return 0;
}
