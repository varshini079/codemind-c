#include<stdio.h>

int main()
{
    int n,t,i,j;
    
        char str[100];
        scanf("%s",str);
        for(j=0;str[j]!=NULL;j++){
            switch (str[j])
            {
            case '0':
                if(j==0){
                    printf("0");
                }
                else{
                    printf("000");
                }
                break;

            case '1':
                if(j==0){
                    printf("1");
                }
                else{
                    printf("001");
                }
                break;
                
            case '2':
                if(j==0){
                    printf("10");
                }
                else{
                    printf("010");
                }
                break;
                
            case '3':
                if(j==0){
                    printf("11");
                }
                else{
                    printf("011");
                }
                break;
                
            case '4':
                    printf("100");
                    break;
                
            case '5':
                    printf("101");
                    break;
                
            case '6':
                    printf("110");
                    break;
                
            case '7':
                    printf("111");
                    break;
            }
        }
    

    return 0;
}