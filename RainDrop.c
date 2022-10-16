#include<stdio.h>
#include<string.h>

int main(){
    
    int n,i;
    char str[100];
    
    scanf("%d",&n);
    
    if (n%3==0){
        strcat(str,"Pling");
    }
    if (n%5==0){
        strcat(str,"Plang");
    }
    if (n%7==0){
        strcat(str,"Plong");
    }
    if(n%3!=0 && n%5!=0 && n%7!=0){
        printf("%d",n);
    }
    else{
        printf("%s",str);
    }
    
    return 0;
}