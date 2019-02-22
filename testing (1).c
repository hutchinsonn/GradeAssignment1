//not actually a file
#include <stdio.h>
#include <cs50.h>

int main(void){
    int n = get_int("What number?\n");
    int numbers[n];
    for(int i=0;i<n ; i++){
        numbers[i] = i;
        printf("%i\n",numbers[i]);
    }
}
