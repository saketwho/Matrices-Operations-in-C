#include <stdio.h>
#include <stdbool.h>
int main (){
    int rows, cols;
    printf("Enter the number of rows and coloumns of the Matrix: ");
    scanf("%d %d",  &rows, &cols);
    
    int matrix[rows][cols];
    int matrix2[rows][cols];
    printf("Enter the elements of the Matrix: ");
    for (int i=0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The matrix you entered is: \n");
    for(int i = 0; i < rows; i++){
        for (int j = 0;  j < cols; j++){
            printf("%d ", matrix[i] [j]);
        }
        printf("\n");
    }
    int yesNo;
    printf("Do you wish to perform any operations on the Matrix? \n");
    printf("1.Yes \n2.No \n");
    scanf("%d", &yesNo);

    if (yesNo == 1){
        
   
      printf("What operation would you like to perform? \n");
      printf("1. Transpose of Matrix \n");
      printf("2. Addition of Matrix \n");
      printf("3. Subtraction of Matrix \n");
      printf("4. Multiplication of Matrix \n ");

      int choice; 
      scanf("%d", &choice);
      if (choice == 1){
        printf("The transpose of Matrix is: \n");
        for(int i=0; i < rows; i++){
            for (int j=0; j<  cols; j++){
                printf("%d ", matrix[j][i]);
            }
        printf("\n");
        }
      }

      if (choice == 2){
        printf("Enter the elements of the Matrix: ");
    for (int k=0; k < rows; k++){
        for (int l = 0; l < cols; l++){
            scanf("%d", &matrix2[k][l]);
        }
    }
    printf("The matrix you entered is: \n");
    for(int k = 0; k < rows; k++){
        for (int l = 0;  l < cols; l++){
            printf("%d ", matrix2[k] [l]);
        }
        printf("\n");
    }
    printf("\nThe sum of the two Matrixes is: \n");
   for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
        int matrixSum = matrix[i][j] + matrix2[i][j];
        printf("%d ", matrixSum);
    }
    printf("\n");
}
      }

 if (choice == 3){
        printf("Enter the elements of the Matrix: ");
    for (int k=0; k < rows; k++){
        for (int l = 0; l < cols; l++){
            scanf("%d", &matrix2[k][l]);
        }
    }
    printf("The matrix you entered is: \n");
    for(int k = 0; k < rows; k++){
        for (int l = 0;  l < cols; l++){
            printf("%d ", matrix2[k] [l]);
        }
        printf("\n");
    }
    printf("\nThe difference of the two Matrixes is: \n");
   for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
        int matrixDiff = matrix[i][j] - matrix2[i][j];
        printf("%d ", matrixDiff);
    }
    printf("\n");
}
   
            
    }

if (choice ==4){
          printf("Enter the elements of the Matrix: ");
    for (int k=0; k < rows; k++){
        for (int l = 0; l < cols; l++){
            scanf("%d", &matrix2[k][l]);
        }
    }
    printf("The matrix you entered is: \n");
    for(int k = 0; k < rows; k++){
        for (int l = 0;  l < cols; l++){
            printf("%d ", matrix2[k] [l]);
        }
        printf("\n");
    }
   printf("\nThe product of the two Matrixes is: \n");

for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {

        int matrixProduct = 0;

        for (int k = 0; k < cols; k++) {
            matrixProduct += matrix[i][k] * matrix2[k][j];
        }

        printf("%d ", matrixProduct);
    }
    printf("\n");
}
  
}

     else if(yesNo==2){
        printf("aight lil bro cya ");
     }
   else{
    printf("The input value doesnt exist please try again from start.");
   }
    
    return 0;
}
}