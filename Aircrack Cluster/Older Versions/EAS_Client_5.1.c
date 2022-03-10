#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//EAS CLUSTER WORKER
//This function will Generate a small part of a wordlist 
//INPUTS: An Array[24] example: x|4|%|s|a => 33|4|45|12|10 and the times to generate after given number based on the dictionary
//OUTPUT: The part of the wordlist after the array in a .lst file

//STAGE 1: is the defining area for the local dictionary to know how much to count in order to change letter
//STAGE 2: Opening and creating the lst file for writing 
//STAGE 3: Outputs the results into the file

int function(int numbers,int aplhaENG,int symbols,int times,int start[]);
int Dictionary001(char A[],int B[],int j);
int Dictionary010(char A[],int B[],int j);
int Dictionary011(char A[],int B[],int j);
int Dictionary100(char A[],int B[],int j);
int Dictionary101(char A[],int B[],int j);
int Dictionary110(char A[],int B[],int j);
int Dictionary111(char A[],int B[],int j);

int main(){
printf("EAS Cluster 'Worker' 5.1.0\n");
//test Area 
int Start[24]={40,40,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100};
int numbers=1;
int alphaENG=1;
int symbols=1;
int times=10000;

function(numbers,alphaENG,symbols,times,Start);

 
}

int function(int numbers,int alphaENG,int symbols,int times,int start[]){
//Max number of the string is 24 
int i,j,o,h,jeo,flag,max,eodigits;
char Newline[24];
FILE *fp;

printf("Gathering information for the generation...\n");

printf("Stage 1: Selecting max number per digit\n");
 //Setting the fix max size per digit
 if(numbers==0 && alphaENG==0 && symbols==1){
  max=23;
 }else if(numbers==0 && alphaENG==1 && symbols==0){
  max=52; 
 }else if(numbers==0 && alphaENG==1 && symbols==1){
  max=75; 
 }else if(numbers==1 && alphaENG==0 && symbols==0){
  max=10; 
 }else if(numbers==1 && alphaENG==0 && symbols==1){
  max=33; 
 }else if(numbers==1 && alphaENG==1 && symbols==0){
  max=61; 
 }else if(numbers==1 && alphaENG==1 && symbols==1){
  max=84; 
 }
printf("Stage 1: Max number is %d\n",max);

printf("Stage 2: Opening the File (.lst)\n");
 fp = fopen("wordlist.lst","w");
printf("Stage 2: File is ready for writing...\n");

printf("Stage 3: Calculating and Generating the lst...\n");
 for(jeo=0;jeo<24;jeo++){
   if(start[jeo]==100){ //100 means there is \0 in the string version
     j = jeo;break;
     j--;
   }
  }
 for(i=0;i<times;i++){
  //Choosing the Dictionary 
  if(max==23){
    Dictionary001(Newline,start,j);  
  }else if(max==52){
    Dictionary010(Newline,start,j);
  }else if(max==75){
    Dictionary011(Newline,start,j);
  }else if(max==10){
    Dictionary100(Newline,start,j);
  }else if(max==33){
    Dictionary101(Newline,start,j);
  }else if(max==61){
    Dictionary110(Newline,start,j);
  }else if(max==84){
    Dictionary111(Newline,start,j);
  }
 
  //Printing the new string to file. 
  fprintf(fp,"%s\n",Newline);
  start[j-1]++; //incresing the int Array by one
 
   //This loop will check all the array to see if something
   //maxed out to increase the value of the next by one and check again till 0.
   for(o=j-1;o>=0;o--){
   if(start[o]>=max){
     start[o]=-1;
     start[o-1]++;
     break;
   }
   
    //flag to check if all the possible compinations have been tested and add another line
    flag=0;
    for(h=0;h<j-1;h++){
      if(start[h]==max){
        flag=0;
      }else{
        flag=1;
        break;
      }
    }
    //adding the new line to file and making it 0 and 100 the other for the new end
    if(flag==0){ 
      j++; 
      start[j]=100; 
      start[j-1]=0;
      for(o=0;o<j-1;o++){
        start[o]=0;
      }
    }
  }

  
 // printf("Stage 3: Printed %d of %d\n",i,times);
  }

 fclose(fp);
printf("Stage 3: End of the Generation...");


}


