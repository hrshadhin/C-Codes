
#include <windows.h>
#include <stdio.h>

main()
{
int character;
while(1){
 for(character=8;character<=222;character++)

 if(GetAsyncKeyState(character)==-32767)
    printf("%d : %c\n",character,character);
};
getch(0);
return 0;
}
