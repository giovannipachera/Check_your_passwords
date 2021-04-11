#include <stdio.h>
#include <string.h>

int main(int argc, char * argv[])
{
    FILE * file_password = fopen("rockyou.txt", "r");
    int found = 0;  # the value of this variable becomes 1 when the password is stored in the wordlist
    char password_read[20], my_password[20];
    
    printf("Insert the password you want to check: ");
    scanf("%s", my_password);

    while (fscanf(file_password, "%s", password_read) != EOF && found == 0)
    {
        if (strcmp(password_read, my_password) == 0) found = 1;
    }
    
    if (found == 1) printf("\nPassword found.\n");
    else printf("\nPassword not found.\n");

    fclose(file_password);

    return 0;
}
