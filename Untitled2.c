#include <stdio.h>

struct Diseases
{
    int key1;
    int key2;
    char names[20];
};

int opt()
{

}

int main()
{
    int opt1, opt2;
    char check;
    printf("Symptoms\n1. Difficult to see in low light\n2.Heart Burn\n3.Burning stomach pain.\n4.Blurred vision at night\n\n");
        struct Diseases array[] =
        {
            {1, 4, "Night Blindness\n"},
            {2, 3, "Ulcer\n"},
        };
    do
    {
        printf("Enter you first option: ");
        scanf("%d", &opt1);
        printf("Enter you second option: ");
        scanf("%d", &opt2);


        for (int counter = 0; counter < 2; counter++)
        {
            if (opt1 == array[counter].key1 || opt1 == array[counter].key2)
            {
                if (opt2 == array[counter].key1 || opt2 == array[counter].key2)
                {
                    printf(array[counter].names);

                    break;
                }
                else printf("Invalid Symptom! Do again\n\n");
            }
        }


    }while(opt1 != 0);

}
