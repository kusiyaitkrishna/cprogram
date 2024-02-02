// c program to check wheather string is palindrome or not without function simple way
#include <stdio.h>
#include <string.h>
int main(){
    char str[100],rev[100];
    int i,j;
    printf("Enter the string: ");
    scanf("%s",str);
    // reversing the string 
    for(i=0;str[i]!='\0';i++){
        for(j=i-1;j>=0;j--){
            rev[i-j-1]=str[j];
    }
    }
    if(rev==str){
        printf("The string is palindrome\n");
    }
    else{
        printf("The string is not palindrome\n");
    }
}
