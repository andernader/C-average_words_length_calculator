#include <stdio.h>
#include <string.h>

int main(void){
    char word[100] = {0};
    char temp;
    float average_length = 0;
    int words_number = 0;
    while(1){
        scanf("%s", word);

        average_length += strlen(word);
        words_number++;

        temp = getchar();
        if(temp == '\n')
            break;
    }

    average_length = average_length / words_number;
    printf("Average length of a word in this sentence is: %.1f\n", average_length);
    return 0;
}
