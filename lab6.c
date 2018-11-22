#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define cnt 255

bool isVowel (char inp){
    char vowels[12] = {'a','e','i','o','u'};
    for (int i = 0; i < 5; i++){
        if (vowels[i] == tolower(inp)){
            return true;
        }
    }
    return false;
}

int main(void)
{
    int len = 0;
    int word = 0, wordStart = 0;
    char input[cnt];
    char words[cnt][cnt];
    fgets(input,cnt,stdin);

    for (int i = 0; i < cnt; i ++) {
        if (input[i] == '\n'){
            break;
        }
        else if (input[i] != ' '){
            words[word][i-wordStart] = input[i];
        }
        else {
            words[word][i-wordStart] = '\0';
            wordStart = i + 1;
            word++;
            len++;
        }
    }
    for (int i = 0; i < len+1; i++ ){
        bool hasVowel = false;
        for (int j = 0; j < cnt; j++){
            if (isVowel(words[i][j])){
                hasVowel = true;
                break;
            }
            if (words[i][j] == '\0'){
                break;
            }
        }
        if (!hasVowel) {
            for (int j = 0; j < cnt; j++){
                printf("%c", words[i][j]);
            }
            printf("\n");
        }
    }
}
