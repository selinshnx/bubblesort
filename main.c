//
//  main.c


#include <stdio.h>

int main(void) {
    
    int ar[50], num, m, n, temp;
    
    printf("Enter the number of elements you want in array: ");
    scanf("%d", &num);
    
    printf("Please enter the value of elements: ");
    
    for(m=0; m < num; m++)
        scanf("%d", &ar[m]);
    for (m=0; m < num-1; m++) {
        for(n=0; n < num-m-1; n++) {
            if(ar[n]>ar[n+1]){
                temp = ar[n];
                ar[n] = ar[n+1];
                ar[n+1] = temp;
            }
        }
    }
    printf("\narray after implementinng bubble sort: " );
    for(m = 0; m < num; m++){
        printf("%d ", ar[m]);
    }
    
    return 0;
}
