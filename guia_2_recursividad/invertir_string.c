#include <stdio.h>
#define MAX 100

// char *invertir(char ch[])
// {
//     static char r[MAX];
//     int i = 0;
//     if (*ch == '\0') return "";
//     else {
//         invertir(ch + 1);
//         r[i++] = *ch;
//     }
//     return r;
// }

// int main()
// {
// char string[MAX], *rev;
// scanf("%s", string);
// rev = reverse(string); 
// printf("The reversed string is : %s\n", rev);
// return 0;
// }

void invertir(char *poema)
{
    printf("%s\n", poema);
    char *invertida;
    int i = 0;
    if (*poema == 0){
        printf("Aca\n");
        return;
    }
    else {
        printf("Invertida pre %s\n", invertida);
        invertir(poema + 1);
        // *(invertida+i) = poema;
        *(invertida+i) = *poema;
        printf("Invertida post %s\n", poema);
        // r[i++] = *poema;
    }
    printf("%s", invertida);
    // return r;
}

void invertidor_de_poema(char* poema){
    // char string[MAX] = poema;
    printf("%s\n", poema);
    // printf("%s", invertir(poema));
    // char *aux = invertir(poema);
    invertir(poema);
    printf("%s\n", poema);

    // poema = aux;

// char string[MAX], *rev;
// scanf("%s", string);
// rev = reverse(str); 
// printf("The reversed string is : %s\n", rev);
// return 0;
}

int main(int argc, char const *argv[])
{
    char poema[MAX] = "Hola";
    invertidor_de_poema(poema);
    printf("%s", *poema);
    printf("COncha");
    return 0;
}




// // // char *reverse(char ch[])
// // //    {
// // //     static char r[MAX];
// // //     static int i=0;
// // //     if(*ch == '\0') return "";
// // //     else 
// // //    {
// // //     reverse(ch+1);
// // //     r[i++]=*ch;
// // //    }
// // //     return r;
// // //    }

// // // int main()
// // // {
// // // char string[MAX], *rev;
// // // scanf("%s", string);
// // // rev = reverse(str); 
// // // prinstring is : %s\n", rev);
// // // return 0;
// // // }