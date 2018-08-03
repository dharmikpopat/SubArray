#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	
	int a[]={1,2,3,4,5};
	
	int s=sizeof(a);
	int len=s/4;	
	int temp=len;
	
	int x=0,times=0;
	for(int i=0;i<=temp;i++){
		
		if(x>=temp-1){
		break;
		}
		
		else{
			int j=0;
			while(j<=i){					
				if (times==len && len>=0){
					times=0;
					len=len-1;
					x++;
					i=0;
				}
				printf("%d",a[j+x]);
				j++;
			}
			times++;
			printf("\n");
		}
		
	}
	
}

	
