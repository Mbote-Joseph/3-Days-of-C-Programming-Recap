#include <stdio.h>
#include <stdlib.h>

void read_score(int *numbers);
void average(int *numbers);
void grade(int sum);
void subject_grade(int *numbers);
void final_grade(int num);

// The main function
int main(void){
    int grades[5];
    
    read_score(grades);
    subject_grade(grades);
    average(grades);
}

// Read the score
void read_score(int *numbers){
    for(int i = 0; i < 5; i++){
        printf("Enter grade %d: ", i+1);
        scanf("%d", &numbers[i]);
    }
}

// Find the average
void average(int *numbers){
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += numbers[i];
    }
    printf("The average of your grades is: %d\n", sum/5);
    printf("===========================================\n");

    printf("\tGrade :");
    grade(sum);
    printf("===========================================\n");
    
}

// Find the grade for each subject
void subject_grade(int *numbers){
    printf("==========================================\n");
    printf("\t\t Final Report\n");
    printf("==========================================\n");
    for (int i = 0; i < 5; i++)
    {
        
        printf("subject %d score is: %d", (i+1), numbers[i]);
        
        printf("\tGrade :");
        final_grade(numbers[i]);
    }
    printf("=====================================\n");
   
}

// Finds the final grade for the total 
void grade(int sum){
    if(sum/5 >= 90){
        printf("\tA\n");
    }
    else if(sum/5 >= 80){
        printf("\tB\n");
    }
    else if(sum/5 >= 70){
        printf("\tC\n");
    }
    else if(sum/5 >= 60){
        printf("\tD\n");
    }
    else{
        printf("\tF\n");
    }
}

// Finds the subject grade
void final_grade(int num){
    if(num>=90){
        printf("\tA\n");
    }
    else if(num>=80){
        printf("\tB\n");
    }
    else if(num>=70){
        printf("\tC\n");
    }
    else if(num>=60){
        printf("\tD\n");
    }
    else{
        printf("\tF\n");
    }
}

