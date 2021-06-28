#include <stdio.h>
#include <string.h>

float grade_to_point(char *ptr)
{
         if     (strcmp(ptr,"A+") == 0 || strcmp(ptr,"a+") == 0)  return 4.00;    
        else if (strcmp(ptr,"A")  == 0 || strcmp(ptr,"a")  == 0)  return 3.75;
        else if (strcmp(ptr,"A-") == 0 || strcmp(ptr,"a-") == 0)  return 3.50;
        else if (strcmp(ptr,"B+") == 0 || strcmp(ptr,"b+") == 0)  return 3.25;
        else if (strcmp(ptr,"B")  == 0 || strcmp(ptr,"b")  == 0)  return 3.00;
        else if (strcmp(ptr,"B-") == 0 || strcmp(ptr,"b-") == 0)  return 2.75;
        else if (strcmp(ptr,"C+") == 0 || strcmp(ptr,"c+") == 0)  return 2.50;
        else if (strcmp(ptr,"C")  == 0 || strcmp(ptr,"c")  == 0)  return 2.25;
        else if (strcmp(ptr,"D")  == 0 || strcmp(ptr,"d")  == 0)  return 2.00;
        else if (strcmp(ptr,"F")  == 0 || strcmp(ptr,"f")  == 0)  return 0.00;
}

int main ()
{
    char str1[9][4];
    float sum_cg=0;
        for (int i=0 ; i<9 ;i++)
            {
                    if (i < 5) 
                    {
                            printf("%d no 3.0 credit course grade ",i+1);
                            gets(str1[i]);
                            sum_cg += 3* grade_to_point(str1[i]);         
                    }
                    else if (i>=5 && i<8)
                    {
                            printf("%d no 1.5 credit course grade ",i-4);
                            gets(str1[i]);
                            sum_cg += 1.5* grade_to_point(str1[i]);
                    }
                    else if (i>=8 && i<9)
                    {
                            printf("%d no .75 credit course grade ",i-7);
                            gets(str1[i]); 
                            sum_cg += .75* grade_to_point(str1[i]);  
                    }
            }
    printf("Your CG is %.2f",sum_cg/20.25);             
}
