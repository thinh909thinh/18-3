#include<stdio.h>
char main(){
    char kytu;
    printf("nhap vao ky tu:");
    scanf("%c",&kytu);
    switch (kytu)
    {
        case'A':
        case'a':
            printf("adac");
            break;
        case 'b':
        case 'B':
            printf("basic");
            break;
        case 'C':
        case 'c':
            printf("co");
            break;
        case 'F':
        case'f':
            printf("foran");
            break;
        
        default:
        printf("no");
            break;
    }
    }