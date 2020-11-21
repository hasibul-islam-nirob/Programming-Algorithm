
#include<stdio.h>
#include<iostream>

using namespace std;

int adj[100][100];
int main(){

    int node, eage,i,j,n1,n2;

    printf("Enter Value Of Node : ");
    scanf("%d",&node);
    printf("Enter Value Of Eage : ");
    scanf("%d",&eage);

    for(i=0; i<eage; i++){
        scanf("%d %d",&n1,&n2);
        adj[n1][n2]=1;
        adj[n2][n1]=1;
    }

    for(i=0; i<node; i++){
        for(j=0; j<node; j++){
            printf("%d\t",adj[i][j]);
        }
        printf("\n");
    }

    return 0;
}
