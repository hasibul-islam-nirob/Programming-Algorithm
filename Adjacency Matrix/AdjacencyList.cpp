#include<stdio.h>
#include<iostream>
#include<vector>

using namespace std;

int main(){

    int node, eage,i,j,n1,n2;
    printf("Enter Value Of Node : ");
    scanf("%d",&node);
    printf("Enter Value Of Eage : ");
    scanf("%d",&eage);

    vector<int> vac[node];

    for(i=0; i<eage; i++){
        scanf("%d %d",&n1,&n2);
        vac[n1].push_back(n2);
        vac[n2].push_back(n1);
    }

    for(i=0; i<vac[node].size(); i++){
       for(j=0; j<vac[i].size(); j++){
            printf("%d ",vac[i][j]);
       }

        printf("\n");
    }

}

