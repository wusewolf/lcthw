#include <stdio.h>

//Arrays Of Strings, Looping
int main(int argc, char *argv[])
{
    int i = 1;
    for(; i < argc; i++){
        printf("arg %d: %s\n", i, argv[i]);
    }
    
    char *states[] = {"California", "Oregon","Washington",
                    "Texas"};
    int num_states = sizeof(states)/sizeof(char *);
    for (i = 0; i < num_states; i++)
    {
        printf("state %d: %s\n", i, states[i]);
    }

    return 0;
}
