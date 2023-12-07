// #include <stdio.h>

// int main() {
//     char name [20];
//     printf("Enter name : ");
//     scanf("%s", name);

//     printf("Name : %s\n",name);
//     printf("First 4 bit of Name : %.4s\n",name);

//     switch (name[2])
//     {
//     case '/0':
//         printf("Enter name with 3 or more than 3 characters");
//         break;
    
//     default:
//         printf("Third bit of name is %c", name[2]);
//         break;
//     }
// }

#include <stdio.h>
#include <string.h>

int main() {
    char name[20];

    // Input the name
    printf("Enter a name: ");
    scanf("%s", &name);

    // (I) Print the name
    printf("(I) Name of the person: %s\n", name);

    // (II) Print the first 4 bits of the name
    printf("(II) First 4 bits of the name: %.4s\n", name);

    // (III) Using switch case to display the character at the third index of the name
    switch (name[2]) {
        case '\0':
            printf("(III) Invalid index (name is too short)\n");
            break;
        default:
            printf("(III) Character at the third index: %c\n", name[2]);
    }

    // (IV) Displaying the character at the end of the array
    int len = strlen(name);
    if (len > 0) {
        printf("(IV) End bit of the array: %c\n", name[len - 1]);
    } else {
        printf("(IV) Invalid index (name is empty)\n");
    }

    return 0;
}
