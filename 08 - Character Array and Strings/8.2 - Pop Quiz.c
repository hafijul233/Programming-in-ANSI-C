#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
  int i=0, ascii, result=0;
  char answer[100],right_ans[]="dennis ritchie";

    printf("Who is the Inventor of C: \n");
    printf("Answer: ");

    do{
      gets(answer);

      while(answer[i]!='\0'){
        answer[i]=tolower(answer[i]);
        i++;
      }
      if(strcmp(answer,right_ans) == 0){
        printf("Good!\n");
        break;
      }
      else{
        printf("Try Again!!\n");
        result++;
      }
    }while(result<3);

    return 0;
}
