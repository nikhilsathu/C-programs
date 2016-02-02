#include <stdio.h>
// program for matrix multiplication
#define aRows 2
#define aCols 2
#define bRows 2
#define bCols 2
int main(void) {
	int a[aRows][aCols]={{1,2},{3,4}};
	int b[bRows][bCols]={{1,2},{3,4}};
	int c[10][10];
	int cRows,cCols;
	int i,j,k;
/*printf("enter order of matrix a:");
scanf("%d %d",&aRows,&aCols);
printf("\nenter values of matrix a:");
for(i=0;i<aRows;i++){
	for(j=0;j<aCols;j++){
		scanf("%d ",&a[i][j]);
	}
}
printf("\nenter order of matrix b:");
scanf("%d %d",&aRows,&aCols);
printf("\nenter values of matrix b:");
for(i=0;i<bRows;i++){
	for(j=0;j<bCols;j++){
		scanf("%d ",&b[i][j]);
	}
}*/
	if(aCols==bRows){
		cRows=aRows, cCols=bCols;
		for(i=0;i<cRows;i++){
			for(j=0;j<cCols;j++){
				c[i][j]=0;
				for(k=0;k<aCols;k++){
					c[i][j] += a[i][k]*b[k][j];
				}
			}		
		}
		printf("\nmultiplied matrix c:\n");
		for(i=0;i<cRows;i++){
			for(j=0;j<cCols;j++){
				printf("%2d ",c[i][j]);
			}										printf("\n");
		}
	}
	else{
		printf("\nmultiplication is not possible");
	}
	return 0;
}



