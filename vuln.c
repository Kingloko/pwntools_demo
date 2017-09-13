#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void get_flag();
void vuln_func();
char password[] = "password";
char username[] = "username";
int main(){


char buffer[32];
char buffer2[32];

printf("welcome to your first CTF!\n");
printf("username:");
scanf("%31s",buffer);
if(strcmp(username, buffer) != 0){
    printf("wrong username\n");
    return 1;
}
printf("password:");
scanf("%31s",buffer2);
if(strcmp(buffer2,password)!= 0){
    printf("wrong password\n");
    return 1;
}

printf("you succesfully logged in!\n");

vuln_func();
return 0;
}

void get_flag(){
    printf("\nflag{w00tw00tIizH4cker}\n");
}

void vuln_func(){
    
    char small_buf[8];
    printf("what should I do next?\n");
    scanf("%302s",small_buf);
    printf("NO WAY!\n");
}
