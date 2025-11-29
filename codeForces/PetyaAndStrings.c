#include<stdio.h>

#include<string.h>
#include<ctype.h>

int main(){

char str1[101], str2[101];
scanf("%s %s", str1, str2);

for(int i = 0; i < strlen(str1); i++) {
    str1[i] = tolower(str1[i]);
}
for(int i = 0; i < strlen(str2); i++) {
    str2[i] = tolower(str2[i]);
}
int com = strcmp(str1, str2);
if(com < 0) {
printf("-1");
}
else if(com > 0) {
printf("1");
}
else {
    printf("0");
}
    return 0;
}