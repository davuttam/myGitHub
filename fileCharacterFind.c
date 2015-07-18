#include <stdio.h>

int main()
{
    FILE *fp;
    int i=0;
    char ch,c;

   printf("enter the character what to find ;\n");
   scanf("%c",&ch);

    fp = fopen("/home/uttam/INPUT.txt", "r");



    while((c= fgetc(fp))!= EOF) /*reading the all the characters till end of the file*/
     {
        if (c == ch)
        {
            i++;
        }
    }

    fclose(fp);

     printf("%c character come %d times.\n",ch,i);

    return 0;
}
