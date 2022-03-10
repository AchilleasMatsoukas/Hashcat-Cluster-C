#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int main(){
printf("Fake Crunch 1.0.0");
//test Area 

int start,end,numbers,alphaGR,alphaENG,symbols;




}

int function(int numbers,int alphaENG,int symbols,int times,int A){
//Max number is 24
int i,j,max,eodigits;
char Newline[24];
FILE *fp;

printf("Gathering information for the generation...\n");

printf("Stage 1: Selecting max number per digit\n");
 if(numbers==0 && alphaENG==0 && symbols==1){
  max=23;
 }if else(numbers==0 && alphaENG==1 && symbols==0){
  max=52; 
 }if else(numbers==0 && alphaENG==1 && symbols==1){
  max=75; 
 }if else(numbers==1 && alphaENG==0 && symbols==0){
  max=10; 
 }if else(numbers==1 && alphaENG==0 && symbols==1){
  max=33; 
 }if else(numbers==1 && alphaENG==1 && symbols==0){
  max=62; 
 }if else(numbers==1 && alphaENG==1 && symbols==1){
  max=85; 
 }
printf("Stage 1: Max number is %d\n",max);

printf("Stage 2: Opening the File (.lst)\n");
 fp = fopen("wordlist.lst","w");
printf("Stage 2: File is ready for writing...\n");

printf("Stage 3: Calculating and Generationg the txt...\n");
 for(j=0;j<24;j++){
   if(A[j]==100){//100 means there is \0 in the string version
     eodigits = j;
   }
  }
 
 for(i=0;i<times;i++){
  
 }
printf("Stage 3: End of the Generation...");


 

}

