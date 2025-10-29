#include<stdio.h>
int main(){
    char d;
    scanf(" %c",&d);
    if (d=='a'||d=='e'||d=='i'||d=='o'||d=='u'||d=='A'||d=='E'||d=='I'||d=='O'||d=='U'){
        printf("VOWEL");
    }
    else {
        printf("CONSONANT");
    }
    return 0;
}
