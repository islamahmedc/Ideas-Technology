#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char string [1000], i;
    gets(string);
    
    //check every digit from 0 to 9 throught string elements.
    for(i =0; i<10; i++) {
        
        int counter=0 , j;
        //comapre each digit with every element of string.
        for(j =0;string[j] != '\0';j++){
            
            //according to ASCII Code table digit 0 begins from value =48
            //if (ASCII value of digit == ASCII value of string element)
            if((i+48) == (string[j]))
            {
                counter+=1;
            }
        }
        printf("%d ",counter);
    }
    return 0;
}
