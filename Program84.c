#include<stdio.h>

int CountCap(char str[])
{
    int iCnt =0;
    if(str == NULL)
    {        return 0; }
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {   iCnt++; }
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr[10];
    int iRet = 0;
    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);
    
    iRet = CountCap(Arr);   // Display(100)
    printf("Frequency of capitals is: %d\n",iRet);
    return 0;
}