int Dictionary111(char A[],int B[],int eo){
 int i;
 for(i=0;i<24;i++){
  if(B[i]==100){A[i]= '\0';}
  if(B[i]==0){
   A[i] = '0';
  }else if(B[i]==1){
   A[i] = '1';
  }else if(B[i]==2){
   A[i] = '2';
  }else if(B[i]==3){
   A[i] = '3';
  }else if(B[i]==4){
   A[i] = '4';
  }else if(B[i]==5){
   A[i] = '5';
  }else if(B[i]==6){
   A[i] = '6';
  }else if(B[i]==7){
   A[i] = '7';
  }else if(B[i]==8){
   A[i] = '8';
  }else if(B[i]==9){
   A[i] = '9';
  }else if(B[i]==10){
   A[i] = 'a';
  }else if(B[i]==11){
   A[i] = 'b';
  }else if(B[i]==12){
   A[i] = 'c';
  }else if(B[i]==13){
   A[i] = 'd';
  }else if(B[i]==14){
   A[i] = 'e';
  }else if(B[i]==15){
   A[i] = 'f';
  }else if(B[i]==16){
   A[i] = 'g';
  }else if(B[i]==17){
   A[i] = 'h';
  }else if(B[i]==18){
   A[i] = 'i';
  }else if(B[i]==19){
   A[i] = 'j';
  }else if(B[i]==20){
   A[i] = 'k';
  }else if(B[i]==21){
   A[i] = 'l';
  }else if(B[i]==22){
   A[i] = 'm';
  }else if(B[i]==23){
   A[i] = 'n';
  }else if(B[i]==24){
   A[i] = 'o';
  }else if(B[i]==25){
   A[i] = 'p';
  }else if(B[i]==26){
   A[i] = 'q';
  }else if(B[i]==27){
   A[i] = 'r';
  }else if(B[i]==28){
   A[i] = 's';
  }else if(B[i]==29){
   A[i] = 't';
  }else if(B[i]==30){
   A[i] = 'u';
  }else if(B[i]==31){
   A[i] = 'v';
  }else if(B[i]==32){
   A[i] = 'w';
  }else if(B[i]==33){
   A[i] = 'x';
  }else if(B[i]==34){
   A[i] = 'y';
  }else if(B[i]==35){
   A[i] = 'z';
  }else if(B[i]==36){
   A[i] = 'A';
  }else if(B[i]==84){
    A[i] = 'B';
  }else if(B[i]==37){
   A[i] = 'C';
  }else if(B[i]==38){
   A[i] = 'D';
  }else if(B[i]==39){
   A[i] = 'E';
  }else if(B[i]==40){
   A[i] = 'F';
  }else if(B[i]==41){
   A[i] = 'G';
  }else if(B[i]==42){
   A[i] = 'H';
  }else if(B[i]==43){
   A[i] = 'I';
  }else if(B[i]==44){
   A[i] = 'J';
  }else if(B[i]==45){
   A[i] = 'K';
  }else if(B[i]==46){
   A[i] = 'L';
  }else if(B[i]==47){
   A[i] = 'M';
  }else if(B[i]==48){
   A[i] = 'N';
  }else if(B[i]==49){
   A[i] = 'O';
  }else if(B[i]==50){
   A[i] = 'P';
  }else if(B[i]==51){
   A[i] = 'Q';
  }else if(B[i]==52){
   A[i] = 'R';
  }else if(B[i]==53){
   A[i] = 'S';
  }else if(B[i]==54){
   A[i] = 'T';
  }else if(B[i]==55){
   A[i] = 'U';
  }else if(B[i]==56){
   A[i] = 'V';
  }else if(B[i]==57){
   A[i] = 'W';
  }else if(B[i]==58){
   A[i] = 'X';
  }else if(B[i]==59){
   A[i] = 'Y';
  }else if(B[i]==60){
   A[i] = 'Z';
  }else if(B[i]==61){
    A[i] = '!';
   }else if(B[i]==62){
    A[i] = '@';
   }else if(B[i]==63){
    A[i] = '#';
   }else if(B[i]==64){
    A[i] = '$';
   }else if(B[i]==65){
    A[i] = '%';
   }else if(B[i]==66){
    A[i] = '^';
   }else if(B[i]==67){
    A[i] = '&';
   }else if(B[i]==68){
    A[i] = '*';
   }else if(B[i]==69){
    A[i] = '(';
   }else if(B[i]==70){
    A[i] = ')';
   }else if(B[i]==71){
    A[i] = '-';
   }else if(B[i]==72){
    A[i] = '_';
   }else if(B[i]==73){
    A[i] = '+';
   }else if(B[i]==74){
    A[i] = '=';
   }else if(B[i]==75){
    A[i] = ';';
   }else if(B[i]==76){
    A[i] = '?';
   }else if(B[i]==77){
    A[i] = '<';
   }else if(B[i]==78){
    A[i] = '>';
   }else if(B[i]==79){
    A[i] = '[';
   }else if(B[i]==80){
    A[i] = ']';
   }else if(B[i]==81){
    A[i] = '{';
   }else if(B[i]==82){
    A[i] = '}';
   }else if(B[i]==83){
    A[i] = '/';
   }else if(B[i]==84){
    A[i] = ' '; 
   }
 }
}
int Dictionary110(char A[],int B[],int eo){
 int i;
 for(i=0;i<24;i++){
  if(B[i]==100){A[i]= '\0';}
  if(B[i]==0){
    A[i] = '0';
   }else if(B[i]==1){
    A[i] = '1';
   }else if(B[i]==2){
    A[i] = '2';
   }else if(B[i]==3){
    A[i] = '3';
   }else if(B[i]==4){
    A[i] = '4';
   }else if(B[i]==5){
    A[i] = '5';
   }else if(B[i]==6){
    A[i] = '6';
   }else if(B[i]==7){
    A[i] = '7';
   }else if(B[i]==8){
    A[i] = '8';
   }else if(B[i]==9){
    A[i] = '9';
   }else if(B[i]==10){
    A[i] = 'a';
   }else if(B[i]==11){
    A[i] = 'b';
   }else if(B[i]==12){
    A[i] = 'c';
   }else if(B[i]==13){
    A[i] = 'd';
   }else if(B[i]==14){
    A[i] = 'e';
   }else if(B[i]==15){
    A[i] = 'f';
   }else if(B[i]==16){
    A[i] = 'g';
   }else if(B[i]==17){
    A[i] = 'h';
   }else if(B[i]==18){
    A[i] = 'i';
   }else if(B[i]==19){
    A[i] = 'j';
   }else if(B[i]==20){
    A[i] = 'k';
   }else if(B[i]==21){
    A[i] = 'l';
   }else if(B[i]==22){
    A[i] = 'm';
   }else if(B[i]==23){
    A[i] = 'n';
   }else if(B[i]==24){
    A[i] = 'o';
   }else if(B[i]==25){
    A[i] = 'p';
   }else if(B[i]==26){
    A[i] = 'q';
   }else if(B[i]==27){
    A[i] = 'r';
   }else if(B[i]==28){
    A[i] = 's';
   }else if(B[i]==29){
    A[i] = 't';
   }else if(B[i]==30){
    A[i] = 'u';
   }else if(B[i]==31){
    A[i] = 'v';
   }else if(B[i]==32){
    A[i] = 'w';
   }else if(B[i]==33){
    A[i] = 'x';
   }else if(B[i]==34){
    A[i] = 'y';
   }else if(B[i]==35){
    A[i] = 'z';
   }else if(B[i]==36){
    A[i] = 'A';
   }else if(B[i]==61){
    A[i] = 'B';
   }else if(B[i]==37){
    A[i] = 'C';
   }else if(B[i]==38){
    A[i] = 'D';
   }else if(B[i]==39){
    A[i] = 'E';
   }else if(B[i]==40){
    A[i] = 'F';
   }else if(B[i]==41){
    A[i] = 'G';
   }else if(B[i]==42){
    A[i] = 'H';
   }else if(B[i]==43){
    A[i] = 'I';
   }else if(B[i]==44){
    A[i] = 'J';
   }else if(B[i]==45){
    A[i] = 'K';
   }else if(B[i]==46){
    A[i] = 'L';
   }else if(B[i]==47){
    A[i] = 'M';
   }else if(B[i]==48){
    A[i] = 'N';
   }else if(B[i]==49){
    A[i] = 'O';
   }else if(B[i]==50){
    A[i] = 'P';
   }else if(B[i]==51){
    A[i] = 'Q';
   }else if(B[i]==52){
    A[i] = 'R';
   }else if(B[i]==53){
    A[i] = 'S';
   }else if(B[i]==54){
    A[i] = 'T';
   }else if(B[i]==55){
    A[i] = 'U';
   }else if(B[i]==56){
    A[i] = 'V';
   }else if(B[i]==57){
    A[i] = 'W';
   }else if(B[i]==58){
    A[i] = 'X';
   }else if(B[i]==59){
    A[i] = 'Y';
   }else if(B[i]==60){
    A[i] = 'Z';
   }else if(B[i]==61){
    A[i] = ' '; 
   }
  }
}
int Dictionary101(char A[],int B[],int eo){
  int i;
  for(i=0;i<eo-1;i++){
    if(B[i]==100){A[i]= '\0';}
    if(B[i]==0){
      A[i] = '0';
     }else if(B[i]==1){
      A[i] = '1';
     }else if(B[i]==2){
      A[i] = '2';
     }else if(B[i]==3){
      A[i] = '3';
     }else if(B[i]==4){
      A[i] = '4';
     }else if(B[i]==5){
      A[i] = '5';
     }else if(B[i]==6){
      A[i] = '6';
     }else if(B[i]==7){
      A[i] = '7';
     }else if(B[i]==8){
      A[i] = '8';
     }else if(B[i]==9){
      A[i] = '9';
     }else if(B[i]==10){
      A[i] = '!';
     }else if(B[i]==11){
      A[i] = '@';
     }else if(B[i]==12){
      A[i] = '#';
     }else if(B[i]==13){
      A[i] = '$';
     }else if(B[i]==14){
      A[i] = '%';
     }else if(B[i]==15){
      A[i] = '^';
     }else if(B[i]==16){
      A[i] = '&';
     }else if(B[i]==17){
      A[i] = '*';
     }else if(B[i]==18){
      A[i] = '(';
     }else if(B[i]==19){
      A[i] = ')';
     }else if(B[i]==20){
      A[i] = '-';
     }else if(B[i]==21){
      A[i] = '_';
     }else if(B[i]==22){
      A[i] = '+';
     }else if(B[i]==23){
      A[i] = '=';
     }else if(B[i]==24){
      A[i] = ';';
     }else if(B[i]==25){
      A[i] = '?';
     }else if(B[i]==26){
      A[i] = '<';
     }else if(B[i]==27){
      A[i] = '>';
     }else if(B[i]==28){
      A[i] = '[';
     }else if(B[i]==29){
      A[i] = ']';
     }else if(B[i]==30){
      A[i] = '{';
     }else if(B[i]==31){
      A[i] = '}';
     }else if(B[i]==32){
      A[i] = '/';
     }else if(B[i]==33){
    A[i] = ' '; 
   }

  }  
}
int Dictionary100(char A[],int B[],int eo){
  int i;
  for(i=0;i<24;i++){
    if(B[i]==100){A[i]= '\0';break;}
    if(B[i]==0){
      A[i] = '0';
     }else if(B[i]==1){
      A[i] = '1';
     }else if(B[i]==2){
      A[i] = '2';
     }else if(B[i]==3){
      A[i] = '3';
     }else if(B[i]==4){
      A[i] = '4';
     }else if(B[i]==5){
      A[i] = '5';
     }else if(B[i]==6){
      A[i] = '6';
     }else if(B[i]==7){
      A[i] = '7';
     }else if(B[i]==8){
      A[i] = '8';
     }else if(B[i]==9){
      A[i] = '9';
     }else if(B[i]==10){
      A[i] = ' '; 
   }
    
  }  
}
int Dictionary011(char A[],int B[],int eo){
  int i;
  for(i=0;i<24;i++){
     if(B[i]==100){A[i]= '\0';}
     if(B[i]==0){
      A[i] = 'a';
     }else if(B[i]==1){
      A[i] = 'b';
     }else if(B[i]==2){
      A[i] = 'c';
     }else if(B[i]==3){
      A[i] = 'd';
     }else if(B[i]==4){
      A[i] = 'e';
     }else if(B[i]==5){
      A[i] = 'f';
     }else if(B[i]==6){
      A[i] = 'g';
     }else if(B[i]==7){
      A[i] = 'h';
     }else if(B[i]==8){
      A[i] = 'i';
     }else if(B[i]==9){
      A[i] = 'j';
     }else if(B[i]==10){
      A[i] = 'k';
     }else if(B[i]==11){
      A[i] = 'l';
     }else if(B[i]==12){
      A[i] = 'm';
     }else if(B[i]==13){
      A[i] = 'n';
     }else if(B[i]==14){
      A[i] = 'o';
     }else if(B[i]==15){
      A[i] = 'p';
     }else if(B[i]==16){
      A[i] = 'q';
     }else if(B[i]==17){
      A[i] = 'r';
     }else if(B[i]==18){
      A[i] = 's';
     }else if(B[i]==19){
      A[i] = 't';
     }else if(B[i]==20){
      A[i] = 'u';
     }else if(B[i]==21){
      A[i] = 'v';
     }else if(B[i]==22){
      A[i] = 'w';
     }else if(B[i]==23){
      A[i] = 'x';
     }else if(B[i]==24){
      A[i] = 'y';
     }else if(B[i]==25){
      A[i] = 'z';
     }else if(B[i]==26){
      A[i] = 'A';
     }else if(B[i]==27){
       A[i] = 'B';
     }else if(B[i]==28){
      A[i] = 'C';
     }else if(B[i]==29){
      A[i] = 'D';
     }else if(B[i]==30){
      A[i] = 'E';
     }else if(B[i]==31){
      A[i] = 'F';
     }else if(B[i]==32){
      A[i] = 'G';
     }else if(B[i]==33){
      A[i] = 'H';
     }else if(B[i]==34){
      A[i] = 'I';
     }else if(B[i]==35){
      A[i] = 'J';
     }else if(B[i]==36){
      A[i] = 'K';
     }else if(B[i]==37){
      A[i] = 'L';
     }else if(B[i]==38){
      A[i] = 'M';
     }else if(B[i]==39){
      A[i] = 'N';
     }else if(B[i]==40){
      A[i] = 'O';
     }else if(B[i]==41){
      A[i] = 'P';
     }else if(B[i]==42){
      A[i] = 'Q';
     }else if(B[i]==43){
      A[i] = 'R';
     }else if(B[i]==44){
      A[i] = 'S';
     }else if(B[i]==45){
      A[i] = 'T';
     }else if(B[i]==46){
      A[i] = 'U';
     }else if(B[i]==47){
      A[i] = 'V';
     }else if(B[i]==48){
      A[i] = 'W';
     }else if(B[i]==49){
      A[i] = 'X';
     }else if(B[i]==50){
      A[i] = 'Y';
     }else if(B[i]==51){
      A[i] = 'Z';
     }else if(B[i]==52){
       A[i] = '!';
      }else if(B[i]==53){
       A[i] = '@';
      }else if(B[i]==54){
       A[i] = '#';
      }else if(B[i]==55){
       A[i] = '$';
      }else if(B[i]==56){
       A[i] = '%';
      }else if(B[i]==57){
       A[i] = '^';
      }else if(B[i]==58){
       A[i] = '&';
      }else if(B[i]==59){
       A[i] = '*';
      }else if(B[i]==60){
       A[i] = '(';
      }else if(B[i]==61){
       A[i] = ')';
      }else if(B[i]==62){
       A[i] = '-';
      }else if(B[i]==63){
       A[i] = '_';
      }else if(B[i]==64){
       A[i] = '+';
      }else if(B[i]==65){
       A[i] = '=';
      }else if(B[i]==66){
       A[i] = ';';
      }else if(B[i]==67){
       A[i] = '?';
      }else if(B[i]==68){
       A[i] = '<';
      }else if(B[i]==69){
       A[i] = '>';
      }else if(B[i]==70){
       A[i] = '[';
      }else if(B[i]==71){
       A[i] = ']';
      }else if(B[i]==72){
       A[i] = '{';
      }else if(B[i]==73){
       A[i] = '}';
      }else if(B[i]==74){
       A[i] = '/';
      }else if(B[i]==75){
       A[i] = ' '; 
   }
    
  }  
}
int Dictionary001(char A[],int B[],int eo){
  int i;
  for(i=0;i<24;i++){
    if(B[i]==100){A[i]= '\0';}
    else if(B[i]==0){
      A[i] = '!';
     }else if(B[i]==1){
      A[i] = '@';
     }else if(B[i]==2){
      A[i] = '#';
     }else if(B[i]==3){
      A[i] = '$';
     }else if(B[i]==4){
      A[i] = '%';
     }else if(B[i]==5){
      A[i] = '^';
     }else if(B[i]==6){
      A[i] = '&';
     }else if(B[i]==7){
      A[i] = '*';
     }else if(B[i]==8){
      A[i] = '(';
     }else if(B[i]==9){
      A[i] = ')';
     }else if(B[i]==10){
      A[i] = '-';
     }else if(B[i]==11){
      A[i] = '_';
     }else if(B[i]==12){
      A[i] = '+';
     }else if(B[i]==13){
      A[i] = '=';
     }else if(B[i]==14){
      A[i] = ';';
     }else if(B[i]==15){
      A[i] = '?';
     }else if(B[i]==16){
      A[i] = '<';
     }else if(B[i]==17){
      A[i] = '>';
     }else if(B[i]==18){
      A[i] = '[';
     }else if(B[i]==19){
      A[i] = ']';
     }else if(B[i]==20){
      A[i] = '{';
     }else if(B[i]==21){
      A[i] = '}';
     }else if(B[i]==22){
      A[i] = '/';
     }else if(B[i]==23){
    A[i] = ' '; 
   }
    
  }  
}
int Dictionary010(char A[],int B[],int eo){
  int i;
  for(i=0;i<24;i++){
    if(B[i]==100){A[i]= '\0';}
    else if(B[i]==0){
      A[i] = 'a';
     }else if(B[i]==1){
      A[i] = 'b';
     }else if(B[i]==2){
      A[i] = 'c';
     }else if(B[i]==3){
      A[i] = 'd';
     }else if(B[i]==4){
      A[i] = 'e';
     }else if(B[i]==5){
      A[i] = 'f';
     }else if(B[i]==6){
      A[i] = 'g';
     }else if(B[i]==7){
      A[i] = 'h';
     }else if(B[i]==8){
      A[i] = 'i';
     }else if(B[i]==9){
      A[i] = 'j';
     }else if(B[i]==10){
      A[i] = 'k';
     }else if(B[i]==11){
      A[i] = 'l';
     }else if(B[i]==12){
      A[i] = 'm';
     }else if(B[i]==13){
      A[i] = 'n';
     }else if(B[i]==14){
      A[i] = 'o';
     }else if(B[i]==15){
      A[i] = 'p';
     }else if(B[i]==16){
      A[i] = 'q';
     }else if(B[i]==17){
      A[i] = 'r';
     }else if(B[i]==18){
      A[i] = 's';
     }else if(B[i]==19){
      A[i] = 't';
     }else if(B[i]==20){
      A[i] = 'u';
     }else if(B[i]==21){
      A[i] = 'v';
     }else if(B[i]==22){
      A[i] = 'w';
     }else if(B[i]==23){
      A[i] = 'x';
     }else if(B[i]==24){
      A[i] = 'y';
     }else if(B[i]==25){
      A[i] = 'z';
     }else if(B[i]==26){
      A[i] = 'A';
     }else if(B[i]==27){
      A[i] = 'B';
     }else if(B[i]==28){
      A[i] = 'C';
     }else if(B[i]==29){
      A[i] = 'D';
     }else if(B[i]==30){
      A[i] = 'E';
     }else if(B[i]==31){
      A[i] = 'F';
     }else if(B[i]==32){
      A[i] = 'G';
     }else if(B[i]==33){
      A[i] = 'H';
     }else if(B[i]==34){
      A[i] = 'I';
     }else if(B[i]==35){
      A[i] = 'J';
     }else if(B[i]==36){
      A[i] = 'K';
     }else if(B[i]==37){
      A[i] = 'L';
     }else if(B[i]==38){
      A[i] = 'M';
     }else if(B[i]==39){
      A[i] = 'N';
     }else if(B[i]==40){
      A[i] = 'O';
     }else if(B[i]==41){
      A[i] = 'P';
     }else if(B[i]==42){
      A[i] = 'Q';
     }else if(B[i]==43){
      A[i] = 'R';
     }else if(B[i]==44){
      A[i] = 'S';
     }else if(B[i]==45){
      A[i] = 'T';
     }else if(B[i]==46){
      A[i] = 'U';
     }else if(B[i]==47){
      A[i] = 'V';
     }else if(B[i]==48){
      A[i] = 'W';
     }else if(B[i]==49){
      A[i] = 'X';
     }else if(B[i]==50){
      A[i] = 'Y';
     }else if(B[i]==51){
      A[i] = 'Z';
     }else if(B[i]==52){
    A[i] = ' '; 
   }
    
  }  
}