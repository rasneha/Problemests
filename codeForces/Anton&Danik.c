#include<stdio.h>
#include<string.h>
int main() {
    int n, danik = 0, anton = 0;
    scanf("%d", &n);
    char s[n + 1];
    scanf("%s", s);
    for (int i = 0; i < n; i++) {
    if (s[i] == 'A') {
     anton++;
     } 
    else if (s[i] == 'D') {
     danik++;
   }
    }
    if (anton > danik) {
  printf("Anton");
    } else if (danik > anton) {
        printf("Danik");
    } else {
        printf("Friendship");
    }
    return 0;
}