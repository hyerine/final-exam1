#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num;
    int nnum;
    int snum;
    char name[15];
    int korean;
    int math;
    int english;

    while(1){
        
        printf("sellect the number.\n");
        printf("1.input\n2.print\n3.save\n4.loding\n5.exit\n\n");
        scanf("%d",num);
        getchar();

        if(!strcmp("1",num))
        {   
            printf("intput the data.\n");
        }
        if(!strcmp("2",num))
        {
            printf("this is\n");
        }
        if(!strcmp("3",num))
        {
            printf("hi\n");
        }   
        if(!strcmp("4",num))
        {
            printf("bye\n");
        }
        if(!strcmp("5",num))
        {
            printf("exit the program..\n\n");
            exit(1);
        }
    }

    return 0;

}

