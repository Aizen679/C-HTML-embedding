#include <stdio.h>
#include <string.h>

int main() {
    char day[9];
    printf("Enter day of week: ");
    scanf("%s", day);
    strupr(day);
    
    if (strcmp(day, "SATURDAY") == 0 || strcmp
    (day, "SUNDAY") == 0) {
        printf("Holiday.\n");
    } else {
        printf("Working day.\n");
    }
    return 0;
}
           