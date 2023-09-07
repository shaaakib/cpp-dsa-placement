#include <stdio.h>

// Function to check if a year is a leap year
int isLeapYear(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

// Function to print leap years within a given interval
void printLeapYears(int startYear, int endYear) {
    printf("Leap years:\n");

    for (int i = startYear; i <= endYear; i++) {
        if (isLeapYear(i)) {
            printf("%d\n", i);
        }
    }
}

int main() {
    int startYear, endYear;

    printf("Print leap years between two given years\n");
    
    printf("Enter Start year: ");
    scanf("%d", &startYear);
    
    printf("Enter End year: ");
    scanf("%d", &endYear);

    printLeapYears(startYear, endYear);

    return 0;
}



// #include <stdio.h>
// int main()
// {
// 	int startYear, endYear, i;
	
// 	//print a string about the program
// 	printf("Print leap years between two given years \n");
    
//     //get the start year from user
// 	printf("Enter Start year: ");
//    	scanf("%d", &startYear);
   	
//     //get the end year from user
// 	printf("Enter End year: ");
//    	scanf("%d", &endYear);
	
// 	printf("Leap years:\n");	
	
// 	//loop through between the start and end year
// 	for(i=startYear; i <= endYear; i++){
		
// 		//check if the (i) year is a Leap year if yes print
// 		if( (0 == i % 4) && (0 != i % 100) || (0 == i % 400) ){
// 			printf("%d\n", i);
// 		}
// 	}
	
//     return 0;
// }
