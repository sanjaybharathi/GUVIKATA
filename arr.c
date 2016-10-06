 #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    int main()
    {
        char x[2];
        char int_chari[11];
        int pair_val;
        int i,counter=2,size_inp;
        unsigned long int input;
        printf("Enter the integer:\n");
        scanf("%lu",&input);
        sprintf(int_chari,"%lu",input);
        size_inp=strlen(int_chari);
        char int_charf[size_inp];
        strcpy(int_charf,int_chari);
        for(i=0;i<size_inp;i++)
        {
            x[0]=int_charf[i];
            x[1]=int_charf[i+1];
            pair_val=atoi(x);
            if((pair_val>=10)&&(pair_val<=25))
            {
                counter++;
            }
        }
        printf("\n%d\n",counter);
        return 0;
    }
