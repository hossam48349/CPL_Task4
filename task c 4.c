#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int m , n ,x  ;
	printf("please entre the num of rows :  ");
	scanf("%d", &n);
		printf("please entre the num of colmns :  ");
	scanf("%d", &m);
	int array [n][m] ;
		for ( int i=0 ;i<n ; i++ )
	{
		for (  int j=0 ; j< m; j++)
		{
		array [i][j]=rand()%10 ;
		}
		printf("\n");
	}


	for ( int i=0 ;i<n ; i++ )
	{
		for (  int j=0 ; j< m; j++)
		{
			printf("%d \t", array[i][j]);
		}
		printf("\n");
	}
	printf("enter the number to find : ");
	scanf("%i" , &x);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (x == array[i][j]){
                printf("found in array ");
            }
        
            else if ( x ==! array[i][j]){
                printf("not found in array ");
            }
        }
        
    }


	return 0;


}
