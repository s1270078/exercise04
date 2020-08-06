#include <stdio.h>
#include <stdlib.h>

int main(){
int i,x;
int head=0,tail=0;
char s[8];

printf("Who are you? ");
scanf("%s",s);
printf("Hello,%s!\n",s);

printf("Tossing a coin...\n");

for(i=0;i<3;i++){
x=rand();
if(x%2==0){
printf("Round %d: Head\n",i+1);
head++;
}
else{
printf("Round %d: Tail\n",i+1);
tail++;
}
}

printf("Heads: %d, Tails: %d\n", head, tail);

return 0;
}
