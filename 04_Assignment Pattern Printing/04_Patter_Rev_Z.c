#include<stdio.h>
#include<conio.h>

int main()
{
            int i = 0, j = 0, Z = 0;

            printf("Enter Size : ");
            scanf("%d",&Z);

            for(i = 1; i <= Z; i++ )
            {
                        for( j = 1; j <= Z; j++ )
                        {
                            if(i == 1 || i == Z || i == j )
                            {
                                    printf(" * ");
                            }
                            else
                            {
                                    printf("   ");
                            }
                        }
                        printf("\n");
            }

            printf("\n=================================\n");

            getch();
            return 0;
}