int Dictionary1111(char A[],int B[],int eo){
 A[j]= "\0";
 for(i=0;i<eo-1;i++){
  if(B[i]==0){
   A[i] = "0"
  }else if(B[i]==1){
   A[i] = "1";
  }else if(B[i]==2){
   A[i] = "2";
  }else if(B[i]==3){
   A[i] = "3";
  }else if(B[i]==4){
   A[i] = "4";
  }else if(B[i]==5){
   A[i] = "5";
  }else if(B[i]==6){
   A[i] = "6";
  }else if(B[i]==7){
   A[i] = "7";
  }else if(B[i]==8){
   A[i] = "8";
  }else if(B[i]==9){
   A[i] = "9";
  }else if(B[i]==10){
   A[i] = "a";
  }else if(B[i]==11){
   A[i] = "b";
  }else if(B[i]==12){
   A[i] = "c";
  }else if(B[i]==13){
   A[i] = "d";
  }else if(B[i]==14){
   A[i] = "e";
  }else if(B[i]==15){
   A[i] = "f";
  }else if(B[i]==16){
   A[i] = "g";
  }else if(B[i]==17){
   A[i] = "h";
  }else if(B[i]==18){
   A[i] = "i";
  }else if(B[i]==19){
   A[i] = "j";
  }else if(B[i]==20){
   A[i] = "k";
  }else if(B[i]==21){
   A[i] = "l";
  }else if(B[i]==22){
   A[i] = "m";
  }else if(B[i]==23){
   A[i] = "n";
  }else if(B[i]==24){
   A[i] = "o";
  }else if(B[i]==25){
   A[i] = "p";
  }else if(B[i]==26){
   A[i] = "q";
  }else if(B[i]==27){
   A[i] = "r";
  }else if(B[i]==28){
   A[i] = "s";
  }else if(B[i]==29){
   A[i] = "t";
  }else if(B[i]==30){
   A[i] = "u";
  }else if(B[i]==31){
   A[i] = "v";
  }else if(B[i]==32){
   A[i] = "w";
  }else if(B[i]==33){
   A[i] = "x";
  }else if(B[i]==34){
   A[i] = "y";
  }else if(B[i]==35){
   A[i] = "z";
  }else if(B[i]==36){
   A[i] = "!";
  }else if(B[i]==37){
   A[i] = "@";
  }else if(B[i]==38){
   A[i] = "#";
  }else if(B[i]==39){
   A[i] = "$";
  }else if(B[i]==40){
   A[i] = "%";
  }else if(B[i]==41){
   A[i] = "^";
  }else if(B[i]==42){
   A[i] = "&";
  }else if(B[i]==43){
   A[i] = "*";
  }else if(B[i]==44){
   A[i] = "(";
  }else if(B[i]==45){
   A[i] = ")";
  }else if(B[i]==46){
   A[i] = "-";
  }else if(B[i]==47){
   A[i] = "_";
  }else if(B[i]==48){
   A[i] = "+";
  }else if(B[i]==49){
   A[i] = "=";
  }else if(B[i]==50){
   A[i] = ";";
  }else if(B[i]==51){
   A[i] = "?";
  }else if(B[i]==52){
   A[i] = "<";
  }else if(B[i]==53){
   A[i] = ">";
  }else if(B[i]==54){
   A[i] = "[";
  }else if(B[i]==55){
   A[i] = "]";
  }else if(B[i]==56){
   A[i] = "{";
  }else if(B[i]==57){
   A[i] = "}";
  }else if(B[i]==58){
   A[i] = "/";
  }else if(B[i]==59){
   A[i] = "A";
  }else if(B[i]==60){
   A[i] = "C";
  }else if(B[i]==61){
   A[i] = "D";
  }else if(B[i]==62){
   A[i] = "E";
  }else if(B[i]==63){
   A[i] = "F";
  }else if(B[i]==64){
   A[i] = "G";
  }else if(B[i]==65){
   A[i] = "H";
  }else if(B[i]==66){
   A[i] = "I";
  }else if(B[i]==67){
   A[i] = "J";
  }else if(B[i]==68){
   A[i] = "K";
  }else if(B[i]==69){
   A[i] = "L";
  }else if(B[i]==70){
   A[i] = "M";
  }else if(B[i]==71){
   A[i] = "N";
  }else if(B[i]==72){
   A[i] = "O";
  }else if(B[i]==73){
   A[i] = "P";
  }else if(B[i]==74){
   A[i] = "Q";
  }else if(B[i]==75){
   A[i] = "R";
  }else if(B[i]==76){
   A[i] = "S";
  }else if(B[i]==77){
   A[i] = "T";
  }else if(B[i]==78){
   A[i] = "U";
  }else if(B[i]==79){
   A[i] = "V";
  }else if(B[i]==80){
   A[i] = "W";
  }else if(B[i]==81){
   A[i] = "X";
  }else if(B[i]==82){
   A[i] = "Y";
  }else if(B[i]==83){
   A[i] = "Z";
  }
}

int Dictionary1111(char A[],int B[],int eo){
 A[j]= "\0";
 for(i=0;i<eo-1;i++){
  if(B[i]==0){
   A[i] = "0"
  }else if(B[i]==1){
   A[i] = "1";
  }else if(B[i]==2){
   A[i] = "2";
  }else if(B[i]==3){
   A[i] = "3";
  }else if(B[i]==4){
   A[i] = "4";
  }else if(B[i]==5){
   A[i] = "5";
  }else if(B[i]==6){
   A[i] = "6";
  }else if(B[i]==7){
   A[i] = "7";
  }else if(B[i]==8){
   A[i] = "8";
  }else if(B[i]==9){
   A[i] = "9";
  }else if(B[i]==10){
   A[i] = "a";
  }else if(B[i]==11){
   A[i] = "b";
  }else if(B[i]==12){
   A[i] = "c";
  }else if(B[i]==13){
   A[i] = "d";
  }else if(B[i]==14){
   A[i] = "e";
  }else if(B[i]==15){
   A[i] = "f";
  }else if(B[i]==16){
   A[i] = "g";
  }else if(B[i]==17){
   A[i] = "h";
  }else if(B[i]==18){
   A[i] = "i";
  }else if(B[i]==19){
   A[i] = "j";
  }else if(B[i]==20){
   A[i] = "k";
  }else if(B[i]==21){
   A[i] = "l";
  }else if(B[i]==22){
   A[i] = "m";
  }else if(B[i]==23){
   A[i] = "n";
  }else if(B[i]==24){
   A[i] = "o";
  }else if(B[i]==25){
   A[i] = "p";
  }else if(B[i]==26){
   A[i] = "q";
  }else if(B[i]==27){
   A[i] = "r";
  }else if(B[i]==28){
   A[i] = "s";
  }else if(B[i]==29){
   A[i] = "t";
  }else if(B[i]==30){
   A[i] = "u";
  }else if(B[i]==31){
   A[i] = "v";
  }else if(B[i]==32){
   A[i] = "w";
  }else if(B[i]==33){
   A[i] = "x";
  }else if(B[i]==34){
   A[i] = "y";
  }else if(B[i]==35){
   A[i] = "z";
  }
