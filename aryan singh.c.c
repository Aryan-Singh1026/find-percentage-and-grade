/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
     int s1,s2,s3,s4,s5;
    float per;
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    per= (float)(s1+s2+s3+s4+s5)*100/500;
    if(per>=90){
        printf("%.2f Percent\nGrade A",per);
    }
    else if(per>=80){
        printf("%.2f Percent\nGrade B",per);
    }
    else if(per>=70){
        printf("%.2f Percent\nGrade C",per);
    }
    else if(per>=60){
        printf("%.2f Percent\nGrade D",per);
    }
    else if(per>=40){
        printf("%.2f Percent\nGrade E",per);
    }
    else{
        printf("%.2f Percent\nGrade F",per);
    }
    return 0;
}
