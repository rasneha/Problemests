#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){

char str1[101];
int c1=0, c2=0;
scanf("%s", str1);
for(int i = 0; i < strlen(str1); i++) {
    if(str1[i] >= 'A' && str1[i] <= 'Z')
        c1++;
    else
        c2++;
}
if(c1 > c2) {
    for(int i = 0; i < strlen(str1); i++) {
        str1[i] = toupper(str1[i]);
    }
} else {
    for(int i = 0; i < strlen(str1); i++) {
        str1[i] = tolower(str1[i]);
    }
}
printf("%s", str1);
return 0;
}