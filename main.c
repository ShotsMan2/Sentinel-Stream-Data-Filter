#include <stdio.h>
#include <stdlib.h>

int main()
{
     int sayi,i,sum,bas;

    sum=0;


    for(i=1;i<1000;i++){

        bas=0;

        printf("%d. sayiyi girin",i);
        scanf("%d",&sayi);

        if(sayi==-1){
            break;
        }
        else{
            for(;sayi>0;sayi/=10){
                bas++;
            }
            if(bas==2){
                sum++;
            }
        }
    }
    printf("2 basamaklı sayi adedi: %d",sum);

    return 0;
}
