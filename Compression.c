/* This program reads a string, then compresses consecutive repeated characters into an integer of how many repetitions there are
and of which character. It then returns the modified string. 
For example, "cdaaaaaabbbbaaaasdd" becomes "cd6a4b4as2d" */

#include <stdio.h>
#include <string.h>
 
int main(){
    char str1[100000];
    long long int idx = 0, counter = 0;
    
    scanf("%s", str1);
    while (idx <=strlen(str1)){
        if ((str1[idx] == str1[idx +1]) && (str1[idx] != '\0')){
            counter++;
        }
        else if (str1[idx] == '\0'){
            break;
        }
        else{
            if (counter == 0){
                printf("%c", str1[idx]);
            }
            else {
                 printf("%lld%c", counter +1 , str1[idx]);
                 counter = 0;
            }
        }
       idx++;
    } 
return 0;
}
