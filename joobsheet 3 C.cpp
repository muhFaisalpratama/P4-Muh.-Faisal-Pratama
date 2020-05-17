#include <stdio.h>
#include <conio.h>
main()
{
int matrix1[9][2], matrix2[8][9],i,j;
printf("MATRIX 1\n");
for(i=0; i<=0; i++){
for(j=0; j<=0; j++){
printf("NIM : ",i,j);
scanf("%d",&matrix1[i][j]);
}
}
printf("MATRIX 2\n");
for(i=0; i<=0; i++){
for(j=0; j<=0; j++){
printf("NIM : ",i,j);
scanf("%d",&matrix2[i][j]);	
}
}
printf("\nHasil Penjumlahan\n\n");
for(i=0; i<=0; i++){
for(j=0; j<=0; j++)
printf("%d\t",matrix1[i][j]+matrix2[i][j]);
printf("\n");}getch();
}
