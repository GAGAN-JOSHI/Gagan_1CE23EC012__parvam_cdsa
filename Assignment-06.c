#include<stdio.h>
int main()
{
    int score;
    printf("Enter the score:");
    scanf("%d",&score);
    if(score<0)//score>100
    {
        printf("Invalid score,please enter a score between 0 and 100");
    }
    else
    {
        char grade=
        (score>=90)?'A':
        (score>=8)?'B':(score>70)?'C':
        printf("Grade:%c",grade);
    }
    return 0;
}