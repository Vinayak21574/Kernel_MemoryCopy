# include <stdio.h>
# include <linux/kernel.h>
# include <sys/syscall.h>
# include <unistd.h>
# include <errno.h>

# define rows 2
# define cols 3

int main(){
	
	float src[rows][cols]={{1.1,1.2,1.3},{2.1,2.2,2.3}};
	
	float dest[rows][cols];

	int temp=syscall(452,src,dest);

	if(temp){
		printf("FAILED(error code %d)\n",temp);
	}

	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			printf("%0.1f\t",dest[i][j]);
			}
		printf("\n");
	}
	return 0;
}
