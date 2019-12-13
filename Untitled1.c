#include <stdio.h>
#include <stdlib.h>

int main()
{

//system("c:\\windows\\system32\\ipconfig");
execl("c:\\windows\\system32\\ipconfig","ipconfig",0);

    return 0;
}
