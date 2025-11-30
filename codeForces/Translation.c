#include<stdio.h>
#include<string.h>
int main(){
int c=0;
char s[101];
char t[101];
scanf("%s",s);
scanf("%s",t);

int lenth=strlen(s);
if (strlen(t)!=lenth){
    printf("NO");
    return 0;
}

int l=strlen(s);
int i=0;
while(i<l){
    if(s[i]==t[lenth-1]){
        c++;
    }
    else {
        break;
    }
    i++;
    lenth--;
}
if (c==l){
    printf("YES");
}
else {
    printf("NO");
}
    return 0;
}