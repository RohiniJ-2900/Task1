
codeforuniqchar

#include <stdio.h>

int main()
{
    char qa[8] = { 'A','b','A','C','b','b','c','A' };
    int i,j;

    char ans[5];
    int len =  sizeof(qa)/sizeof(qa[0]); //no. of elements in quest_arr
   printf("ans[5] : ", qa[i]);
    for(i=0;i<len;i++)
    {
        int count = 0;
        for(j=i+1;j<len;j++)
        {  // increment if values are duplicate 
                if(qa[i] == qa[j])
                {
                    count++;
                }
        }
        if(count==0)
        {
            printf("%c ",qa[i]);
        }
         
    }

    return 0;
}
