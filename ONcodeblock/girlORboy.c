#include<stdio.h>

int main(){

char username[101];
int letters[26] = {0};
int i, count =0;


scanf("%s", username);


for (i=0; username[i] !='\0' ; i++){
     int index= username [i] - 'a' ;
     letters[index]=1;
}

for (i=0; i<26; i++){
     count +=letters[i];
}

if (count% 2 ==0)
   printf("CHAT WITH HER!\n");

else
   printf("IGNORE HIM!\n");


return 0;
}
