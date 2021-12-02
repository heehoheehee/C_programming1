#include <string.h>
#include <stdio.h>

struct city{
    char name[20];
    char country[20];
    int population;
};

int main(void) {
    struct city arr[3];
    int i;
    printf("Input three cities:\n");
    for(i = 0; i<3; i++){
        printf("Name>");
        scanf("%s",arr[i].name);
        printf("Country>");
        scanf("%s",arr[i].country);
        printf("Population>");
        scanf("%d",&arr[i].population);
    }
    printf("Printing the three cities:\n");
    for(i=1;i<4;i++){
        printf("%d. %s in %s with a population of %d people\n",i,arr[i-1].name,arr[i-1].country,arr[i-1].population);
    }
    return 0;
}


