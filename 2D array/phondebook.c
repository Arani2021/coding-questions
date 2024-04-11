#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 100


struct contact {
    char name[50];
    char phone[20];
};

int main() {
    struct contact phone_book[MAX_CONTACTS];
    int num_contacts = 0;
    char choice;

  
    do {
        printf("Enter name: ");
        scanf("%s", phone_book[num_contacts].name);

       
        do {
            int exists = 0;
            printf("Enter phone number: ");
            scanf("%s", phone_book[num_contacts].phone);

           
            for (int i = 0; i < num_contacts; i++) {
                if (strcmp(phone_book[i].phone, phone_book[num_contacts].phone) == 0) {
                    printf("Phone number already exists. Please enter a new phone number.\n");
                    exists = 1;
                    break;
                }
            }

            
            if (!exists) {
                break;
            }
        } while (1);

        num_contacts++;

        printf("Add another contact? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' && num_contacts < MAX_CONTACTS);

    
    printf("\nPhone Book\n");
    printf("-----------\n");
    for (int i = 0; i < num_contacts; i++) {
        printf("%s: %s\n", phone_book[i].name, phone_book[i].phone);
    }

    return 0;
}

