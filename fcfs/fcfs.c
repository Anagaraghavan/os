#include<stdio.h>
int main() {
	int frames,l,i,j,k,exist,m[10],str[100],count=0;
	printf("Enter the length of the reference string: ");
	scanf("%d",&l);
	printf("Enter the reference string: ");
	for(i=0;i<l;i++)
		scanf("%d",&str[i]);
	printf("Enter the no. of partitions: ");
	scanf("%d",&frames);
	for(i=0;i<frames;i++)
		m[i]=-1;
	printf("\nThe Page Replacement Process is....\n");
	for(i=0;i<l;i++,exist=0) {
		for(j=0;j<frames;j++)
			if(m[j]==str[i])
				exist=1;
		if(exist==0) {
			m[count%frames]=str[i];
			count++;
		}
		for(k=0;k<frames;k++)
			printf("%d\t",m[k]);
		if(exist==0)
			printf("Page Fault: %d\n",count);
		else
			printf("HIT!\n");
	}
	printf("\nTotal Page Fault = %d\n",count);
	printf("Total Hits = %d\n",l-count);
	printf("Miss Ratio = %d%%\n",(count*100)/l);
	printf("Hit Ratio = %d%%\n\n",((l-count)*100)/l);
	
}


