#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Random function goes here
void orderDESC(int t[], int pcs) {
    int i, j, temp;
    for(j = 0; j < pcs - 1; ++j) {
        for(i = 0; i < pcs - 1; ++i) {
            if(t[i] < t[i + 1]) {
                temp = t[i];
                t[i] = t[i + 1];
                t[i + 1] = temp;
            }
        }
    }
}

int check_authentication(char *password) {
 char password_buffer[16];

 strcpy(password_buffer, password);

 if(strcmp(password_buffer, "michael") == 0) {
 return 1;
 }
 else if(strcmp(password_buffer, "tsikerdekis") == 0) {
 return 1;
 }
 else {
 return 0;
 }
}

int main(int argc, char *argv[]) {
 if(argc < 2) {
 printf("Usage: %s <password>\n", argv[0]);
 exit(0);
 }
 if(strlen(argv[1]) < 17) {
    if(check_authentication(argv[1])) {
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf(" Access Granted.\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    } else {
    printf("\nAccess Denied.\n");
    }
 } else {
     printf("Too long \n");
     exit(0);
 }
}
