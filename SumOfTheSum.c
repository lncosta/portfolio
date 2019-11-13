/*Given an integer X, the program calculates the sum of its digits. 
It then calculates the sum of the digits of the resulting number, and so forth, until it reaches an integer of a single digit. 
The program then returns said digit, and how many sums were made.*/

#include <stdio.h>
#include <math.h>
long long int F = 1000000007;
 
long long int glarge(char word[1000000], long long int* cont){
    long long int sum = 0, i = 0;
 
    while (word[i] != '\0'){
        if (word[i] == '1'){
            sum = sum + 1;
        }
       else  if (word[i] == '1'){
            sum = sum + 1;
        }
        else  if (word[i] == '2'){
            sum = sum + 2;
        }
        else  if (word[i] == '3'){
            sum = sum + 3;
        }
        else  if (word[i] == '4'){
            sum = sum + 4;
        }
        else  if (word[i] == '5'){
            sum = sum + 5;
        }
        else  if (word[i] == '6'){
            sum = sum + 6;
        }
        else  if (word[i] == '7'){
            sum = sum + 7;
        }
        else  if (word[i] == '8'){
            sum = sum + 8;
        }
        else  if (word[i] == '9'){
            sum = sum + 9;
        }
        i++;
    }
    
    *cont += 1;
    return sum;
  
}
long long int add_digits(long long int n) {
  static int sum = 0;
 
  if (n == 0) {
    return 0;
  }
  sum = n%10 + add_digits(n/10);
 
  return sum;
}
 
long long int g(long long int x, long long int* cont){
    long long int value, sum = 0;
    if (x < 10){
        *cont += 1;
        return x;
    }
    else {
        sum = add_digits(x);
        *cont += 1;
        value = g(sum, cont);
    }
    return value;
}

int main(){
    char word1[1000000];
    long long int x, n, cont = 0;
 
    scanf("%s", word1);
    x = glarge(word1, &cont);
    if (x < 10){
         printf("%lld %lld", x, cont);
    }
    else {
       n = g(x, &cont);
       printf("%lld %lld", n, cont);
    }
    return 0; 
}
