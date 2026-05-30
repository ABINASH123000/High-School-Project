#include <stdio.h>
#include <string.h>

int main() {
    int a = 0, b, amount = 100000, i, withdrawl, j, deposite;
    char name[2][100], continue_[100], pass2[100], usr[100], password[100], phnumber[100];

    printf("Welcome\n");
    printf("1.Open an account\n");
    printf("2.Set username and password for existing account\n");
    printf("3.Check your account\n");
    scanf("%d", &b);

    switch (b) {
        case 1:
            printf("Enter your Name: ");
            scanf("%s", name);
            printf("Enter your username: ");
            scanf("%s", phnumber);
            printf("Enter your password: ");
            scanf("%s", password);
            printf("Enter the amount you want to add in your bank account: ");
            scanf("%d", &amount);
            printf("\nAny other service needed then type 'yes': ");
            scanf("%s", continue_);
            break;

        case 2:
            printf("Enter your username: ");
            scanf("%s", phnumber);
            printf("Enter your password: ");
            scanf("%s", password);
            strcpy(continue_, "yes");
            break;

        case 3:
            do {
                printf("Options:\n");
                printf("1.Balance Enquire\n");
                printf("2.Withdrawal\n");
                printf("3.Deposit\n");
                printf("4.Exit The Page\n");
                scanf("%d", &a);

                switch (a) {
                    case 1:
                        for (i = 0; i < 5; i++) {
                            printf("\nEnter your username: ");
                            scanf("%s", usr);
                            printf("Enter your password: ");
                            scanf("%s", pass2);

                            if (strcmp(usr, phnumber) == 0 && strcmp(pass2, password) == 0) {
                                printf("\nYou have %d ", amount);
                                i = 5;
                            } else {
                                printf("\nYou have entered the wrong username or password...");
                                i = 0;
                            }
                        }
                        printf("\nAny other service needed then type 'yes': ");
                        scanf("%s", continue_);
                        break;

                    case 2:
                        for (i = 0; i < 5; i++) {
                            printf("\nEnter your username: ");
                            scanf("%s", usr);
                            printf("Enter your password: ");
                            scanf("%s", pass2);

                            if (strcmp(usr, phnumber) == 0 && strcmp(pass2, password) == 0) {
                                printf("\nEnter the amount to deposit: ");
                                scanf("%d", &deposite);
                                printf("\nThe amount was successfully deposited");
                                amount = amount + deposite;
                                printf("\nThe new amount: %d", amount);
                                i = 5;
                            } else {
                                printf("\nYou have entered the wrong username or password...");
                                i = 0;
                            }
                        }
                        printf("\nAny other service needed then type 'yes': ");
                        scanf("%s", continue_);
                        break;

                    case 3:
                        for (i = 0; i < 1; i++) {
                            printf("\nEnter your username: ");
                            scanf("%s", usr);
                            printf("Enter your password: ");
                            scanf("%s", pass2);

                            if (strcmp(usr, phnumber) == 0 && strcmp(pass2, password) == 0) {
                                printf("\nEnter the amount to withdrawal: ");
                                scanf("%d", &withdrawl);

                                for (j = 0; j < 1; j++) {
                                    printf("\nEnter the amount to withdrawal: ");
                                    scanf("%d", &withdrawl);

                                    if (amount > withdrawl) {
                                        printf("\nThe amount was successfully withdrawal");
                                        amount = amount - withdrawl;
                                        printf("\nThe new amount: %d", amount);
                                        j = 1;
                                        i = 5;
                                    } else {
                                        printf("\nInsufficient balance");
                                        printf("\nTry Again...");
                                        j = 0;
                                    }
                                }
                            } else {
                                printf("You have entered the wrong username or password...");
                                i = 0;
                            }
                        }
                        printf("\nAny other service needed then type 'yes': ");
                        scanf("%s", continue_);
                        break;

                    case 4:
                        strcpy(continue_, "no");
                        break;

                    default:
                        printf("\nYou have entered the wrong value\nTry Again...");
                        printf("\nAny other service needed then type 'yes': ");
                        scanf("%s", continue_);
                        break;
                }
            } while (a != 4 && strcmp(continue_, "yes") == 0);
            break;
    }

    printf("Visit soon again...");
    return 0;
}

